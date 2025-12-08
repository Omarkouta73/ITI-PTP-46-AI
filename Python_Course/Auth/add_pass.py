def add_pass():
    trials = 3
    while trials > 0:
        password = input("Enter Password: ")
        password_c = input("Confirm Password: ")
        if password == password_c:
            return password
        else:
            print("Passwords do not match. Try again.")
            trials -= 1
    if trials == 0:
        print("Too many attempts...")
        return  
    return password