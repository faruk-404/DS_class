#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...)
#define dbg_arr(...)
#define dbg_range(...)
#define dbg_grid(...)
#define dbg_time(...)
#endif

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
const int N = 3e5 + 5;

class Node {
   public:
    ll val;
    Node* left;
    Node* right;
    Node(ll val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

void level_order(Node* root) {
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* p = q.front();
        q.pop();
        cout << p->val << " ";
        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
}

Node* input_binary_tree() {
    int val;
    cin >> val;

    Node* root = NULL;
    if (val == -1) return root;
    root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int u, v;
        cin >> u >> v;
        Node *newleft = NULL, *newright = NULL;
        if (u != -1) newleft = new Node(u);
        if (v != -1) newright = new Node(v);
        Node* p = q.front();
        q.pop();
        p->left = newleft;
        p->right = newright;
        if (newleft) q.push(p->left);
        if (newright) q.push(p->right);
    }
    return root;
}
void solve() {
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    inorder(root);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}