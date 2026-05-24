#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cout<<"enter the no. of element of the array"<<endl;
    cin>>n;

    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }

    int k;
    cout<<"enter the no. of elements for rotations: "<<endl;
    cin>>k;

    vector<int> temp;
    for(int i=0; i<k; i++){
        temp.push_back(arr[i]);
    }

    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }

    for(int i=k; i<n; i++){
        arr[i-k]=arr[i];
    }

    for(int i=0; i<n; i++){
        arr[n+i-k]=temp[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}