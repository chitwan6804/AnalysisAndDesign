## Program 1: Longest Common Subsequence:

__Aim:__

To find the longest common subsequence between two strings using dynamic programming.

__Algorithm:__

The program implements the Longest Common Subsequence (LCS) problem using dynamic programming. It calculates the length of the LCS between two given strings and prints the LCS along with arrows indicating the matching characters. The main function initializes example strings, calls the LCS function, and prints the length of the LCS.

__Time Complexity:__

Time-complexity is O (m*n). m and n are the lengths of the input strings.

## Program 2: Merge Purge:

__Aim:__

The aim of this algorithm is to merge two sets of pairs while ensuring that only non-dominated pairs are included in the final merged set. Dominated pairs, which are pairs with lower profit and higher weight compared to other pairs, are eliminated from the final set.

__Algorithm:__

1. Input: Two sets of pairs, S1 and S2, each consisting of pairs (profit, weight).
2. Initialize an empty vector final to store the merged and purged pairs.
3. For each pair (profit1, weight1) in S1, iterate through all pairs (profit2, weight2) in S2.
   - Check if (profit1, weight1) dominates (profit2, weight2) by having greater profit and lesser weight.
   - If dominated, skip adding (profit1, weight1) to the final vector.
4. Repeat the same process for pairs in S2.
5. Add pairs that are not dominated by any other pair to the final vector.
6. Output the final vector containing non-dominated pairs.

__Time Complexity:__

Let n be the total number of pairs in both S1 and S2.

- Step 3 and 4: These steps involve nested loops iterating over all pairs in S1 and S2. So, the time complexity for these steps is O(n^2).
- Step 5: In the worst-case scenario, all pairs are non-dominated, so this step has a time complexity of O(n).
- Step 6: Printing the final vector has a time complexity of O(n).




## Program 3: 0/1 Knapsack using merge purge:

__Aim:__

0/1 Knapsack using merge purge.

__Algorithm:__

The provided algorithm employs dynamic programming to solve the 0/1 knapsack problem efficiently. It iterates through each item, constructing sets of pairs representing all possible combinations of accumulated values and weights up to the current item. These sets are merged and pruned to eliminate dominated solutions, ensuring only non-dominated solutions are considered. The algorithm then finds the maximum value among the remaining solutions and identifies the corresponding items contributing to it.

__Time Complexity:__

Time-complexity is O (2^n), where n is the number of items.
