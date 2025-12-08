from queue import Queue
from Errors import QueueOutOfRangeException, QueueIsDuplicateException
import json


class NamedQueue(Queue):
    # Has a name.
    # Has a fixed maximum size.
    # Tracks all created queue instances.
    # Can be saved to and loaded from a file.
    _instances = {}
    def __init__(self, name: str, max_size: int):
        super().__init__()
        self.name = name
        if self.is_duplicate():
            raise QueueIsDuplicateException("This Queue Already Exist")
        self.max_size = max_size
        NamedQueue._instances[name] = self
    
    def insert(self, value):
        if not self.is_full():
            self.arr.append(value)
        else:
            raise QueueOutOfRangeException("Queue is Full")

    def is_full(self):
        return len(self.arr) == self.max_size
    
    def is_duplicate(self):
        return self.name in NamedQueue._instances


    @classmethod
    def save(cls, filename):
        new_queue = {}

        for n, q in cls._instances.items():
            new_queue[n] = {
                "size": q.max_size,
                "items": q.arr
            }

        with open(filename, "w") as f:
            json.dump(new_queue, f, indent=4)

    @classmethod
    def load(cls, filename):
        try:
            with open(filename, "r") as f:
                data = json.load(f)
        except Exception as e:
            print(e)
            data = []
            
        return data

    @classmethod
    def get_by_name(cls, name):
        return cls._instances.get(name, None)
