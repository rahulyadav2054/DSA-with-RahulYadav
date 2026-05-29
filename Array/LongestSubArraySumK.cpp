
// Brute force method to find missing element in array

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,x;
    cout<<"enter the no. of elements in array: ";
    cin>>n;

    vector<int> arr;
    int y;

    cout<<"enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>y;
        arr.push_back(y);
    }

    int length=0, k=6;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int a=i; a<=j; a++){
                sum+=arr[a];
            }
            if(sum==k)
                length=max(length, j-i+1);
        }
    }

    cout<<length;

    

    cout<<endl;
}