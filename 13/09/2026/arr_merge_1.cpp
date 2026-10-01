#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(auto &i:arr)cin>>i;
    int m; cin>>m;
    vector<int> brr(m);
    for(auto &i:brr)cin>>i;
    cout<<n+m<<'\n';
    for(auto i:arr)cout<<i<<' ';
    for(auto i:brr)cout<<i<<' ';
    cout<<'\n';
}