
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



    for(int i=1; i<=n; i++){
        int flag=0;
        for(int j=0; j<n; j++){
            if(a[j]==i){
                flag=1;
                break;
            }
        }

        if(flag==0) cout<<i<<endl;
    }

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}