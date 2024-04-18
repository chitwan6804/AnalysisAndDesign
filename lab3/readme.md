# Problem 1: MaxMin Algorithm

This README introduces the MaxMin Algorithm, a divide-and-conquer algorithm for finding the maximum and minimum elements in an array, and provides a C++ implementation to demonstrate its functionality.The provided C++ implementation utilizes the MaxMin Algorithm to find the maximum and minimum elements in an array efficiently. The algorithm divides the array into smaller subproblems, computes the maximum and minimum in each subproblem, and then combines the results to determine the overall maximum and minimum.

**Pseudocode:**
![maxmin](https://github.com/chitwan6804/AnalysisAndDesign/assets/128251060/01b32910-dbfa-4acc-80fe-e3898511dfda)


**Time Complexity:**
The time complexity of the MaxMin Algorithm is O(n), where "n" is the number of elements in the array. The algorithm efficiently reduces the number of comparisons by processing pairs of elements in each recursive step. While considering it to be done in iterative way then its time complexity would be O(n*n)
![MaxMin](https://github.com/chitwan6804/AnalysisAndDesign/assets/128251060/c95aa73b-ef3f-4065-99a8-5fcbb0f429c9)

# Problem 2: Merge Sort

This C++ program demonstrates the implementation of the Merge Sort algorithm to sort an array of integers.Merge Sort is a divide-and-conquer algorithm that recursively divides the array into halves until each sub-array contains only one element. Then, it merges these sub-arrays back together in sorted order.

**Pseudocode:**
![mergesort](https://github.com/chitwan6804/AnalysisAndDesign/assets/128251060/58f733dc-fa2e-433d-bad2-83ea99082289)


**Time Complexity:**

The time complexity of Merge Sort is analyzed. It is O(n log n), where "n" represents the number of elements in the array. This complexity arises from the logarithmic nature of the divide step (log n) and the linear time complexity of the merging step (n). The O(n log n) time complexity makes Merge Sort efficient for large datasets.
![merge-sort](https://github.com/chitwan6804/AnalysisAndDesign/assets/128251060/ee794830-f799-4059-a3bb-95729a76ccda)


**Use Cases:**

This section outlines scenarios where Merge Sort is particularly useful:

1)Sorting Large Datasets: Merge Sort's efficiency with large datasets makes it suitable for scenarios where extensive sorting is required.

2)External Sorting in Databases: Merge Sort is commonly used in database management systems for external sorting due to its ability to handle large amounts of data.

3)Parallel Processing: The divide-and-conquer nature of Merge Sort allows for parallel processing, making it applicable in parallel computing environments.

# Problem 3: Quick Sort

This C++ program demonstrates the implementation of the Quick Sort algorithm to sort an array of integers.Quick Sort is a divide-and-conquer algorithm that works by selecting a "pivot" element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

-Recursive Approach: The recursive Quicksort implementation follows the classic divide-and-conquer paradigm. It efficiently sorts an integer array by recursively partitioning the array into smaller segments, sorting each segment, and then combining them to achieve a fully sorted array. The README provides guidance on how to compile, run, and analyze the recursive Quicksort, enabling users to experiment with different array sizes.

-Iterative Approach: The iterative Quicksort version employs a non-recursive strategy, utilizing a stack to manage the partitioning and sorting process iteratively. While maintaining an average time complexity of O(n log n), this approach addresses potential stack overflow issues associated with recursion. Comprehensive instructions are provided for compiling, running, and assessing the performance of this iterative Quicksort implementation.

**Pseudocode**
![quicksort](https://github.com/chitwan6804/AnalysisAndDesign/assets/128251060/4afbdca3-27f8-4fe6-b957-63c6e7081a9b)


**Time Complexity:**

Both implementations maintain an average time complexity of O(n log n), making them efficient for a wide range of applications. The partitioning and sorting steps contribute to this time complexity.

**Use Cases:**

Quicksort, with its versatile nature, finds applications in scenarios requiring efficient sorting. Both the recursive and iterative implementations are suitable for stable in-place sorting, making them valuable in handling large datasets, external sorting in databases, and parallel processing environments.

# Problem 4: Magic Square

This C++ program demonstrates the implementation to generate a magic square. A magic square is a square grid of numbers where the sum of the numbers in each row, column, and both main diagonals is the same. The algorithm aims to construct a magic square for a given order (size) of the square.

**Time Complexity:**
![magic square](https://github.com/chitwan6804/AnalysisAndDesign/assets/128251060/09db45cb-de2c-4516-86a4-be978f09f885)

# Problem 5: Matrix Multiplication

__Aim:__

Write a program to Implement matrix multiplication using the divide and conquer approach and measure the average time taken for matrix multiplication for matrices of increasing sizes.

__Problem Statement:__

Implementing a matrix multiplication algorithm using the divide and conquer approach. Given two matrices A and B of dimensions n×n, the algorithm should compute their product C = A * B. The matrices A, B, and C are represented as 2D integer arrays.

__Algorithm:__

Matrix Multiplication (matrix_multiply function):
1.	If the size of the input matrices A and B is 1x1, perform a simple multiplication and return the result.
2.	Otherwise, divide each matrix into four submatrices: A11, A12, A21, A22 and B11, B12, B21, B22.
3.	Recursively compute the intermediate matrices P1 to P8 using matrix multiplication and addition:
•	P1=A11×B11
•	P2=A12×B21
•	P3=A11×B12
•	P4=A12×B22
•	P5=A21×B11
•	P6=A22×B12
•	P7=A21×B21
•	P8=A22×B22
4.	Compute the submatrices C11, C12, C21, C22:
•	C11=P1+P2
•	C12=P3+P4
•	C21=P5+P6
•	C22=P7+P8
5.	Combine the submatrices to obtain the final result matrix C.

__Time Complexity:__

•	Let T(n) represent the time complexity of multiplying two n×n matrices.
•	In each recursive call, the matrices are divided into four submatrices of size n/2×n/2. This step has constant time complexity.
•	After dividing, eight recursive calls are made to multiply smaller matrices: T(n/2) for each call.
•	Additionally, adding and combining matrices takes O(n^2) time.
•	Therefore, the recurrence relation for the time complexity can be expressed as: T(n)=8T(n/2) + O(n^2)
•	Using the Master Theorem, the time complexity of matrix multiplication using the divide and conquer approach is O (n log8)=O(n^3).

__Practically:__

![Matrix_Multiplication](https://github.com/chitwan6804/AnalysisAndDesign/assets/128251060/ffd71f08-ed0a-4fd6-98e7-1a9da3af100f)

# Problem 6: Matrix Multiplication using Strassens

__Aim:__

Write a program to implement a matrix multiplication algorithm using the Strassen's algorithm, which is a divide-and-conquer approach for multiplying matrices efficiently.

__Problem Statement:__

The problem addressed by the code is as follows: Given two square matrices A and B of size n×n, where n is a power of 2, the task is to compute their product C=A×B efficiently using the Strassen's algorithm. The Strassen's algorithm aims to reduce the number of scalar multiplications involved in matrix multiplication compared to the traditional method, thus improving the overall computational efficiency.

__Algorithm:__

•	Check if the input matrices are of size 1. If so, perform scalar multiplication and return the result.
•	Divide the input matrices A and B into four submatrices each: A11,A12,A21,A22 and B11,B12,B21,B22.
•	Compute 10 submatrices P, Q, R, S, T, U, V, X, Y, Z using the formulas of Strassen's algorithm.
•	Compute the resulting submatrices C11, C12, C21,C22 by adding and subtracting the previously computed submatrices.
•	Combine the resulting submatrices into a single matrix C and return it.

__Time Complexity:__

•	Let T(n) represent the time complexity of multiplying two n×n matrices using the Strassen's algorithm.
•	Divide Step:Dividing the matrices into submatrices requires O(n^2) time.
•	Recursive Calls:
	In each recursive call, the problem size is reduced by half, resulting in a total of 7 recursive calls.
	Therefore, the time complexity of the recursive calls is 7T(n/2).
•	Combine Step: Combining the submatrices into the result matrix requires O(n^2) time.
•	Overall Time Complexity: T(n)=7T(n/2)+O(n^2)
	By solving the recurrence relation using the Master Theorem or recurrence tree method, the time complexity of the Strassen's algorithm for matrix multiplication is determined to be approximately 
	O(n log 7), which is approximately O(n^2.81).

__Practically:__

![strassens](https://github.com/chitwan6804/AnalysisAndDesign/assets/128251060/7497f158-f4e1-4620-abcf-4e06b83b46ba)

