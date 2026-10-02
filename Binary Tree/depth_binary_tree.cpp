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

Node* input_binary_tree(){
    int val;cin>>val;
    Node* root=new Node(val);
    queue<Node* > q;
    q.push(root);
    while(!q.empty()){
        int u,v;cin>>u>>v;
        Node* p=q.front();
        q.pop();
        Node *myleft=NULL,*myright=NULL;
        if(u!=-1)myleft=new Node(u);
        if(v!=-1)myright=new Node(v);
        p->left=myleft;
        p->right=myright;
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);        
    }

    return root;

}

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

int count_leaf_node(Node *root){
    if(root==NULL)return 0;
    if(root->right==NULL && root->left==NULL)return 1;
    int left=count_leaf_node(root->left);
    int right=count_leaf_node(root->right);
    return left+right;
}

void solve(){

    //10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
    Node* root=input_binary_tree();
    level_order(root);
    cout<<"\n\n";
    cout<<count_leaf_node(root);
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}