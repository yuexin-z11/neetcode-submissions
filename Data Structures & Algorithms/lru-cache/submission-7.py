from collections import OrderedDict

class LRUCache:

    def __init__(self, capacity: int):
        self.count = 0
        self.capacity = capacity
        # self.lru = deque()
        self.hashmap = OrderedDict()
        # self.hashmap = {}

    def get(self, key: int) -> int:
        if key not in self.hashmap:
            return -1
        
        # if key != self.lru.popleft():

        # self.lru.append(key)
        # self.lru.popleft()
        self.hashmap.move_to_end(key)

        return self.hashmap[key]

    def put(self, key: int, value: int) -> None:
        if self.count == self.capacity and key not in self.hashmap:
            self.hashmap.popitem(last=False)
            self.count -= 1
        
        if key in self.hashmap:
            self.hashmap.move_to_end(key)
        else:
            self.count += 1

        # self.lru.append(key)
        self.hashmap[key] = value
