# Program 2: kruskals algorithm

ALGORITHM:

Kruskal's algorithm is a greedy algorithm that finds a minimum spanning tree for a connected, undirected graph. It works by sorting the edges in non-decreasing order of weight and adding each edge to the MST as long as it does not form a cycle. The Disjoint-Set data structure is used to efficiently check whether adding an edge creates a cycle

TIME COMPLEXITY:

The time complexity of Kruskal's algorithm is dominated by the sorting step, which has a time complexity of O(E log E), where E is the number of edges. The Union-Find operations (finding and merging) take nearly constant time on average. Overall, the time complexity of the entire algorithm is O(E log E).
