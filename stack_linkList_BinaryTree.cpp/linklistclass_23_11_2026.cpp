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
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = tail = NULL;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_at_head(Node*& head, Node*& tail) {
    if (head == NULL) return;
    Node* deletenode = head;
    if (head == tail) {
        head = tail = NULL;
    } else {
        head = head->next;
    }
    delete deletenode;
}

void delete_at_tail(Node*& head, Node*& tail) {
    if (head == NULL) return;
    Node* deletenode = tail;
    Node* tmp = head;
    if (head == tail) {
        head = tail = NULL;
    } else {
        while (tmp->next->next != NULL) tmp = tmp->next;
        tail = tmp;
        tail->next = NULL;
    }
    delete deletenode;
}
void print_link_list(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << '\n';
}
void input_link_list(Node*& head, Node*& tail) {
    int val;
    while (cin >> val) {
        if (val == -1) return;
        insert_at_tail(head, tail, val);
    }
}
void solve() {
    Node* head = NULL;
    Node* tail = NULL;
    input_link_list(head, tail);
    print_link_list(head);
    insert_at_head(head, tail, 3);
    print_link_list(head);
    insert_at_tail(head, tail, 8);
    print_link_list(head);
    delete_at_head(head, tail);
    print_link_list(head);
    delete_at_tail(head, tail);
    print_link_list(head);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}