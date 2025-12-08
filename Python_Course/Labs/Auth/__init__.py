import os

LAST_ID_FILE = "Auth/data/last_id.txt"

def init_last_id():
    try:
        file = open(LAST_ID_FILE, "r")
        return int(file.read().strip())
    except:
        return 0

last_id = init_last_id()

def auto_increment_id():
    global last_id
    last_id += 1
    try:
        file = open(LAST_ID_FILE, "w")
        file.write(str(last_id))
        return last_id
    except:
        return -1
