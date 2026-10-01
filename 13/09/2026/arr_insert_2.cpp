#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(auto &i:arr)cin>>i;
    int idx;cin>>idx;
    int val;cin>>val;
    arr.insert(arr.begin()+idx,val);
    for(auto i:arr)cout<<i<<' ';
    cout<<'\n';

}