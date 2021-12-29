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
int intersaction(node* &head1,node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);
    int d;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while(d--){
        if(ptr1->next==NULL){
            return -1;
        }
        ptr1 = ptr1->next;
    }
    while(ptr1!=NULL&&ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main(){
    node* head1 = NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    display(head1);
    node* head2 = NULL;
    insertAtTail(head2,10);
    insertAtTail(head2,20);
    // connecting head1 and head 2 at some point 
    head2->next->next = head1->next->next->next;
    display(head2);

    cout<<"Intersaction of two linked list is : "<<intersaction(head1,head2)<<"\n";
}