# Program 1: Multistage Graph

The algorithm solves the shortest path problem in a multistage graph, where the graph is organized into several stages, and the goal is to find the minimum-cost path from the starting node to the ending node.

**Pseudocode:**


**Time Complexity**

The time complexity of the Multistage Graph algorithm is O(V^2), where V is the number of vertices in the graph

# Program 2: kruskals algorithm

Kruskal's algorithm is a greedy algorithm that finds a minimum spanning tree for a connected, undirected graph. It works by sorting the edges in non-decreasing order of weight and adding each edge to the MST as long as it does not form a cycle. The Disjoint-Set data structure is used to efficiently check whether adding an edge creates a cycle

**Pseudocode:**


**Time Complexity**

The time complexity of Kruskal's algorithm is dominated by the sorting step, which has a time complexity of O(E log E), where E is the number of edges. The Union-Find operations (finding and merging) take nearly constant time on average. Overall, the time complexity of the entire algorithm is O(E log E).
