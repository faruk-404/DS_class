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

void insert_at_tail(Node* &head, Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head=tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_link_list(Node* tmp){
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<'\n';
}

void rec(Node* &head,Node* &tail,Node* tmp){
    if(tmp->next==NULL){
        head=tmp;
        return;
    }
    rec(head, tail, tmp->next);
    tmp->next->next=tmp;
    tmp->next=NULL;
    tail=tmp;
    
}

void solve(){
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,tail,val);
    }
    print_link_list(head);
    rec(head,tail,head);
    print_link_list(head);
    cout<<'\n';
    cout<<head->val<<" " <<tail->val<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}