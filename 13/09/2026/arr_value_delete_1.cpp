#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(auto &i:arr)cin>>i;
    int x; cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x)continue;
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
}