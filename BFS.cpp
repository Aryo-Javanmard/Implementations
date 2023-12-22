#include <iostream>
#include <queue>
#include <list>

class Graph {
public:
    int vertices;
    std::list<int>* adjacencyList;

    Graph(int v) : vertices(v) {
        adjacencyList = new std::list<int>[v];
    }

    void addEdge(int v, int w) {
        adjacencyList[v].push_back(w);
    }

    void BFS(int v) {
        bool* visited = new bool[vertices];
        for (int i = 0; i < vertices; i++) {
            visited[i] = false;
        }

        std::queue<int> queue;
        visited[v] = true;
        queue.push(v);

        while (!queue.empty()) {
            v = queue.front();
            std::cout << v << " ";
            queue.pop();

            for (int i : adjacencyList[v]) {
                if (!visited[i]) {
                    visited[i] = true;
                    queue.push(i);
                }
            }
        }

        delete[] visited;
    }
};
