from getch import getch
import json

def display():
    try:
        file = open("Auth/data/students.json", "r")
        data = json.load(file)
    except:
        data = []

    for student in data:
        for k, v in student.items():
            if k != "password":
                print(f"{k} ==> {v}")
            else:
                print(f"{k} ==> {'*'*len(v)}")
        print("="*20)
    print("Press any key...")
    getch()
