#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(auto &i:arr)cin>>i;
    int m; cin>>m;
    vector<int> brr(m);
    for(auto &i:brr)cin>>i;
    for(auto i:brr)arr.push_back(i);
    cout<<arr.size()<<'\n';
    for(auto i:arr)cout<<i<<' ';
    cout<<'\n';
}