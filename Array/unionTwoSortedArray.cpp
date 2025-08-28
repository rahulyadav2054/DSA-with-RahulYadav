#include<bits/stdc++.h>
using namespace std;


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

    set<int> st;

    for(int i=0; i<n1; i++){
        st.insert(a1[i]);
    }

    for(int i=0; i<n2; i++){
        st.insert(a2[i]);
    }

    int k=st.size();
    int Union[k];
    int index=0;

    for(auto it: st){
        Union[index]=it;
        index++;
    }

    for(int i=0; i<k; i++){
        cout<<Union[i];
    }

    cout<<endl;
}