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
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=tail=newnode;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;    
}

void delete_at_head(Node* &head,Node* &tail){
    Node* deletenode=head;
    if(head->next==NULL){
        head=NULL;
        tail=NULL;
        delete deletenode;
        return;
    }
    head=head->next;
    head->prev=NULL;
    delete deletenode;
}

void print_double_link_list(Node* tmp){
    while(tmp){
        cout<<tmp->val<<' ';
        tmp=tmp->next;
    }
    cout<<'\n';
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
    delete_at_head(head,tail);
    print_double_link_list(head);

    cout<<"\n\n"<<head->val<<" "<<tail->val<<'\n';
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}