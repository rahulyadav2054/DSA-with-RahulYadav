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
        if(unionArray.size()==0 || unionArray.back()!=arr1[j]){
                unionArray.push_back(arr1[j]);
            }
            j++;
    }

    return unionArray;
}


int main(){
    int n1,n2,x;
    cout<<"enter the no. of elements in two sorted arrays: ";
    cin>>n1>>n2;

    vector<int> a1;
    vector<int> a2;
    int y;

    cout<<"enter elements of first array: "<<endl;
    for(int i=0; i<n1; i++){
        cin>>y;
        a1.push_back(y);
    }

    cout<<"enter elements of second array: "<<endl;
    for(int i=0; i<n2; i++){
        cin>>y;
        a2.push_back(y);
    }

    vector<int> temp = UnionSortedArray(a1, a2,n1,n2);

    for(int i=0; i<temp.size(); i++){
        cout<<temp[i]<<" ";
    }

    cout<<endl;
}