import re
import json

def add_email():
    trials = 3
    while trials > 0:
        email = input("Enter student Email: ")
        try:
            file = open("Auth/data/students.json", "r")
            data = json.load(file)
        except Exception as e:
            print(e)
            data = []
        for student in data:
            if not isinstance(student, dict):
                continue
            if student["email"] == email:
                print("This mail already exists...")
                trials-=1
                return False
            
        if len(email.strip()) > 1 and not email.isdigit() and re.match("^[a-zA-Z0-9]+@[a-zA-Z]+.com", email):
            return email
        else:
            print("Email is not in the right format...")
            trials-=1
    if trials == 0:
        print("Too many attempts...")
        return