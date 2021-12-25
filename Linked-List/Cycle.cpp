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
void makeCycle(node* &head,int pos){
    node* temp = head;
    node* detected;
    int c = 1;
    while(temp->next!=NULL){
        if(c==pos){
            detected = temp;
        }
        c++;
        temp = temp->next;
    }
    temp->next = detected;
}
bool detectCycle(node* &head){
    node* fast = head;
    node* slow = head;
    while(fast!=NULL&&fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void removeCycle(node* &head){
    node* fast = head;
    node* slow = head;
    do{
        fast = fast->next->next;
        slow = slow->next;
    }while(fast!=slow);
    fast = head;
    while(fast->next!=slow->next){
        fast = fast->next;
        slow = slow->next;
    }   
    slow->next = NULL;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    makeCycle(head,2);
    removeCycle(head);
    cout<<detectCycle(head)<<"\n";
}