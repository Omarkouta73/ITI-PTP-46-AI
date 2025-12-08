from getch import getch
import json

def display():
    try:
        file = open("fundRaiser/data/projects.json", "r")
        data = json.load(file)
        if len(data) == 0:
            print("There are no projects to display yet !")

    except:
        data = []
        print("There are no projects to display yet !")
    

    for student in data:
        for k, v in student.items():
            print(f"{k} ==> {v}")
        print("="*20)
    print("Press any key...")
    getch()
