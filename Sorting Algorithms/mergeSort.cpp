#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    int left=low;
    int right=mid+1;

    vector<int> temp;

    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }

}

void MS(vector<int> &arr, int low, int high){
    if(low>=high) return;

    int mid = (low+high)/2;

    MS(arr, low, mid);
    MS(arr, mid+1, high);

    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n){
    MS(arr, 0, n-1);
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

    mergeSort(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}