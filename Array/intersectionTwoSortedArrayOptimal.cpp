
// Optimal Method to find intersection of two sorted arrays

#include<bits/stdc++.h>
using namespace std;


vector<int> IntersectionSortedArray(vector<int> &arr1, vector<int> &arr2){
    
    int n1=arr1.size();
    int n2=arr2.size();

    int i=0, j=0;

    vector<int> intersecArr;

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]) i++;
        else if(arr1[i]>arr2[j]) j++;
        else {
            intersecArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return intersecArr;
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

    vector<int> temp = IntersectionSortedArray(a1, a2);

    for(int i=0; i<temp.size(); i++){
        cout<<temp[i]<<" ";
    }

    cout<<endl;
}