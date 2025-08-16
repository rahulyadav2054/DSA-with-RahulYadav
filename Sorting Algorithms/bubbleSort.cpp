#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n){
    for(int i=n-1; i>0; i--){
        for(int j=0;j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
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

    bubbleSort(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}