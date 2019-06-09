#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *next;
    Node(int x){
        /*
        this->val=x;
        this->next=NULL;
        */
        val=x;
        next=NULL;
    }
};

void traversal(Node *head){
    if(head==NULL)
        return;
    else{
        Node *p=head;
        while(p!=NULL){
            cout<<(p->val)<<" ";
            p=p->next;
        }
    }    
}

Node* createList(Node *head,int val){
    Node *temp=new Node(val);
    if(head==NULL)
        head=temp;
    else{
        Node *p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
    } 
    return head;
}

int main(){
    Node *head=NULL;
    srand(time(0));
    for(int i=0;i<7;i++){
        head=createList(head,(rand()%30+50));
    }
    traversal(head);
    return 0;
}
