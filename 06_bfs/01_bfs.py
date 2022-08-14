from collections import deque

def isSeller(name: str) -> bool:
    return name[-1] == 'm'

def bfs(name: str, graph: list) -> bool:
    search_queue = deque()
    search_queue += graph[name]

    searched = set()
    while search_queue:
        person = search_queue.popleft()
        if person not in searched:
            if isSeller(person):
                print(person + " is a mango seller!")
                return True
            else:
                search_queue += graph[person]
                searched.add(person)

    return False

graph = {}
graph["you"] = ["alice", "bob", "claire"]
graph["bob"] = ["anuj", "peggy"]
graph["alice"] = ["peggy"]
graph["claire"] = ["thom", "jonny"]
graph["anuj"] = []
graph["peggy"] = []
graph["thom"] = []
graph["jonny"] = []

bfs("you", graph)