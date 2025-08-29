
// Brute force method to find missing element in array

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,x;
    cout<<"enter the no. of elements in array: ";
    cin>>n;

    vector<int> a;
    int y;

    cout<<"enter elements of first array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>y;
        a.push_back(y);
    }

    vector<int> hashArr(n+1,0);

    for(int i=0; i<=n-1; i++){
        hashArr[a[i]]=1;
    }

    for(int i=1; i<=n; i++){
        if(hashArr[i]==0) cout<<"missing element is "<<a[i]<<endl;
    }


    

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}