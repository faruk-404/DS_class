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

vector<int> q(N);
int fr = 0, rr = 0;

void enqueue(int val) {
    if (rr == N) {
        cout << "Queue full (overflow)" << nl;
        return;
    }
    q[rr++] = val;
    cout << val << " inserted" << nl;
    cout << "Curret Queue:\n";
    for (int i = fr; i < rr; i++) cout << q[i] << " ";
    cout << nl;
}

void dequeue() {
    if (fr == rr) {
        cout << "Queue empty (underflow)" << nl;
        return;
    }
    cout << q[fr++] << " removed" << nl;
    if (fr == rr) fr = rr = 0;
    cout << "Curret Queue:\n";
    for (int i = fr; i < rr; i++) cout << q[i] << " ";
    cout << nl;
}

void display() {
    if (fr == rr) {
        cout << "Queue empty" << nl;
        return;
    }
    for (int i = fr; i < rr; i++) cout << q[i] << " ";
    cout << nl;
}

void solve() {
}

int main() {
    while (true) {
        cout << "\n===== QUEUE MENU =====" << nl;
        cout << "1. Enqueue" << nl;
        cout << "2. Dequeue" << nl;
        cout << "3. Display" << nl;
        cout << "0. Exit" << nl;
        cout << "Choice: ";
        int ch;
        if (!(cin >> ch)) return 0;
        if (ch == 1) {
            int val;
            cout << "Value: ";
            cin >> val;
            enqueue(val);
        } else if (ch == 2) {
            dequeue();
        } else if (ch == 3) {
            display();
        } else if (ch == 0) {
            cout << "Bye!" << nl;
            return 0;
        } else {
            cout << "Invalid choice" << nl;
        }
    }
    return 0;
}