#include <iostream>
#include <string>
#include <cctype>
using namespace std;


template <typename T>
class Stack {
private:
    int size;
    int tos;
    T* arr;

public:
    Stack(int size = 100) {
        this->size = size;
        this->tos = -1;
        arr = new T[size];
    }

    ~Stack() {
        delete[] arr;
    }

    int push(T v) {
        if (tos < size - 1) {
            arr[++tos] = v;
            return 1;
        }
        return 0;
    }

    int pop(T& v) {
        if (tos >= 0) {
            v = arr[tos--];
            return 1;
        }
        return 0;
    }

    T top() {
        return (tos >= 0) ? arr[tos] : T();
    }

    bool empty() {
        return tos == -1;
    }
};


int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int applyOp(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0;
    }
}

int evaluateExpression(string& expr) {
    Stack<char> ops(expr.size());
    Stack<int> vals(expr.size());

    for (int i = 0; i < expr.size(); i++) {

        char c = expr[i];

        if (c != ' '){

            if (isdigit(c)) {
                int val = 0;
                while (i < expr.size() && isdigit(expr[i])) {
                    val = val * 10 + (expr[i] - '0');
                    i++;
                }
                i--;
                vals.push(val);
            }
    
            else if (c == '(') {
                ops.push(c);
            }
    
            else if (c == ')') {
                char op;
                ops.pop(op);
                while (op != '(') {
                    int b, a;
                    vals.pop(b);
                    vals.pop(a);
                    vals.push(applyOp(a, b, op));
                    ops.pop(op);
                }
            }
    
            else if (c == '+' || c == '-' || c == '*' || c == '/') {
                while (!ops.empty() && precedence(ops.top()) >= precedence(c)) {
                    char op;
                    ops.pop(op);
                    int b, a;
                    vals.pop(b);
                    vals.pop(a);
                    vals.push(applyOp(a, b, op));
                }
                ops.push(c);
            }
        }

    }

    while (!ops.empty()) {
        char op;
        ops.pop(op);
        int b, a;
        vals.pop(b);
        vals.pop(a);
        vals.push(applyOp(a, b, op));
    }

    int result;
    vals.pop(result);
    return result;
}

int main() {
    string expr;
    cout << "Enter: ";
    getline(cin, expr);

    int out = evaluateExpression(expr);
    cout << "Output = " << out << endl;
    return 0;
}
