//lingle linked list
// problem link: https://leetcode.com/problems/middle-of-the-linked-list/description/

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

//-------------------

Node* middleNode(Node* head) {
    Node* tmp=head;
    int cnt=0;
    while(tmp){
        cnt++;
        tmp=tmp->next;
    }
    tmp=head;
    for(int i=0;i<cnt/2;i++)tmp=tmp->next;
    return tmp;
}

//------------


void input(Node* &head, Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head=tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print(Node* tmp){
    while(tmp!=NULL){
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
        input(head,tail,val);
    }
    cout<<middleNode(head)->val<<'\n';
    print(head);
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}