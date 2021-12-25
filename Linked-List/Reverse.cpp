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
        temp=temp->next;
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
node* reverseIterative(node* &head){
    node* current = head;
    node* prev = NULL;
    node* nextptr;
    while(current!=NULL){
        nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
    }
    return prev;
}
node* reverseRecursive(node* &head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next =NULL;
    return newhead;
}
node* reverseK(node* &head,int k){
    node* current = head;
    node* prev = NULL;
    node* nextptr;
    int c = 0;
    while(current!=NULL&&c<k){
        nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
        c++;
    }
    if(nextptr!=NULL){
        head->next = reverseK(nextptr,k); 
    }
    return prev;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    // node* newHead1 = reverseIterative(head);
    // display(newHead1);
    // node* newHead2 = reverseRecursive(head);
    // display(newHead2);
    node* newHead3 = reverseK(head,2);
    display(newHead3);
}