#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, count=0,k;
    cout<<"enter no. of element of arrays: ";
    cin>>n;

    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }

    cout<<"enter xor K value: ";
    cin>>k;


    //brute force method for no. of subarrays with xor k

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int XOR=0;
            for(int k=i; k<=j; k++){
                XOR=XOR^arr[k];
                if(XOR==k){
                    count++;
                }
            }
        }
    }

    cout<<"no. of subarrays with xor k is "<<count<<endl;
}