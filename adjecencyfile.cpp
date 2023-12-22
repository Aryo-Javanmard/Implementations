#include <iostream>
#include <list>

class Graph {
public:
    int vertices;
    std::list<int>* adjacencyList;

    Graph(int v) : vertices(v) {
        adjacencyList = new std::list<int>[v];
    }

};

int main() {
    Graph graph(5);
    return 0;
}
