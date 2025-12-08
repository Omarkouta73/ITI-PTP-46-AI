import json
from getch import getch

def login():
    email = input("Enter email: ")
    password = input("Enter password: ")
    try:
        file = open("Auth/data/students.json", "r")
        data = json.load(file)
    except Exception as e:
        print(e)
        data = []
    
    print("data: ", data)
    for student in data:
        print(email, student["email"])
        print(password, student["password"])
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
    
