#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n){
    for(int i=0; i<=n-2; i++){
        int min=i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[min]) min=j;
        }

        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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

    selectionSort(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}