from datetime import datetime

def add_start_date():
    trials = 3
    while trials > 0:
        date = input("Enter start date (dd-mm-yyyy): ")

        try:
            date = datetime.strptime(date, "%d-%m-%Y")
            return date
        except ValueError:
            print("Invalid date format. Use dd-mm-yyyy.")

        trials -= 1

    if trials == 0:
        print("Too many attempts...")
        return  

def add_end_date():
    trials = 3
    while trials > 0:
        date = input("Enter end date (dd-mm-yyyy): ")

        try:
            date = datetime.strptime(date, "%d-%m-%Y")
            return date
        except ValueError:
            print("Invalid date format. Use dd-mm-yyyy.")

        trials -= 1
        
    if trials == 0:
        print("Too many attempts...")
        return  