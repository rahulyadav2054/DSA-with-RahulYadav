
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

    int maxi=0;

    for(int i=0; i<n; i++){
        maxi=max(maxi, a[i]);
    }

    vector<int> hashArr(maxi+1,0);

    for(int i=0; i<n; i++){
        hashArr[a[i]]++;
    }

    for(int i=0; i<n; i++){
        if(hashArr[a[i]]==1) cout<<"number appeared once in array is "<<a[i]<<endl;
    }

    

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}