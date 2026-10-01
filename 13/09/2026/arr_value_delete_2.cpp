#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(auto &i:arr)cin>>i;
    int x;cin>>x;

    vector<int> idx;
    for(int i=0;i<n;i++){
        if(arr[i]==x)idx.push_back(1+i);
    }
    for(auto i:idx)cout<<i<<' ';
    cout<<'\n';
    for(auto i:arr){
        if(i==x)continue;
        cout<<i<<' ';
    }
    cout<<'\n';


}