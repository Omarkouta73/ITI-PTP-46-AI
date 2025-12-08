from queue import Queue

# q = Queue()
# q.insert(1)
# q.insert(2)
# q.insert(3)
# q.insert(4)
# q.insert(5)

# print(q.pop())
# print(q.pop())
# print(q.pop())
# print(q.pop())
# print(q.pop())

# print(f"Length of queue: {len(q)}")
# print(q.pop())


from QueuePro import NamedQueue

qpro = NamedQueue("student_queue4", 3)
print(qpro)
qpro.insert("Omar")
qpro.insert("Ahmed")
qpro.insert("Mohamed")
NamedQueue.save("queues.json")

# qpro.insert("khaled") # Errors.QueueOutOfRangeException

print(qpro.pop())
print(qpro.pop())
print(qpro.pop())

# print(qpro.pop()) # Errors.QueueOutOfRangeException

# qpro2 = NamedQueue("student_queue", 5) # Errors.QueueIsDuplicateException

data = NamedQueue.load("queues.json")
print(data)

student_queue2 = NamedQueue.get_by_name("student_queue4")
print(student_queue2)


qpro10 = NamedQueue("tickets_queue5", 3)
print(qpro10)
qpro10.insert(1)
qpro10.insert(2)
qpro10.insert(3)
NamedQueue.save("queues.json")
