#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, count=0, k;
    cout<<"enter no. of element of arrays: ";
    cin>>n;

    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }

    cout<<"enter xor K value: ";
    cin>>k;


    //optimal method for no. of subarrays with xor k

    int XOR=0;
    map<int, int>mpp;
    mpp[XOR]++;
    for(int i=0; i<n; i++){
        XOR=XOR^arr[i];
        int x=XOR^k;
        count+=mpp[x];
        mpp[XOR]++;
        
    }

    cout<<"no. of subarrays with xor k is "<<count<<endl;
}