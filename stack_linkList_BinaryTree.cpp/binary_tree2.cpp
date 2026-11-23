// #include <bits/stdc++.h>
// using namespace std;
// #ifdef LOCAL
// #include "debug.h"
// #else
// #define dbg(...)
// #define dbg_arr(...)
// #define dbg_range(...)
// #define dbg_grid(...)
// #define dbg_time(...)
// #endif

// #define nl '\n'
// #define nf cout << '\n'
// #define ll long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define all(v) v.begin(), v.end()
// const int N = 3e5 + 5;

// const ll EMPTY = LLONG_MIN;  // khali node er marker
// vector<ll> tree;             // 1-based, tree[0] unused

// bool exists(int i) {
//     return i >= 1 && i < (int)tree.size() && tree[i] != EMPTY;
// }

// void preorder(int i) {
//     if (!exists(i)) return;
//     cout << tree[i] << " ";
//     preorder(2 * i);
//     preorder(2 * i + 1);
// }

// void inorder(int i) {
//     if (!exists(i)) return;
//     inorder(2 * i);
//     cout << tree[i] << " ";
//     inorder(2 * i + 1);
// }

// void postorder(int i) {
//     if (!exists(i)) return;
//     postorder(2 * i);
//     postorder(2 * i + 1);
//     cout << tree[i] << " ";
// }

// void level_order() {
//     // array already level order e ache, shudhu khali gulo skip
//     for (int i = 1; i < (int)tree.size(); i++)
//         if (tree[i] != EMPTY) cout << tree[i] << " ";
// }

// // Input: n, tarpor n ta value (index 1 theke n), -1 mane khali
// void input_binary_tree() {
//     int n;
//     cout << "Array size (n): ";
//     if (!(cin >> n) || n <= 0) {
//         tree.clear();
//         return;
//     }
//     tree.assign(n + 1, EMPTY);
//     cout << "Values (index 1 theke " << n << ", -1 = khali): ";
//     for (int i = 1; i <= n; i++) {
//         ll x;
//         cin >> x;
//         if (x != -1) tree[i] = x;
//     }
//     // root khali hole tree empty
//     if (tree[1] == EMPTY) tree.clear();
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     while (true) {
//         cout << "\n===== BINARY TREE MENU (VECTOR, 1-BASED) =====" << nl;
//         cout << "1. Build tree" << nl;
//         cout << "2. Preorder" << nl;
//         cout << "3. Inorder" << nl;
//         cout << "4. Postorder" << nl;
//         cout << "5. Level order" << nl;
//         cout << "0. Exit" << nl;
//         cout << "Choice: ";
//         int ch;
//         if (!(cin >> ch)) break;

//         if (ch == 1) {
//             input_binary_tree();
//             cout << "Tree built" << nl;
//         } else if (ch >= 2 && ch <= 5) {
//             if (tree.empty()) {
//                 cout << "Tree empty" << nl;
//                 continue;
//             }
//             if (ch == 2) preorder(1);
//             else if (ch == 3) inorder(1);
//             else if (ch == 4) postorder(1);
//             else level_order();
//             cout << nl;
//         } else if (ch == 0) {
//             cout << "Bye!" << nl;
//             break;
//         } else {
//             cout << "Invalid choice" << nl;
//         }
//     }
//     return 0;
// }