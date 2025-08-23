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


    int i=0;
    for(int j=1; j<n; j++){
        if(a[j]!=a[i]){
            a[i+1]=a[j];
            i++;
        }
    }


    for(int j=0; j<i+1; j++){
        cout<<a[j]<<" ";
    }

    cout<<endl;


}