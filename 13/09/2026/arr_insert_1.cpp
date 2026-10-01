#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(auto &i:arr)cin>>i;
    int idx; cin>>idx;
    int val; cin>>val;

    for(int i=0;i<n;i++){
        if(idx-1==i)cout<<val<<' ';
        cout<<arr[i]<<' ';
    }
    cout<<'\n';

    
}