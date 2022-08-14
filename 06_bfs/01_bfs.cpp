#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

bool isSeller(string name) {
    return name[name.size() - 1] == 'm';
}

template <typename T>
bool bfs(string name, unordered_map <T, vector <T> >& graph) {
    queue <T> search_queue;
    unordered_set <T> searched;

    for(auto&& friendName : graph.find(name) -> second) {
        search_queue.push(friendName);
    }
    return false;
}

int main() {


    return 0;
}