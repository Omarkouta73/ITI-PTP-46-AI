import json
import re 
from .description import add_details, add_title
from .add_target import add_target
from .add_date import add_start_date, add_end_date
from .addID import add_id

def add_new():
    projects_filepath = "fundRaiser/data/projects.json"
    print("======== New Project ========")
    
    pid = add_id()
    title = add_title()
    details = add_details()
    total_target = add_target()
    start_date = add_start_date()
    end_date = add_end_date()
    
    if end_date < start_date:
        raise ValueError("End date cannot be earlier than start date")
    
    start_date_str = start_date.strftime("%d-%m-%Y")
    end_date_str = end_date.strftime("%d-%m-%Y")

    new_data = {
        "project_id": pid,
        "title": title,
        "details": details,
        "total_target": total_target,
        "start_date": start_date_str,
        "end_date": end_date_str
    }
    

    try:
        file = open(projects_filepath, "r")
        data = json.load(file)
        data.append(new_data)
    except:
        data = []
        data.append(new_data)
    
    try:
        file = open(projects_filepath, "w")
        json.dump(data, file, indent=4)
        file.close()
    except Exception as e:
        print("Error in saving the peoject: ", e)
        return

