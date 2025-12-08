def add_fname():
    trials = 3
    while trials > 0:
        Fname = input("Enter student First name: ")
        if len(Fname.strip()) > 1 and not Fname.isdigit():
            return Fname
        else:
            print("Please enter a string name")
            trials-=1
    if trials == 0:
        print("Too many attempts...")
        return

def add_lname():
    trials = 3
    while trials > 0:
        Lname = input("Enter student Last name: ")
        if len(Lname.strip()) > 1 and not Lname.isdigit():
            return Lname
        else:
            print("Please enter a string name")
            trials-=1
    if trials == 0:
        print("Too many attempts...")
        return