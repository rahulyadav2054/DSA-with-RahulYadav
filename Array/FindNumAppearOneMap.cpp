
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

    map<long long, int> mpp;

    for(int i=0; i<n; i++){
        mpp[a[i]]++;
    }

    for(auto it: mpp){
        if(it.second==1) cout<<"findNumAppearOne is "<<it.first<<endl;
    }

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}