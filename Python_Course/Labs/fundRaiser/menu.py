from getch import getch
import os

students = []
menu = ["Register", "Login", "display", "exit"]
current_index = 0

def print_menu():
    os.system("clear")
    for i, el in enumerate(menu):
        if i == current_index:
            print(f"\033[31m{el}\033[0m")  # red text
        else:
            print(el)