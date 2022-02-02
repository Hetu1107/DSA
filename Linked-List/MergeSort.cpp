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



node* middle(node* head,node* tail){
    node* f = head;
    node* s = head;
    while(f!=tail && f->next!=tail){
        s = s->next;
        f = f->next->next;
    }
    return s;
}

node* merge(node* f,node* s){
    node* merged = new node(0);
    node* temp = new node(0);

    merged = temp ;

    while(f!=NULL && s!=NULL){
        if(f->data>s->data){
            temp->next = s;
            s = s->next;
        }
        else{
            temp->next = f;
            f = f->next;
        }
        temp = temp->next;
    }
    while(f!=NULL){
        temp->next = f;
        f = f->next;
        temp=temp->next;
    }
    while(s!=NULL){
        temp->next=s;
        s=s->next;
        temp=temp->next;
    }

    return merged->next;
}

node* mergeSort(node* head,node* tail){
    if(head==tail){
        node* br = new node(head->data);
        return br;
    }

    node* mid = new node(0);
    node* head2 = new node(0);
    mid = middle(head,tail);
    head2 = mid->next;
    mid->next= NULL;

    node* fh = mergeSort(head,mid);
    node* sh = mergeSort(head2,tail);

    node* final = merge(fh,sh);

    return final;
}
int main(){
    node* head = NULL;
    insertAtTail(head,5);
    insertAtTail(head,2);
    insertAtTail(head,1);
    insertAtTail(head,4);
    insertAtTail(head,1);
    display(head);
    node* tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    cout<<"\nAfter Sort\n"<<"\n";
    node* merged = mergeSort(head,tail);
    display(merged);
}