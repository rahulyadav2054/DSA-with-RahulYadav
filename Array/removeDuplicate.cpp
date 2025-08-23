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



    set<int> st;

    for(int i=0; i<n; i++){
        st.insert(a[i]);
    }


    int index=0;

    for(auto it: st){
        a[index]=it;
        index++;
    }


    a.resize(index);

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;


}