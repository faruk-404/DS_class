// Topic Binary serch
//problem link: https://leetcode.com/problems/koko-eating-bananas/description/

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()


//--------------------------

int minEatingSpeed(vector<int>& piles, int h) {
    int n=piles.size();
    auto ok=[&](int mid){
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=ceil((double)piles[i]/mid);
            if(cnt>h)return false;
        }
      return true;
    };
    int l=1,r=1e12,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return ans;
        
}
//------------------

void solve(){
    int n,h;cin>>n>>h;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    cout<<minEatingSpeed(a,h)<<nl;

    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}