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

    int j=-1;

    for(int i=0; i<n; i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }


    for(int i=j+1; i<n; i++){
        if(a[i]!=0){
            swap(a[j],a[i]);
            j++;
        }
    }
    

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;


}