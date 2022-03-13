#include<iostream>
using namespace std;

#define n 20
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue overflow"<<"\n";
            return;
        }
        if(front==-1){
            front++;
        }
        back++;
        arr[back] = x;
    }
    bool empty(){
        if(front==-1 || front>back){
            if(front>back){
                front = -1;
                back = -1;
            }
            return true;
        }
        return false;
    }
    void pop(){
        if(empty()){
            cout<<"empty"<<"\n";
            return;
        }
        front++;
    }
    int peek(){
        if(empty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    cout<<q.empty()<<"\n";
    cout<<q.peek()<<"\n";
}