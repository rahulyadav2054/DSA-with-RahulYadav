#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cout<<"enter the no. of element of the array"<<endl;
    cin>>n;

    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }

    int largest=INT_MIN;
    int seclargest=INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }
        else{
            if(arr[i]<largest && arr[i]>seclargest){
                seclargest=arr[i];
            }
        }
    }

    cout<<"largest element of the array is : "<<largest<<endl;
    cout<<"second largest element is: "<<seclargest<<endl;

}