#include<iostream>
#include<cstdlib>
using namespace std;
int infinity = 10000000;

int min_vertex(int key, int cost[5][5], int fcost[5], int n) {
    int min_cost = 10000;
    int r = -1; 
    for(int i = key+1; i<n; i++) {
        if(cost[key][i] != 0 && cost[key][i] != infinity) {
            if(cost[key][i] + fcost[i] < min_cost) {
                min_cost = cost[key][i] + fcost[i];
                r = i;
            }
        } 
    }
    return r;
}

void MultiStageGraph(int cost[][5], int n) {
    int fcost[n];
    int R[n];
    fcost[n-1] = 0; 
    int r;
    for(int j = n-2; j >= 0; j--) {
        r = min_vertex(j, cost, fcost, n);
        R[j] = r;
        fcost[j] = cost[j][r] + fcost[r];
    }
    cout << "path is : " << endl;
    cout << "0 ";  // Starting from vertex 0
    for(int i = 1; i < n-1; i++) {
        cout << "-> " << R[i] << " ";
    }
    cout << "-> " << n-1 << endl;

cout<<"min_cost: "<<fcost[0];
}
int main()
{
    int n;
    cout<<"Enter total vertices:";
    int cost[5][5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"cost of ["<<i<<"]["<<j<<"] :";
            cin>>cost[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(cost[i][j] == -1)
            {
                cost[i][j] = infinity;
            };
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<cost[i][j];
        }
        cout<<endl;
    }
    MultiStageGraph(cost,n);
    return 0;

}
