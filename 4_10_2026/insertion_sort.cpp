#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    for(int i=1;i<n;i++){
        int val=a[i];
        int j=i-1;
        while(j>=0 && val<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=val;
    }
    for(auto i:a)cout<<i<<' ';
    cout<<'\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}