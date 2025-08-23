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

    int smallest=a[0], sSmallest=-1;

    for(int i=0; i<n; i++){
        if(a[i]<smallest){
            sSmallest=smallest;
            smallest=a[i];
        }

        // if(a[i]>smallest){
        //     if(a[i]<sSmallest){
        //         sSmallest=a[i];
        //     }
        // }


        if(a[i]>smallest && a[i]<sSmallest)
            sSmallest=a[i];
    }

    cout<<"the smallest element of the array is "<<smallest<<endl;
    cout<<"the second smallest element of the array is "<<sSmallest;
}