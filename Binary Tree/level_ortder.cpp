#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void level_order(Node* root){
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node *p=q.front();
        q.pop();
        cout<<p->val<<' ';
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
}

void solve(){

    Node* root=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* e=new Node(60);
    
    root->left=a;
    root->right=b;
    a->left=c;
    b->left=d;
    b->right=e;

    level_order(root);
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}