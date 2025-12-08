import json
from getch import getch

def login():
    email = input("Enter email: ")
    password = input("Enter password: ")
    print(password)
    try:
        file = open("data/students.json", "r")
        data = json.load(file)
    except:
        data = []
    
    for student in data:
        if not isinstance(student, dict):
            continue
        if student["email"] == email and student["password"] == password:
            print("Login successfully...")
            getch()
            return True
        # else:
        #     print("Sorry Wrong Credentails...")
        #     getch()
        
    print("Sorry Wrong Credentails...")
    getch()
    return False
    
