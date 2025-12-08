from getch import getch
import os

students = []
menu = ["Register", "Login", "display", "exit"]
current_index = 0

def print_menu():
    os.system("clear")
    for i, el in enumerate(menu):
        if i == current_index:
            print(f"\033[31m{el}\033[0m")  # red text
        else:
            print(el)

def add_new():
    print("======== New Student ========")
    name = input("Enter student name: ")
    age = input("Enter student age: ")
    gpa = input("Enter student gpa: ")
    students.append({"name": name, "age": age, "gpa": gpa})

def display():
    for student in students:
        for k, v in student.items():
            print(f"{k} ==> {v}")
        print("="*20)
    print("Press any key...")
    getch()

while True:
    print_menu()
    key = getch()

    if key == chr(27):
        next1 = getch()
        next2 = getch()
        if next1 == '[':
            if next2 == 'A':
                current_index = (current_index - 1) % len(menu)
            elif next2 == 'B':
                current_index = (current_index + 1) % len(menu)
    elif key == '\n':
        if current_index == 0:
            add_new()
        elif 
        elif current_index == 2:
            display()
        else:
            exit()
