#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=pivot && i<=high)
            i++;
        
        while(arr[j]>pivot && j>=low)
            j--;
        
        if(i<j) swap(arr[i], arr[j]);

    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr,int low, int high){
    if(low<high){
        int pindex=partition(arr, low, high);

        quickSort(arr, low, pindex-1);
        quickSort(arr, pindex+1, high);
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

    quickSort(a,0,n-1);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}