import json
import re 
from .add_username import add_fname, add_lname
from .add_email import add_email
from .add_pass import add_pass
from .add_phone import add_phone
from .addID import add_id
import os

def add_new():
    students_filepath = os.path.join("data", "students.json")
    print("======== New Student ========")
    
    uid = add_id()
    Fname = add_fname()
    Lname = add_lname()
    email = add_email()
    password = add_pass()
    phone = add_phone()
    
    
    

    new_data = {
        "user_id": uid,
        "Fname": Fname,
        "Lname": Lname,
        "email": email,
        "password": password,
        "phone": phone
    }

    try:
        file = open("Auth/data/students.json", "r")
        data = json.load(file)
        data.append(new_data)
    except:
        data = []
        data.append(new_data)
    
    file = open("Auth/data/students.json", "w")
    json.dump(data, file, indent=4)
    file.close()

