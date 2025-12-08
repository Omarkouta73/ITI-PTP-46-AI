import re

def add_target():
    trials = 3
    while trials > 0:
        target = input("Enter total campaign target: ")
        if target.isdigit():
            if float(target) > 0:
                return float(target)
            else:
                print("The target money can't be zero or negative !")
        else:
            print("Please enter numeric value, strings are not allowed...")
            trials-=1
    if trials == 0:
        print("Too many attempts...")
        return