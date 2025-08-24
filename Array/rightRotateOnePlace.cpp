#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"enter the no. of elements in array: ";
    cin>>n;


    vector<int> a;
    int x;

    for(int i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }


    int temp=a[n-1];

    for(int i=n-1; i>0; i--){
        a[i]=a[i-1];
    }

    a[0]=temp;

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;


}