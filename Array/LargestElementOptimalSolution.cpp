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

    int largest=a[0];

    for(int i=0; i<n; i++){
        if(a[i]>largest) largest=a[i];
    }

    cout<<"the largest element of the array is "<<largest;
}