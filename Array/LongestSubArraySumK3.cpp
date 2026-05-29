
// Brute force method to find missing element in array

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,x;
    cout<<"enter the no. of elements in array: ";
    cin>>n;

    vector<int> arr;
    int y;

    cout<<"enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>y;
        arr.push_back(y);
    }

    int maxlen=0, k=6, sum=0;
    map<int, int> preSumMap;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum==k)
            maxlen=max(maxlen, i+1);
        

        int remaining=sum-k;

        if(preSumMap.find(remaining)!=preSumMap.end()){
            int len=i-preSumMap[remaining];
            maxlen=max(maxlen, len);
        }

        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }
    }


    cout<<maxlen;

    

    cout<<endl;
}