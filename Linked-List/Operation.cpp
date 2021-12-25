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
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
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
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}
bool search(node* head,int val){
    node* temp = head;
    while(temp->next!=NULL){
        if(temp->data==val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deletionAtHead(node* &head){
    node* temp = head;
    head = head->next;
    delete temp;
}
void deletion(node* &head,int val){
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* delnode = temp->next;
    temp->next = temp->next->next;
    delete delnode;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);

}