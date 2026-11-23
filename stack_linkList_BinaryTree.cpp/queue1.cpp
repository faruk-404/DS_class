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
const int N = 5;  

vector<int> q(N);
ll fr = 0, rr = 0;

void display() {
    if (fr == rr) {
        cout << "Queue empty" << nl;
        return;
    }
    for (ll i = fr; i < rr; i++) cout << q[i % N] << " ";
    cout << nl;
}

void enqueue(int val) {
    if (rr - fr == N) {
        cout << "Queue full (overflow)" << nl;
        return;
    }
    q[rr % N] = val;
    rr++;
    cout << val << " inserted" << nl;
    cout << "Current Queue:" << nl;
    display();
}

void dequeue() {
    if (fr == rr) {
        cout << "Queue empty (underflow)" << nl;
        return;
    }
    cout << q[fr % N] << " removed" << nl;
    fr++;
    cout << "Current Queue:" << nl;
    display();
}

int main() {
    while (true) {
        cout << "\n===== CIRCULAR QUEUE MENU =====" << nl;
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
            if (!(cin >> val)) return 0;
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