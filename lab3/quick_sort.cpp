#include<iostream>
#include<cstdlib>
#include<fstream>
#include<ctime>

using namespace std;

void WriteDataToFile(int i, double avgTime, double avgTimeWorstCase){
    ofstream fout("data.txt", ios::app);
    if(fout.is_open()){
        fout << i << "-" << avgTime << "-" << avgTimeWorstCase << endl;
        fout.close();
    }
    else{
        cout << "Unable to open file for writing data." << endl;
    }
}

int correct_pos(int *a, int low, int high) {
    int first = low;
    int last = high - 1;  
    int p = a[low];       
    do {
        do {
            first = first + 1;
        } while (first <= high && a[first] <= p); 
        do {
            last = last - 1;
        } while (last >= low && a[last] >= p);   
        if (first < last) {
            int temp = a[last];
            a[last] = a[first];
            a[first] = temp;
        }
    } while (first <= last);
    a[low] = a[last];
    a[last] = p;
    return last;
}


void quicksort(int *a, int low, int high){
    int j;
    if(low < high){
        j = correct_pos(a, low, high);
        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
    }
}

void selection_sort(int *a, int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        for (int k = i + 1; k < n; k++) {
            if (a[k] < a[j]) {
                j = k;
            }
        }
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
}

int main (){
    srand(time(0));

    for (int j = 100; j <= 100000; j += 1000){
        int *a = new int[j/100];
        cout<<"hi";
        for(int k = 0; k < j; k++){
            a[k] = rand() % 50;
        }
        cout<<"yo!";
        clock_t time1 = clock();
        for (int i = 0; i < 5; i++){
            quicksort(a, 0, j - 1);
        }
        clock_t time2 = clock();
        cout<<"what is the problem";
        double avgTime = double((time2 - time1) / 5);

        int *b = new int[j];
        for(int k = 0; k < j; k++){
            b[k] = rand() % 50;
        }
        selection_sort(b, j);
        clock_t time3 = clock();
        for (int i = 0; i < 5; i++){
            quicksort(b, 0, j - 1);
        }
        clock_t time4 = clock();
        double avgTimeWorstCase = double((time4 - time3) / 5);

        cout << j << "-" << avgTime << "-" << avgTimeWorstCase << endl;
        WriteDataToFile(j, avgTime, avgTimeWorstCase);

        delete[] a;
        delete[] b;
    }
    return 0;
}
