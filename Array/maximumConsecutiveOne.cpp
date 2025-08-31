
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


    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    int max=0, count=0;
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            count++;
            if(count>max) max=count;
        }
        else count=0;
    }

    cout<<"maximum consecutive one is "<<max<<endl;

    cout<<endl;
}