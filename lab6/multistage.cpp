#include<iostream>
#include<cstdlib>
#include<time.h>
#include<fstream>
#include<random>
#include<algorithm>
using namespace std;

void WriteDataToFile(int i, double avgTime){
    ofstream fout("data.txt", ios::app);
    if(fout.is_open()){
        fout<<i<<","<<avgTime<<endl;
        fout.close();
    }
    else{
        cout<<"Unable to open file for writing data. "<<endl;
    }
}

int findvertex(int j, int **cost,int fcost[],int n){
    int min=10000;
    int r;
    for(int i=j+1;i<n;i++){
        if(cost[j][i]!=0){
            if(cost[j][i]+fcost[i]<=min){
                r=i;
                min=cost[j][i]+fcost[i];
            }
        }
    }
    return r;
}

int findfcost(int **cost,int n, int Path[]){
    int fcost[n];
    fcost[n-1]=0;
    int distance[n];
    distance[n-1]=0;
    for( int j=n-2; j>=0; j--){
        int r=findvertex(j,cost,fcost,n);
        fcost[j]=cost[j][r]+fcost[r];
        distance[j]=r;
    }
    for(int j=0;j<=n-1;j++){
        cout<<distance[j]<<endl;
    }
    Path[0]=1;
    Path[n-2]=n;
    for(int j=1; j<n-2;j++){
        Path[j]=distance[Path[j-1]];
    }
    for(int j=0;j<n-1;j++){
        cout<<Path[j]<<endl;
    }
    return fcost[0];
}

int main()
{   int j;
    cout<<"Enter number of vertices:";
    cin>>j;
    int Vertex[j];
    for(int i=0;i<=j;i++){
            Vertex[i]=i+1;
    }

int** cost = new int*[j];
    for(int i = 0; i < j; i++) {
        cost[i] = new int[j];
    }
    for(int i=0;i<j;i++){
        for(int k=0;k<j;k++){
            cout<<"Cost of Edge from "<<i+1<<" -> "<<k+1<<" :";
            cin>>cost[i][k];
        }
    }
    int Path[j];
    int mincost=findfcost(cost,j,Path);
    for(int k=0;k<j-1;k++){
        cout<<Path[k]<<"-";
    }
    cout<<"minimum cost for this path:"<<mincost;
    return 0;
}