#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<"\n";
}
int length(node* head){
    int l = 0;
    node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        l++;
    }
    return l;
}
node* appendKnodes(node* &head,int k){
    node* newHead;
    node* newTail;
    node* tail=head;
    int c = 1;
    int l = length(head);
    k = k%l;
    while(tail->next!=NULL){
        if(c==l-k){
            newTail = tail;
        }
        if(c==l-k+1){
            newHead = tail;
        }
        c++;
        tail=tail->next;
    }

    newTail->next=NULL;
    tail->next = head;
    return newHead;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    node* newHead = appendKnodes(head,3);
    display(newHead);
}