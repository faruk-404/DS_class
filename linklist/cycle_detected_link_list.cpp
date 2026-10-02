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
bool cycle_detected_link_list(Node* head){
    Node* i=head,*j=head->next;
    for(;j!=NULL && j->next!=NULL;i=i->next,j=j->next->next ){
        if(i==j)return true;
    }
    return false;
}
void print_link_list(Node* tmp){
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<'\n';
}

void solve(){
    Node* head=new Node(12);
    Node* a=new Node(10);
    Node* b=new Node(70);
    Node* c=new Node(0);
    Node* d=new Node(60);
    Node* tail=new Node(70);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=tail;
    tail->next=a;
    if(cycle_detected_link_list(head)){
        cout<<"Cycle detect\n";
    }else{
        cout<<"Not cycle\n";
    }
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