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
    set<int> st;
    for(auto i:a)st.insert(i);
    cout<<"1st Max: "<<*--st.end()<<nl;
    if(st.size()>1)cout<<"2nd Max: "<<*(--(--st.end()))<<nl;
    else cout<<"2nd Max Not found";

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}