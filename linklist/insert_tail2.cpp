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
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head,Node* &  tail,int val){
    Node* newnode = new Node(val);
    tail->next=newnode;
    tail=newnode;
}
void print_link_list(Node* tmp){
    while(tmp!=NULL){
        cout<<tmp->val<<nl;
        tmp=tmp->next;
    }
}

void solve(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(23);
    Node* c=new Node(30);
    Node* tail=new Node(40);
    
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=tail;
    insert_at_tail(head,tail,100);
    print_link_list(head);
    cout<<'\n';
    cout<<tail->val<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}