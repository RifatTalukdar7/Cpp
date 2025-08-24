///Linkedlist Implement,search,delete
/*
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(Node *&head,int val){
    Node *n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void inserAtHead(Node *&head,int val){
    Node *n=new Node(val);
    n->next=head;
    head=n;
}
bool Search(Node *head,int key){
    Node *temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void DeleteAtHead(Node *&head){
    Node *todelete=head;
    head=head->next;
    delete todelete;
}
void Delete(Node *&head,int key){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        DeleteAtHead(head);
        return;
    }
    Node *temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    Node *Todelete=temp->next;
    temp->next=temp->next->next;
    delete Todelete;
}
Node *reversek(Node *&head,int k);
int main()
{
    Node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    inserAtHead(head,4);
    display(head);
    cout<<Search(head,3)<<endl;
    Delete(head,2);
    display(head);
    DeleteAtHead(head);
    display(head);
    return 0;
}
*/
///Double Linkedlist
//#include<iostream>
//using namespace std;
//struct Node{
//    int data;
//    Node *next;
//    Node *prev;
//    Node(int val){
//        data=val;
//        next=NULL;
//        prev=NULL;
//    }
//};
//void insertHead(Node *&head,int val){
//    Node *n=new Node(val);
//    n->next=head;
//    if(head!=NULL){
//        head->prev=n;
//    }
//    head=n;
//}
//void InsertTail(Node *&head,int val){
//    if(head==NULL){
//        insertHead(head,val);
//        return;
//    }
//    Node *n=new Node(val);
//    Node *temp=head;
//    while(temp->next!=NULL){
//        temp=temp->next;
//    }
//    temp->next=n;
//    n->prev=temp;
//}
//void display(Node *head){
//    Node *temp=head;
//    while(temp!=NULL){
//        cout<<temp->data<<" ";
//        temp=temp->next;
//    }
//    cout<<endl;
//}
//void deleteHead(Node *&head){
//    Node *todelete=head;
//    head=head->next;
//    head->prev=NULL;
//    delete todelete;
//}
//void Delete(Node *&head,int pos){
//    if(pos==1){
//        deleteHead(head);
//        return;
//    }
//    Node *temp=head;
//    int count=1;
//    while(temp!=NULL && count!=pos){
//        temp=temp->next;
//        count++;
//    }
//    temp->prev->next=temp->next;
//    if(temp->next!=NULL){
//        temp->next->prev=temp->prev;
//    }
//    delete temp;
//}
//int main(){
//
//   Node *head=NULL;
//   InsertTail(head,1);
//   InsertTail(head,2);
//   InsertTail(head,3);
//   InsertTail(head,4);
//   InsertTail(head,5);
//   display(head);
//   insertHead(head,6);
//   insertHead(head,7);
//   display(head);
//   Delete(head,1);
//   display(head);
//
//    return 0;
//}

///Circular Linkedlist
//#include<iostream>
//using namespace std;
//struct Node{
//    int data;
//    Node *next;
//    Node(int val){
//        data=val;
//        next=NULL;
//    }
//};
//void insertHead(Node *&head,int val){
//    Node *n=new Node(val);
//    if(head==NULL){
//        n->next=n;
//        head=n;
//        return;
//    }
//    Node *temp=head;
//    while(temp->next!=head){
//        temp=temp->next;
//    }
//    temp->next=n;
//    n->next=head;
//    head=n;
//}
//void insertTail(Node *&head,int val){
//    if(head==NULL){
//        insertHead(head,val);
//        return;
//    }
//    Node *n=new Node(val);
//    Node *temp=head;
//    while(temp->next!=head){
//        temp=temp->next;
//    }
//    temp->next=n;
//    n->next=head;
//}
//void deleteHead(Node *&head){
//    Node *temp=head;
//    while(temp->next!=head){
//        temp=temp->next;
//    }
//    Node *todelete=head;
//    temp->next=head->next;
//    head=head->next;
//    delete todelete;
//}
//void Delete(Node *&head,int pos){
//    if(pos==1){
//        deleteHead(head);
//        return;
//    }
//    Node *temp=head;
//    int count=1;
//    while(count!=pos-1){
//        temp=temp->next;
//        count++;
//    }
//    Node *todelete=temp->next;
//    temp->next=temp->next->next;
//    delete todelete;
//}
//void display(Node *&head){
//    Node *temp=head;
//    do{
//        cout<<temp->data<<" ";
//        temp=temp->next;
//    }while(temp!=head);
//    cout<<endl;
//}
//int main(){
//
//    Node *head=NULL;
//    insertTail(head,1);
//    insertTail(head,2);
//    insertTail(head,3);
//    insertTail(head,4);
//    insertTail(head,5);
//    display(head);
//    insertHead(head,6);
//    insertHead(head,7);
//    display(head);
//    Delete(head,5);
//    display(head);
//
//
//    return 0;
//}
///Reverse single LinkedList
//Node *reverses(Node *&head){
//    Node *prevptr=NULL;
//    Node *currptr=head;
//    Node *nextptr;
//    while(currptr!=NULL){
//        nextptr=currptr->next;
//        currptr->next=prevptr;
//        prevptr=currptr;
//        currptr=nextptr;
//    }
//    return prevptr;
//}
//Node *reverserecurcive(Node *&head){
//    if(head==NULL || head->next==NULL){
//        return head;
//    }
//    Node *newhead=reverserecurcive(head->next);
//    head->next->next=head;
//    head->next=NULL;
//    return newhead;
//}
///reverse k nodes in a linkedlist
/*
Node *reversek(Node *&head,int k){
    Node *prev=NULL;
    Node *curr=head;
    Node *nextp;
    int count=0;
    while(curr!=NULL && count<k){
        nextp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextp;
        count++;
    }
    if(nextp!=NULL)
    head->next=reversek(nextp,k);
    return prev;
}*/
///append last k nodes to start of linked list
//int length(Node *head){
//    int l=0;
//    Node *temp=head;
//    while(temp!=NULL){
//        temp=temp->next;
//        l++;
//    }
//    return l;
//}
//Node *kappend(Node *&head,int k){
//    Node *newhead,*newtail,*tail=head;
//    int l=length(head);
//    k=k%l;
//    int count=1;
//    while(tail->next!=NULL){
//        if(count==l-k){
//            newtail=tail;
//        }
//        if(count==l-k+1){
//            newhead=tail;
//        }
//        tail=tail->next;
//        count++;
//    }
//    newtail->next=NULL;
//    tail->next=head;
//    return newhead;
//}
///Create Cycle,Detect Cycle,remove Cycle
//void makeCycle(Node *&head,int pos){
//    Node *temp=head;
//    Node *start;
//    int count=1;
//    while(temp->next!=NULL){
//        if(count==pos){
//            start=temp;
//        }
//        temp=temp->next;
//        count++;
//    }
//    temp->next=start;
//}
//bool detectCycle(Node *&head){
//    Node* slow=head;
//    Node *fast=head;
//    while(fast!=NULL && fast->next!=NULL){
//        slow=slow->next;
//        fast=fast->next->next;
//        if(fast==slow){
//            return true;
//        }
//    }
//    return false;
//}
//void removeCycle(Node *&head){
//    Node *fast=head;
//    Node *slow=head;
//    do{
//        slow=slow->next;
//        fast=fast->next->next;
//    }while(slow!=fast);
//    fast=head;
//    while(slow->next!=fast->next){
//        slow=slow->next;
//        fast=fast->next;
//    }
//    slow->next=NULL;
//}
///Find intersection point of 2 linked lists
//int length(Node *head){
//    Node *temp=head;
//    int l=0;
//    while(temp!=NULL){
//        temp=temp->next;
//        l++;
//    }
//    return l;
//}
//int intersection(Node *&head1,Node *&head2){
//    int l1=length(head1);
//    int l2=length(head2);
//    int d=0;
//    Node *ptr1;
//    Node *ptr2;
//    if(l1>l2){
//        d=l1-l2;
//        ptr1=head1;
//        ptr2=head2;
//    }
//    else{
//        d=l2-l1;
//        ptr1=head2;
//        ptr2=head1;
//    }
//    while(d){
//        ptr1=ptr1->next;
//        if(ptr1==NULL){
//            return -1;
//        }
//        d--;
//    }
//    while(ptr1!=NULL && ptr2!=NULL){
//        if(ptr1==ptr2){
//            return ptr1->data;
//        }
//        ptr1=ptr1->next;
//        ptr2=ptr2->next;
//    }
//    return -1;
//}
//void intersec(Node *&head1,Node *&head2,int pos){
//    Node *temp1=head1;
//    pos--;
//    while(pos--){
//        temp1=temp1->next;
//    }
//    Node *temp2=head2;
//    while(temp2->next!=NULL){
//        temp2=temp2->next;
//    }
//    temp2->next=temp1;
//}
//int main(){
//    Node *head1=NULL;
//    Node *head2=NULL;
//    inserTail(head1,1);
//    inserTail(head1,2);
//    inserTail(head1,3);
//    inserTail(head1,4);
//    inserTail(head1,5);
//    inserTail(head1,6);
//    inserTail(head2,9);
//    inserTail(head2,10);
//    intersec(head1,head2,4);
//    show(head1);
//    show(head2);
//    cout<<intersection(head1,head2)<<endl;
//}
///merge 2 sorted linkedlist
//Node *marge(Node *&head1,Node *&head2){
//    Node *p1=head1;
//    Node *p2=head2;
//    Node *dummyNode=new Node (-1);
//    Node *p3=dummyNode;
//    while(p1!=NULL && p2!=NULL){
//        if(p1->data<p2->data){
//            p3->next=p1;
//            p1=p1->next;
//        }
//        else{
//            p3->next=p2;
//            p2=p2->next;
//        }
//        p3=p3->next;
//    }
//    while(p1!=NULL){
//        p3->next=p1;
//        p1=p1->next;
//        p3=p3->next;
//    }
//    while(p2!=NULL){
//        p3->next=p2;
//        p2=p2->next;
//        p3=p3->next;
//    }
//    return dummyNode->next;
//}
//Node *mergeRecursive(Node *&head1,Node *&head2){
//    if(head1==NULL){
//        return head2;
//    }
//    if(head2==NULL){
//        return head1;
//    }
//    Node *result;
//    if(head1->data<head2->data){
//        result=head1;
//        result->next=mergeRecursive(head1->next,head2);
//    }
//    else{
//        result=head2;
//        result->next=mergeRecursive(head1,head2->next);
//    }
//    return result;
//}
//int main(){
//    Node *head1=NULL;
//    Node *head2=NULL;
//    int arr1[]={1,4,5,7};
//    int arr2[]={2,3,6};
//    for(int i=0;i<4;i++){
//        inserTail(head1,arr1[i]);
//    }
//    for(int i=0;i<3;i++){
//        inserTail(head2,arr2[i]);
//    }
//    show(head1);
//    show(head2);
//    //Node *newhead=mergeRecursive(head1,head2);
//    Node *newhead=marge(head1,head2);
//    show(newhead);
//}
///put even elements after odd elements in linkedlist
//void evenAferOdd(Node *&head){
//    Node *odd=head;
//    Node *even=head->next;
//    Node *evenStart=even;
//    while(odd->next!=NULL && even->next!=NULL){
//        odd->next=even->next;
//        odd=odd->next;
//        even->next=odd->next;
//        even=even->next;
//    }
//    odd->next=evenStart;
//   //    if(odd->next!=NULL){
//   //        even->next=NULL;
////    }
//}







