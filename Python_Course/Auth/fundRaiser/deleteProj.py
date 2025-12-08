import json
from getch import getch

projects_filepath = "Auth/fundRaiser/data/projects.json"

def del_proj():
    try:
        with open(projects_filepath, "r") as file:
            data = json.load(file)
            if len(data) == 0:
                print("There are no projects to delete !")
                getch()
                return
    except FileNotFoundError:
        print("No projects found.")
        getch()
        return

    pid = input("Enter Project ID to delete: ")

    if pid.isdigit():
        new_data = [p for p in data if p["project_id"] != int(pid)]
    else:
        return

    if len(new_data) == len(data):
        print("Project not found.")
        return

    with open(projects_filepath, "w") as file:
        json.dump(new_data, file, indent=4)

    print(f"Project deleted successfully!")
    getch()
    return
