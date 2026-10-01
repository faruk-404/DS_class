#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(auto &i:arr)cin>>i;
    int x;cin>>x;
    for(int i=x-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<' ';
    }
    cout<<"\n";
}