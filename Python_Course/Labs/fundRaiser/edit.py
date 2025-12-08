import json
from getch import getch

projects_filepath = "fundRaiser/data/projects.json"
from .description import add_details, add_title
from .add_target import add_target
from .add_date import add_start_date, add_end_date

def edit_proj():
    try:
        with open(projects_filepath, "r") as file:
            data = json.load(file)
            if len(data) == 0:
                print("There are no projects to edit !")
                getch()
                return
    except FileNotFoundError:
        print("No projects found.")
        getch()
        return

    pid = input("Enter Project ID to edit: ")

    if pid.isdigit():
        project = next((p for p in data if p["project_id"] == int(pid)), None)
    else:
        return
    
    if not project:
        print("Project not found.")
        getch()
        return

    print(f"Editing Project: {project['title']}")

    if input("Edit title? (y/n): ").lower() == "y":
        project["title"] = add_title()
    if input("Edit details? (y/n): ").lower() == "y":
        project["details"] = add_details()
    if input("Edit total target? (y/n): ").lower() == "y":
        project["total_target"] = add_target()
    if input("Edit start date? (y/n): ").lower() == "y":
        project["start_date"] = add_start_date()
    if input("Edit end date? (y/n): ").lower() == "y":
        project["end_date"] = add_end_date()

    if project["end_date"] < project["start_date"]:
        raise ValueError("End date cannot be earlier than start date")
        # return

    with open(projects_filepath, "w") as file:
        json.dump(data, file, indent=4)

    print("Project updated successfully!")
