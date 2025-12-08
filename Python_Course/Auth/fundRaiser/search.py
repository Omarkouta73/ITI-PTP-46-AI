import json
from getch import getch

projects_filepath = "Auth/fundRaiser/data/projects.json"
def search_by_id():
    trials = 3
    while trials > 0:
        ID = input("Enter project id: ")
        if ID.isdigit():
            try:
                file = open(projects_filepath, "r")
                data = json.load(file)
            except:
                data = []

            for project in data:
                if not isinstance(project, dict):
                    continue
                if project["project_id"] == int(ID):
                    print(project)
                    print("press any key...")
                    getch()
                    return
                
            print("This project doesn't exist")
            trials-=1
        else:
            print("Please add integer id")
            trials-=1
    
    if trials == 0:
            print("Too many attempts")
            return