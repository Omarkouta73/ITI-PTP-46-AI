from Errors import QueueIsEmptyException
class Queue:
    def __init__(self):
        self.arr = []

    def __len__(self):
        return len(self.arr)
    
    def insert(self, value):
        self.arr.append(value)

    def pop(self):
        if not self.is_empty():
            return self.arr.pop(0)
        
        raise QueueIsEmptyException("Can't perform operation `pop` on empty Queue")

    def is_empty(self) -> bool:
        return len(self.arr) == 0

