#include <iostream>
using namespace std;

void Matrix_Chain(int **S, int p[], int length) {
    int n = length - 1;
    int** m = new int*[n];
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
        for (int j = 0; j < n; j++) {
            m[i][j] = 0;
        }
    }
    
    for (int l = 2; l <= n; l++) {
        for (int i = 0; i < n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = 10000;
            for (int k = i; k < j; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    S[i][j] = k;
                }
            }
        }
    }
}

void Print(int** S, int i, int j) {
    if (i == j) {
        cout << "A" << i;
    } else {
        cout << "(";
        Print(S, i, S[i][j]);
        Print(S, S[i][j] + 1, j);
        cout << ")";
    }
}

int main() {
    int size;
    cout << "Size of parent array: ";
    cin >> size;
    int* ParentArray = new int[size];
    int** S = new int*[size];
    for (int i = 0; i < size; i++) {
        S[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        cout << "Enter value for term " << i << ": ";
        cin >> ParentArray[i];
    }
    Matrix_Chain(S, ParentArray, size);
    cout << "Multiplied in the order: ";
    Print(S, 0, size - 2);
    cout << endl;
 
    return 0;
}
