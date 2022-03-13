#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};
class queue{
    node* front;
    node* back;

    public:
    queue(){
        front = NULL;
        back = NULL;
    }
    void push(int x){
        node* n = new node(x);
        if(front==NULL){
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }
    int peek(){
        if(front==NULL){
            cout<<"QUEUE is EMPTY"<<"\n";
            return -1;
        }
        return front->data;
    }
    void pop(){
        if(front==NULL){
            cout<<"QUEUE is EMPTY"<<"\n";
            return;
        }
        node* todelete = front;
        front = front->next;
        delete todelete;
    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(6);
    q.push(5);
    q.push(2);
    cout<<q.peek()<<"\n";
    q.pop();
    cout<<q.peek()<<"\n";
}