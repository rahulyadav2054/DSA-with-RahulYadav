#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }

    }
}

int main(){
    int n;
    cout<<"enter the no. of elements i array: ";
    cin>>n;

    int x;
    vector<int>a;
    for(int i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }

    insertionSort(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}