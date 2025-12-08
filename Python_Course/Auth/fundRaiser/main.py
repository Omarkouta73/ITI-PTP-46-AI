from getch import getch
from .register import add_new
from .display import display
from .edit import edit_proj
from .deleteProj import del_proj
from .search import search_by_id
import os

students = []
menu = ["Create a project/campaign", "Edit Porject", "View Projects", "Search By ID", "Delete a project", "logout"]
current_index = 0

def print_menu():
    os.system("clear")
    for i, el in enumerate(menu):
        if i == current_index:
            print(f"\033[31m{el}\033[0m")  # red text
        else:
            print(el)

def main():
    global current_index
    while True:
        print_menu()
        key = getch()

        if key == chr(27):
            next1 = getch()
            next2 = getch()
            if next1 == '[':
                if next2 == 'A':
                    current_index = (current_index - 1) % len(menu)
                elif next2 == 'B':
                    current_index = (current_index + 1) % len(menu)
        elif key == '\n':
            if current_index == 0:
                add_new()
            elif current_index == 1:
                edit_proj()
            elif current_index == 2:
                display()
            elif current_index == 3:
                search_by_id()
            elif current_index == 4:
                del_proj()
            else:
                from ..main import main
                main()
                # exit()
            