//Binary Tree
// problem link: https://leetcode.com/problems/binary-tree-preorder-traversal/description/

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

//-------------------
void preorder(Node* root,vector<int> & v){
    if(root==NULL)return;
    v.push_back(root->val);
    preorder(root->left ,v);
    preorder(root->right, v);
   
}

vector<int> preorderTraversal(Node* root) {
    vector<int> ans;
    preorder(root,ans);
    return ans;        
}

//------------


Node* input(){
    int val;cin>>val;
    Node* root=new Node(val);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int l,r;cin>>l>>r;
        Node* p=q.front();
        q.pop();
        Node* leftNode=NULL,*rightNode=NULL;
        if(l!=-1)leftNode=new Node(l);
        if(r!=-1)rightNode=new Node(r);
        p->left=leftNode;
        p->right=rightNode;
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
    return root;
}

void solve(){
    Node* root=input();

    vector<int> ans= preorderTraversal(root);
    for(auto i:ans)cout<<i<<' ';
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