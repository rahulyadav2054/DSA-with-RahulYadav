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

    vector<int> temp;

    for(int i=0; i<n; i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }

    int ts=temp.size();
    for(int i=0; i<ts; i++){
        a[i]=temp[i];
    }

    for(int i=ts; i<n; i++){
        a[i]=0;
    }
    

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;


}