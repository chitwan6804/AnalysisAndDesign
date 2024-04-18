#include <iostream>
#include <cmath>
using namespace std;

int NextValue(int k, int *x, int n, int m, int **matrix) {
    int j;
    for (int i = 0; i < n; i++) {
        x[i] = 0;
    }
    do {
        x[k] = (x[k] + 1) % (m + 1);
        if (x[k] == 0) {
            return 0;
        }
        for (int i = 0; i < n; i++) {
            j = i;
            if (matrix[k][i] != 0 && x[i] == x[k]) {
                break;
            }
        }
        if (j == m) {
            return 1;
        }
    } while (1);
    return 0;
}

void m_coloring(int **matrix, int k, int *x, int n, int m) {
    do {
        int i = NextValue(k, x, n, m, matrix);
        if (i == 0) {
            cout << "Graph can't be colored!";
            return;
        } else {
            if (k == n) {
                cout << "Solution: ";
                for (int j = 0; j < n; j++) {
                    cout << "( " << j << "," << x[j] << " ) ";
                }
                cout << endl;
            } else {
                m_coloring(matrix, k + 1, x, n, m);
            }
        }
    } while (1);
}

int main() {
    int m, n;
    cout << "Enter value of m: ";
    cin >> m;
    cout << "Enter value of n: ";
    cin >> n;
    int *soln = new int[n];
    int **matrix = new int *[n];
    cout << "Enter adjacency matrix:" << endl;
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cout<<"Value of ("<<i+1<<","<<j+1<<") : "; 
            cin >> matrix[i][j];
        }
    }
    m_coloring(matrix, 0, soln, n, m);
    return 0;
}