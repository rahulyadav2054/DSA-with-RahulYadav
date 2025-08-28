
// Brute Force Method to find intersection of two sorted arrays

#include<bits/stdc++.h>
using namespace std;


vector<int> IntersectionSortedArray(vector<int> &arr1, vector<int> &arr2, int n1, int n2){
    
    vector<int> intersecArr;
    vector<int> visitedArray;

    for(int i=0; i<n2; i++){
        visitedArray.push_back(0);
    }

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i]==arr2[j] && visitedArray[j]==0){
                intersecArr.push_back(arr1[i]);
                visitedArray[j]=1;
                break;
            }

            if(arr2[j]>arr1[i]) break;
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

    vector<int> temp = IntersectionSortedArray(a1, a2,n1,n2);

    for(int i=0; i<temp.size(); i++){
        cout<<temp[i]<<" ";
    }

    cout<<endl;
}