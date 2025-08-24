//#include<iostream>
//using namespace std;
//#define n 99
//
//class queue{
//    int *arr;
//    int front;
//    int back;
//public:
//    queue(){
//        arr=new int[n];
//        front=-1;
//        back=-1;
//    }
//    void enqueue(int x){
//        if(back==n-1){
//            cout<<"Queue overflow"<<endl;
//            return;
//        }
//        back++;
//        arr[back]=x;
//        if(front==-1){
//            front++;
//        }
//    }
//    void dequeue(){
//        if(front==-1 || front>back){
//            cout<<"No element in queue"<<endl;
//            return;
//        }
//        front++;
//    }
//    int peek(){
//        if(front==-1 || front>back){
//            cout<<"No element To peek"<<endl;
//            return -1;
//        }
//        return arr[front];
//    }
//    bool empty(){
//        if(front==-1 || front>back){
//            return true;
//        }
//        return false;
//    }
//};
//int main()
//{
//    queue q;
//    q.enqueue(2);
//    q.enqueue(3);
//    cout<<q.peek()<<endl;
//    q.dequeue();
//    q.dequeue();
//    cout<<q.peek()<<endl;
//    cout<<q.empty()<<endl;
//    return 0;
//}
///Queue using stack Approach 1
//#include<bits/stdc++.h>
//using namespace std;
//class que{
//    stack<int> s1;
//    stack<int> s2;
//public:
//    void push(int x){
//        s1.push(x);
//    }
//    int pop(){
//        if(s1.empty() && s2.empty()){
//            cout<<"Queue is empty"<<endl;
//            return -1;
//        }
//        if(s2.empty()){
//            while(!s1.empty()){
//                s2.push(s1.top());
//                s1.pop();
//            }
//        }
//        int topval=s2.top();
//        s2.pop();
//        return topval;
//    }
//    bool empty(){
//        if(s1.empty() && s2.empty()){
//            return true;
//        }
//        return false;
//    }
//};
//int main()
//{
//    que q;
//    q.push(1);
//    q.push(2);
//    q.push(3);
//    q.push(4);
//    cout<<q.pop()<<endl;
//    q.push(5);
//    cout<<q.pop()<<endl;
//    cout<<q.pop()<<endl;
//    cout<<q.pop()<<endl;
//    cout<<q.pop()<<endl;
//    cout<<q.pop()<<endl;
//    return 0;
//}
///Queue using stack Approach 2
//#include<bits/stdc++.h>
//using namespace std;
//class que{
//    stack<int> s1;
//public:
//    void push(int x){
//        s1.push(x);
//    }
//    int pop(){
//        if(s1.empty()){
//            cout<<"Queue is empty"<<endl;
//            return -1;
//        }
//        int x=s1.top();
//        s1.pop();
//        if(s1.empty()){
//            return x;
//        }
///        int item=pop();
//        s1.push(x);
//        return item;
//    }
//    bool empty(){
//        if(s1.empty()){
//            return true;
//        }
//        return false;
//    }
//};
//int main()
//{
//    que q;
//    q.push(1);
//    q.push(2);
//    q.push(3);
//    q.push(4);
//    cout<<q.pop()<<endl;
//    q.push(5);
//    cout<<q.pop()<<endl;
//    cout<<q.pop()<<endl;
//    cout<<q.pop()<<endl;
//    cout<<q.pop()<<endl;
//    cout<<q.pop()<<endl;
//    return 0;
//}
///circular Queue
//#include<iostream>
//#define N 5
//using namespace std;
//class que{
//public:
//    int arr[N];
//    int front=-1;
//    int rear=-1;
//    bool isEmpty(){
//        return rear==-1 && front==-1;
//    }
//    bool isFull(){
//        return (rear+1) % N ==front;
//    }
//    void enqueue(int x){
//        if(isFull()){
//            cout<<"Queue is Full"<<endl;
//            return;
//        }
//        if(front==-1){
//            front++;
//        }
//        rear=(rear+1)%N;
//        arr[rear]=x;
//    }
//    int dequeue(){
//        if(isEmpty()){
//            cout<<"Empty queue"<<endl;
//            return -1;
//        }
//        int result=arr[front];
//        if(rear==front){
//            rear=front=-1;
//        }
//        else{
//            front=(front+1)%N;
//        }
//        return result;
//    }
//    int peek()
//    {
//        if(isEmpty()){
//            cout<<"Empty queue"<<endl;
//            return -1;
//        }
//        return arr[front];
//    }
//};
//int main()
//{
//    que q;
//    q.peek();
//    q.enqueue(1);
//    q.enqueue(2);
//    q.enqueue(3);
//    q.enqueue(4);
//    q.enqueue(5);
//    q.dequeue();
//    q.enqueue(6);
//    while(!q.isEmpty()){
//        cout<<q.peek()<<endl;
//        q.dequeue();
//    }
//    q.dequeue();
//
//    return 0;
//}
///circular queue 2
//#include<iostream>
//using namespace std;
//#define maxSize 5
//int Queue[maxSize], Front = -1,rear = -1;
//bool isEmpty(){
// if ((Front==-1) && (rear==-1)){
//    return true;
// }
// return false;
//}
//
//bool isFull(){
// if (((rear+1)%maxSize)==Front){
//    return true;
// }
// return false;
//}
//
//void enqueue(int x){
//  if(isFull()){
//    cout<<"Queue is full"<<endl;
//    return;
//  }
//  else if(isEmpty())
//  {
//      Front++;
//      rear++;
//      Queue[rear]=x;
//  }
//  else{
//    rear=(rear+1)%maxSize;
//    Queue[rear]=x;
//  }
//}
//void dequeue(){
//  if(isEmpty())
//    {cout<<"Queue is Empty"<<endl;}
//  else if (Front==rear)
//   {
//       Front=-1;
//       rear=-1;
//  }
//  else{
//    Front=(Front+1)%maxSize;
//  }
//}
//void Display(){
//    if(isEmpty()){
//        cout<<"Queue is Empty"<<endl;
//    }
//    else if(Front<=rear){
//            for(int i=Front; i<=rear; i++){
//                cout<<Queue[i]<<endl;
//            }
//    }
//    else {
//        for(int i=Front; i<=(maxSize-1); i++){
//            cout<<Queue[i]<<endl;
//        }
//        for(int i=0;i<=rear;i++){
//        cout<<Queue[i]<<endl;
//        }
//    }
//
//}
//int main()
//{
//    cout<<"what you want to do?\n1.Enqueue element in the queue\n2.Dequeue element in the queue\n3.Display The Queue"<<endl;
//    while(1){
//        int n;
//        cout<<"Enter choice: ";
//        cin>>n;
//        switch(n){
//            case 1:{
//                int n1;
//                cout<<"Enter value to be Enqueued: ";
//                cin>>n1;
//                enqueue(n1);
//                break;
//
//            }
//            case 2:{
//                dequeue();
//                break;
//            }
//            case 3:{
//                Display();
//                break;
//            }
//        }
//    }
//    return 0;
//}
///Linked List Implementation of Queue
/*
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
    Node *Front;
    Node *Back;
public:
    Queue(){
        Front=NULL;
        Back=NULL;
    }
    void push(int x){
        Node *n=new Node(x);
        if(Front==NULL){
            Back=n;
            Front=n;
            return;
        }
        Back->next=n;
        Back=n;
    }
    void pop(){
        if(Front==NULL){
            cout<<"Queue underflow"<<endl;
            return;
        }
        Node *todelete=Front;
        Front=Front->next;
        delete todelete;
    }
    int peek(){
        if(Front==NULL){
            cout<<"No Element in Queue"<<endl;
            return -1;
        }
        return Front->data;
    }
    bool Empty(){
        if(Front==NULL){
            return true;
        }
        return false;
    }
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.Empty()<<endl;

    return 0;
}
*/





