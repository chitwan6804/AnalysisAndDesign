#include <iostream>
#include <vector>
using namespace std;

void merge_perge(const vector<pair<int,int>>& S1, const vector<pair<int,int>>& S2, vector<pair<int,int>>& final) {
    for(const auto& pair1 : S1) {
        bool should_add = true;
        for(const auto& pair2 : S2) {
            // Check if profit of one is more as compared to other but weight of other is more
            if(pair1.first < pair2.first && pair2.second <pair1.second) {
                should_add = false;
                break;
            }
        }
        if(should_add) {
            final.push_back(pair1);
        }
    }
    for(const auto& pair2 : S2) {
        bool should_add = true;
        for(const auto& pair1 : S1) {
            // Check if profit of one is more as compared to other but weight of other is more
            if(pair2.first <= pair1.first && pair1.second <= pair2.second) {
                should_add = false;
                break;
            }
        }
        if(should_add) {
            final.push_back(pair2);
        }
    }
}

void Print(int maxprofit, int usedweight, const vector<pair<int,int>>& knapsack, int items, const vector<vector<pair<int,int>>>& S) {
    vector<int> x(items, 0);
    for(int i = 0; i < items; i++) {
        if(maxprofit == S[items-1][i].first && usedweight == S[items-1][i].second) {
            x[items] = 1;
            maxprofit -= S[items-1][i].first;
            usedweight -= S[items-1][i].second;
        }
    }
    cout << "Selected pairs:\n{ ";
    for(int i = 0; i < items; i++) {
        if(x[items] == 1) {
            cout << "( " << knapsack[i].first << ", " << knapsack[i].second << " ) ";
        }
    }
    cout << "}" << endl;
}


int main(){
    vector<pair<int,int>> knapsack;
    cout<<"Enter number of items: ";
    int items;
    cin>>items;
    cout<<"Enter maximum weight: ";
    int maxweight;
    cin>>maxweight;
    for(int i=0;i<items;i++){
        int first;
        int second;
        cout<<"Enter profit for item "<<i+1<<": ";
        cin>>first;
        cout<<"Enter weight for item "<<i+1<<": ";
        cin>>second;
        knapsack.push_back(make_pair(first,second));
    }
    cout<<"Profit\tWeight";
    for (const auto& pair : knapsack) {
        cout<< endl<< pair.first << "\t" << pair.second ;
    }
    vector<vector<pair<int,int>>> S(items+1);
    vector<pair<int,int>> V;
    S[0].push_back(make_pair(0,0));
    int i=0;
    while(i<items){
        for (const auto& pair2 : S[i]){
            if(pair2.second+knapsack[i].second<=maxweight){
                V.push_back(make_pair(pair2.first+knapsack[i].first, pair2.second+knapsack[i].second));
            }
        }
        merge_perge(S[i],V,S[i+1]);
        i++;
    }
    cout << "\nAll possible combinations in vector S:\n";
    int maxprofit=0;
    int usedweight;
    cout<<"{ ";
    for (const auto& pair : S[items]) {
        cout <<"( " <<pair.first << "," << pair.second << " )";
        if(maxprofit<pair.first){
            maxprofit=pair.first;
            usedweight=pair.second;
        }
    }
    cout<<" }";
    cout<<"\nMax Profit: "<<maxprofit<<endl;
    Print(maxprofit,usedweight,knapsack,items,S);
    return 0;
}