#include <iostream>
#include <vector>
using namespace std;

void merge_perge(const vector<pair<int,int>>& S1, const vector<pair<int,int>>& S2, vector<pair<int,int>>& final) {
    for(const auto& pair1 : S1) {
        bool should_add = true;
        for(const auto& pair2 : S2) {
            // Check if profit of one is more as compared to other but weight of other is more
            if(pair1.first < pair2.first && pair2.second < pair1.second) {
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
            if(pair2.first < pair1.first && pair1.second < pair2.second) {
                should_add = false;
                break;
            }
        }
        if(should_add) {
            final.push_back(pair2);
        }
    }
}

int main(){
    vector<pair<int,int>> S1;
    vector<pair<int,int>> S2;
    vector<pair<int,int>> final;
    // final.push_back(make_pair(0,0));
    int numPairs;
    cout << "Enter the number of pairs for S1: ";
    cin >> numPairs;
    for(int i=0;i<numPairs;i++){
        int firstnum;
        int secondnum;
        cout << "Enter the first value for pair " << i+1 << ": ";
        cin >> firstnum;
        cout << "Enter the second value for pair " << i+1 << ": ";
        cin >> secondnum;
        S1.push_back(make_pair(firstnum,secondnum));
    }
    cout << "Enter the number of pairs for S2: ";
    cin >> numPairs;
    for(int i=0;i<numPairs;i++){
        int firstnum;
        int secondnum;
        cout << "Enter the first value for pair " << i+1 << ": ";
        cin >> firstnum;
        cout << "Enter the second value for pair " << i+1 << ": ";
        cin >> secondnum;
        S2.push_back(make_pair(firstnum,secondnum));
    }
    //display both vectors.
    cout << "Vector of pairs for S1: ";
    cout<<"{ ";
    for (const auto& pair : S1) {
        cout << "( " << pair.first << ", " << pair.second << " )";
    }
    cout<<" }";
    cout << endl;

    cout << "Vector of pairs for S2: ";
    cout<<"{ ";
    for (const auto& pair2 : S2) {
        cout << "( " << pair2.first << ", " << pair2.second << " )";
    }
    cout<<" }";
    cout << endl;

    merge_perge(S1,S2,final);
    
    cout<<"After merge_perge: \n";
    cout << "Vector of pairs for S1: ";
    cout<<"{ ";
    for (const auto& pair : final) {
        cout << "( " << pair.first << ", " << pair.second << " )";
    }
    cout<<" }";
    cout << endl;
    return 0;
}