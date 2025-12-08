def add_phone():
    trials = 3
    while trials > 0:
        phone = input("Enter phone number: ")
        if len(phone) == 11 and phone.isdigit():
            return phone
        else:
            print("Invalid phone number. Must be 11 digits (e.g., 01********).")
            trials -= 1
    if trials == 0:
        print("Too many attempts...")
        return