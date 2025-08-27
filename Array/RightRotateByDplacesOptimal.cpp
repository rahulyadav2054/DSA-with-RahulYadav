#include<bits/stdc++.h>
using namespace std;

void RightRotateDplace(vector<int> &arr, int n, int d){

    reverse(arr.begin(), arr.begin()+n-d);
    reverse(arr.begin()+n-d, arr.end());
    reverse(arr.begin(), arr.end());

    // reverse(arr, arr+d);
    // reverse(arr+d, arr+n);
    // reverse(arr, arr+n);
}


int main(){
    int n,d;
    cout<<"enter the no. of elements in array and dth place of rotation: ";
    cin>>n>>d;


    d=d%n;

    vector<int> a;
    int x;

    for(int i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }


    RightRotateDplace(a, n, d);

    // reverse(a,a+d);
    // reverse(a+d, a+n);
    // reverse(a, a+n);
    

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;


}