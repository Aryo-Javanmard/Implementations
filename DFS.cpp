#include <iostream>
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

    void DFSUtil(int v, bool visited[]) {
        visited[v] = true;
        std::cout << v << " ";

        for (int i : adjacencyList[v]) {
            if (!visited[i]) {
                DFSUtil(i, visited);
            }
        }
    }

    void DFS(int v) {
        bool* visited = new bool[vertices];
        for (int i = 0; i < vertices; i++) {
            visited[i] = false;
        }

        DFSUtil(v, visited);

        delete[] visited;
    }
};
