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
    vector<int> a(n+1);
    for(auto &i:a)cin>>i;
    int x;cin>>x;
    int f=1,l=n;
    while(f<=l){
        int m=(f+l)/2;
        if(x==a[m]){
            cout<<"Fount "<<x<<'\n';
            return;
        }else if(x<a[m]){
            l=m-1;
        }else{
            f=m+1;
        }
    }
    cout<<"NOT Found\n";
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}