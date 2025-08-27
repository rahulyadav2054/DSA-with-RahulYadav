#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,d;
    cout<<"enter the no. of elements in array and dth place of rotation: ";
    cin>>n>>d;


    d=d%n;

    vector<int> a;
    int x;

    for(int i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }

    vector<int> temp;

    for(int i=n-d; i<n; i++){
        temp.push_back(a[i]);
    }

    for(int i=n-d-1; i>=0; i--){
        a[i+d]=a[i];
    }
    
    for(int i=0; i<d; i++){
        a[i]=temp[i];
    }
    

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;


}