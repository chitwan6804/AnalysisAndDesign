#include <iostream>
#include <cmath>
using namespace std;

bool findplace(int k, int i, int *x) {
    for(int j = 0; j < k; j++) {
        if(x[j]==i || abs(j-k)==abs(x[j]-i)) {
            return false;
        }
    }
    return true;
}

void n_queen(int k, int n, int *x) {
    for(int i = 0; i < n; i++) {
        if(findplace(k, i, x)) {
            x[k] = i;
            if(k == n - 1) {
                cout << "Solution: ";
                for(int j = 0; j < n; j++) {
                    cout << "( " << j+1 << "," << x[j]+1 << " ) ";
                }
                cout << endl;
            }
            else {
                n_queen(k + 1, n, x);
            }
        }
    }
}

int main() {
    int size;
    cout << "Enter size of matrix: ";
    cin >> size;
    int *soln = new int[size];
    n_queen(0, size, soln);
    return 0;
}