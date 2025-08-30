
// Brute force method to find missing element in array

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,x;
    cout<<"enter the no. of elements in array: ";
    cin>>n;

    vector<int> a;
    int y;

    cout<<"enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>y;
        a.push_back(y);
    }

    int xor1=0,xor2=0;

    for(int i=0; i<=n; i++){
        xor1=xor1^i;
    }

    for(int i=0; i<n; i++){
        xor2=xor2^a[i];
    }

    x =  xor1^xor2;

    cout<<"the missing element is "<<x<<endl;


    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}