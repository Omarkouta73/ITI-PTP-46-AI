def add_title():
    trials = 3
    while trials > 0:
        title = input("Enter project title: ")
        if len(title.strip()) > 1 and not title.isdigit():
            return title
        else:
            print("Please enter a string title")
            trials-=1
    if trials == 0:
        print("Too many attempts...")
        return

def add_details():
    trials = 3
    while trials > 0:
        details = input("Enter project details: ")
        if len(details.strip()) > 1 and not details.isdigit():
            return details
        else:
            print("Please enter correct details")
            trials-=1
    if trials == 0:
        print("Too many attempts...")
        return