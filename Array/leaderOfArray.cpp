#include<bits/stdc++.h>
using namespace std;


vector<int> UnionSortedArray(vector<int> &arr1, vector<int> &arr2, int n1, int n2){
    int i=0, j=0;
    vector<int> unionArray;

    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionArray.size()==0 || unionArray.back()!=arr1[i]){
                unionArray.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArray.size()==0 || unionArray.back()!=arr2[j]){
                unionArray.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n1){
        if(unionArray.size()==0 || unionArray.back()!=arr1[i]){
                unionArray.push_back(arr1[i]);
            }
        i++;
    }

    while(j<n2){
        if(unionArray.size()==0 || unionArray.back()!=arr2[j]){
                unionArray.push_back(arr2[j]);
            }
            j++;
    }

    return unionArray;
}


int main(){
    int n;
    cout<<"enter the no. of elements in two sorted arrays: ";
    cin>>n;

    vector<int> a;
    int y;

    cout<<"enter elements of first array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>y;
        a.push_back(y);
    }

    vector<int> ans;
    int maxi=INT_MIN;
    
    for(int i=n-1; i>=0; i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi=max(maxi, a[i]);
    }



    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;
}