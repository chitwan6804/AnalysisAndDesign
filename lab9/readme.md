## Problem 1: Graph Coloring

__Aim:__

To colour nodes in such a way that no two adjacent nodes have the same color.

__Algorithm:__

The provided algorithm aims to solve the m-coloring problem using backtracking. It attempts to color the vertices of a given graph using at most m colors, ensuring that no adjacent vertices share the same color. The main function initializes the graph's adjacency matrix, sets the number of vertices and colors, and calls the mcoloring function with initial parameters. The mcoloring function recursively explores different color assignments for each vertex, backtracking when necessary. If a valid coloring is found, it prints the coloring and returns. If the graph cannot be colored with the given number of colors, it outputs a message indicating so. The nextvalue function determines the next color to try for a vertex, ensuring that it doesn't violate the m-coloring constraint. Through systematic exploration and backtracking, the algorithm efficiently identifies whether the graph can be colored with at most m colors and, if so, provides one of the possible colorings.

__Time Complexity:__

Time-complexity is O (n*m^n), where n is the number of vertices in the graph and m is the number of colors available for coloring.
## Problem 2: N-Queens

__Aim:__

N Queens problem using backtracking.

__Algorithm:__

The code employs a backtracking algorithm to solve the N-Queens problem efficiently. At its core, it iteratively places queens on a chessboard, ensuring no two queens threaten each other. The place function checks for conflicts with existing queens, validating potential queen placements. Through recursive backtracking in the Nqueens function, the algorithm systematically explores all possible configurations, marking valid solutions when all queens are placed successfully. In the main function, the user specifies the number of queens, triggering the algorithm to find and print all valid solutions. This approach guarantees an exhaustive search for solutions while adhering to the constraints of the N-Queens problem, achieving a solution in a time complexity proportional to the size of the board.

__Time Complexity:__

Time-complexity is O (n!), where n is the number of queens or the size of the chessboard. This complexity arises from the fact that the algorithm explores all possible permutations of queen placements on the board, leading to a factorial growth in the number of configurations to be checked.

## Problem 3: Sum of Subsets:

__Aim:__

To find sum of subsets using backtracking.

__Algorithm:__

The provided algorithm tackles the sum-of-subsets problem using a backtracking approach. It recursively explores different combinations of elements in the array to identify subsets that sum up to a target value. At each step, the algorithm considers whether including the current element in the subset would lead to a valid solution, and if so, it adds the element to the subset and continues exploring further. If adding the element would exceed the target sum, the algorithm backtracks, excluding the element and exploring other possibilities. This process continues until all possible combinations are explored or until a valid subset summing up to the target value is found. By systematically pruning the search space using backtracking, the algorithm efficiently identifies all subsets that meet the sum condition, providing an optimized solution for the sum-of-subsets problem.

__Time Complexity:__

Time-complexity is O (2^n).
