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

void print_link_list(Node* head) {
    if (head == NULL) {
        cout << "List empty" << nl;
        return;
    }
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << nl;
}

void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = tail = newnode;
    } else {
        newnode->next = head;
        head = newnode;
    }
    cout << val << " inserted at head" << nl;
    cout << "Current List:" << nl;
    print_link_list(head);
}

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
    cout << val << " inserted at tail" << nl;
    cout << "Current List:" << nl;
    print_link_list(head);
}

void delete_at_head(Node*& head, Node*& tail) {
    if (head == NULL) {
        cout << "List empty (underflow)" << nl;
        return;
    }
    Node* deletenode = head;
    cout << deletenode->val << " deleted from head" << nl;
    if (head == tail) {
        head = tail = NULL;
    } else {
        head = head->next;
    }
    delete deletenode;
    cout << "Current List:" << nl;
    print_link_list(head);
}

void delete_at_tail(Node*& head, Node*& tail) {
    if (head == NULL) {
        cout << "List empty (underflow)" << nl;
        return;
    }
    Node* deletenode = tail;
    cout << deletenode->val << " deleted from tail" << nl;
    if (head == tail) {
        head = tail = NULL;
    } else {
        Node* tmp = head;
        while (tmp->next->next != NULL) tmp = tmp->next;
        tail = tmp;
        tail->next = NULL;
    }
    delete deletenode;
    cout << "Current List:" << nl;
    print_link_list(head);
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    while (true) {
        cout << "\n===== LINKED LIST MENU =====" << nl;
        cout << "1. Insert at head" << nl;
        cout << "2. Insert at tail" << nl;
        cout << "3. Delete at head" << nl;
        cout << "4. Delete at tail" << nl;
        cout << "5. Display" << nl;
        cout << "0. Exit" << nl;
        cout << "Choice: ";
        int ch;
        if (!(cin >> ch)) break;
        if (ch == 1 || ch == 2) {
            int val;
            cout << "Value: ";
            if (!(cin >> val)) break;
            if (ch == 1) insert_at_head(head, tail, val);
            else if (ch == 2) insert_at_tail(head, tail, val);
        } else if (ch == 3) {
            delete_at_head(head, tail);
        } else if (ch == 4) {
            delete_at_tail(head, tail);
        } else if (ch == 0) {
            cout << "Bye!" << nl;
            break;
        } else {
            cout << "Invalid choice" << nl;
        }
    }

    return 0;
}