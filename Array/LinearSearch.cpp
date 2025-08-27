#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return 1;
        }
    }

    return 0;
}


int main(){
    int n,x;
    cout<<"enter the no. of elements in array: ";
    cin>>n;

    vector<int> a;
    int y;

    for(int i=0; i<n; i++){
        cin>>y;
        a.push_back(y);
    }

    cout<<"enter which element should be searched: ";
    cin>>x;


    int p=linearSearch(a,n,x);

    if(p==1) cout<<"element "<<x<<" is found.";
    else cout<<"element "<<x<<" is not found.";

    cout<<endl;
}