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

void free_tree(Node* root) {
    if (root == NULL) return;
    free_tree(root->left);
    free_tree(root->right);
    delete root;
}

Node* input_binary_tree() {
    ll val;
    if (!(cin >> val) || val == -1) return NULL;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        ll u, v;
        if (!(cin >> u >> v)) break;
        Node* p = q.front();
        q.pop();
        if (u != -1) {
            p->left = new Node(u);
            q.push(p->left);
        }
        if (v != -1) {
            p->right = new Node(v);
            q.push(p->right);
        }
    }
    return root;
}

int main() {
    Node* root = NULL;
    while (true) {
        cout << "\n===== BINARY TREE MENU =====" << nl;
        cout << "1. Build tree " << nl;
        cout << "2. Preorder" << nl;
        cout << "3. Inorder" << nl;
        cout << "4. Postorder" << nl;
        cout << "5. Level order" << nl;
        cout << "0. Exit" << nl;
        cout << "Choice: ";
        int ch;
        if (!(cin >> ch)) break;

        if (ch == 1) {
            free_tree(root);
            cout << "Input (root, then left right pairs): ";
            root = input_binary_tree();
            cout << "Tree built" << nl;
        } else if (ch >= 2 && ch <= 5) {
            if (root == NULL) {
                cout << "Tree empty" << nl;
                continue;
            }
            if (ch == 2) preorder(root);
            else if (ch == 3) inorder(root);
            else if (ch == 4) postorder(root);
            else level_order(root);
            cout << nl;
        }
        else if (ch == 0) {
            cout << "Bye!" << nl;
            break;
        } else {
            cout << "Invalid choice" << nl;
        }
    }
    free_tree(root);
    return 0;
}