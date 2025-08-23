#include<bits/stdc++.h>
using namespace std;

int ArraySorted(vector<int> &arr, int n){

    for(int i=1; i<n; i++){
        if(arr[i-1]<arr[i]){

        }

        else if (arr[i]<arr[i-1]){
            
        }
        
        else{
            return 0;
        }
    }
    return 1;
}

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


    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //check array is sorted in (ascending or decending) order or not

    int ca=ArraySorted(a,n);

    if(ca){
        cout<<"array is sorted.";
    }
    else{
        cout<<"array is not sorted.";
    }

}