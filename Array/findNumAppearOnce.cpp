
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

    int count=0;


    for(int i=0; i<n; i++){
        int num=a[i];
        count=0;
        for(int j=0; j<n; j++){
            if(a[j]==num){
                count++;
            }
        }

        if(count==1) cout<<"the num appears once is "<<num<<endl;
    }

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}