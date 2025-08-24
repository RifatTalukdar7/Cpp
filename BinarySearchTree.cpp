///Implement BST
//#include<iostream>
//using namespace std;
//struct Node{
//    int data;
//    Node *left,*right;
//    Node(int val){
//        data=val;
//        left=NULL;
//        right=NULL;
//    }
//};
//Node *InsertBST(Node *root,int val){
//    if(root==NULL){
//        return new Node(val);
//    }
//    if(val<root->data){
//        root->left=InsertBST(root->left,val);
//    }
//    else{
//        root->right=InsertBST(root->right,val);
//    }
//    return root;
//}
//void InOrder(Node *root){
//    if(root==NULL){
//        return;
//    }
//    InOrder(root->left);
//    cout<<root->data<<" ";
//    InOrder(root->right);
//}
//Node *SearchInBST(Node *root,int key){
//    if(root==NULL){
//        return NULL;
//    }
//    if(root->data==key){
//        return root;
//    }
//    if(root->data > key){
//        return SearchInBST(root->left,key);
//    }
//    return SearchInBST(root->right,key);
//}
//
//int main()
//{
//    Node *root=NULL;
//    root=InsertBST(root,5);
//    InsertBST(root,1);
//    InsertBST(root,3);
//    InsertBST(root,4);
//    InsertBST(root,2);
//    InsertBST(root,7);
//    InOrder(root);
//    cout<<endl;
//    if(SearchInBST(root,8)==NULL){
//        cout<<"Key Doesn't exist"<<endl;
//    }
//    else{
//        cout<<"Key exist"<<endl;
//    }
//
//    return 0;
//}
///Delete in a BST
//#include<iostream>
//using namespace std;
//struct Node{
//    int data;
//    Node *left,*right;
//    Node(int val){
//        data=val;
//        left=NULL;
//        right=NULL;
//    }
//};
//Node *InsertBST(Node *root,int val){
//    if(root==NULL){
//        return new Node(val);
//    }
//    if(val<root->data){
//        root->left=InsertBST(root->left,val);
//    }
//    else{
//        root->right=InsertBST(root->right,val);
//    }
//    return root;
//}
//void InOrder(Node *root){
//    if(root==NULL){
//        return;
//    }
//    InOrder(root->left);
//    cout<<root->data<<" ";
//    InOrder(root->right);
//}
//Node *inorderSucc(Node* root){
//    Node *curr=root;
//    while(curr && curr->left!=NULL){
//        curr=curr->left;
//    }
//    return curr;
//}
//Node *deleteInBST(Node *root,int key){
//    if(key < root->data){
//        root->left=deleteInBST(root->left,key);
//    }
//    else if(key > root->data){
//        root->right=deleteInBST(root->right,key);
//    }
//    else{
//        if(root->left==NULL){
//            Node *temp=root->right;
//            free(root);
//            return temp;
//        }
//        else if(root->right==NULL){
//            Node *temp=root->left;
//            free(root);
//            return temp;
//        }
//        Node *temp=inorderSucc(root->right);
//        root->data=temp->data;
//        root->right=deleteInBST(root->right,temp->data);
//    }
//    return root;
//}
//
//int main()
//{
//    Node *root=NULL;
//    root=InsertBST(root,4);
//    InsertBST(root,2);
//    InsertBST(root,5);
//    InsertBST(root,1);
//    InsertBST(root,3);
//    InsertBST(root,6);
//    InOrder(root);
//    cout<<endl;
//    root=deleteInBST(root,2);
//    InOrder(root);
//    return 0;
//}
///Build BST from preorder
/*
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node *constructBST(int preorder[],int *preorderIdx,int key,int Min,int Max,int n){
    if(*preorderIdx>=n){
        return NULL;
    }
    Node* root=NULL;
    if(key>Min && key<Max){
        root=new Node(key);
        *preorderIdx=*preorderIdx+1;
        if(*preorderIdx<n){
            root->left=constructBST(preorder,preorderIdx,preorder[*preorderIdx],Min,key,n);
        }
        if(*preorderIdx<n){
            root->right=constructBST(preorder,preorderIdx,preorder[*preorderIdx],key,Max,n);
        }
    }
    return root;
}
void printPreorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main()
{
    int preorder[]={10,2,1,13,11};
    int n=5;
    int preorderIdx=0;
    Node* root=constructBST(preorder,&preorderIdx,preorder[0],INT_MIN,INT_MAX,n);
    printPreorder(root);

    return 0;
}*/
///Check for BST
/*
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool isBST(Node *root,Node* Min=NULL,Node* Max=NULL){
    if(root==NULL) return true;
    if(Min!=NULL && root->data<=Min->data){
        return false;
    }
    if(Max!=NULL && root->data>=Max->data){
        return false;
    }
    bool leftValid=isBST(root->left,Min,root);
    bool rightValid=isBST(root->right,root,Max);
    return leftValid && rightValid;
}
int main()
{
    Node *root1=new Node(1);
    root1->left=new Node(2);
    root1->right=new Node(3);
    if(isBST(root1,NULL,NULL)){
        cout<<"Valid BST"<<endl;
    }
    else{
        cout<<"Invalid BST"<<endl;
    }

    Node *root2=new Node(5);
    root2->left=new Node(2);
    root2->right=new Node(8);
    if(isBST(root2,NULL,NULL)){
        cout<<"Valid BST"<<endl;
    }
    else{
        cout<<"Invalid BST"<<endl;
    }

    return 0;
}*/
///Bulid Balance BST
/*
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node *sortedArrayToBST(int arr[],int start,int End){
    if(start>End){
        return NULL;
    }
    int mid=(start+End)/2;
    Node *root=new Node(arr[mid]);
    root->left=sortedArrayToBST(arr,start,mid-1);
    root->right=sortedArrayToBST(arr,mid+1,End);
    return root;
}
void preorderPrint(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}
int main()
{
    int arr[]={10,20,30,40,50};
    Node *root=sortedArrayToBST(arr,0,4);
    preorderPrint(root);
    cout<<endl;


    return 0;
}*/
///Catalan Numbers
/*
#include<iostream>
using namespace std;
int catalan(int n){
    if(n<=1) return 1;
    int res=0;
    for(int i=0;i<=n-1;i++){
        res+=catalan(i)*catalan(n-i-1);
    }
    return res;
}
int main()
{
    for(int i=0;i<=10;i++){
        cout<<catalan(i)<<" ";
    }


    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
vector<Node*> constructTrees(int start,int end){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        cout<<"NULL"<<endl;
        return trees;
    }
    for(int i=start;i<=end;i++){
        cout<<"left "<<start<<" "<<i-1<<endl;
        vector<Node*> leftSubtrees=constructTrees(start,i-1);
        cout<<"right "<<i+1<<" "<<end<<endl;
        vector<Node*> rightSubtrees=constructTrees(i+1,end);
        cout<<leftSubtrees.size()<<" "<<rightSubtrees.size()<<endl;
        for(int j=0;j<leftSubtrees.size();j++){
            Node *left=leftSubtrees[j];
            for(int k=0;k<rightSubtrees.size();k++){
                Node* right=rightSubtrees[k];
                Node* node=new Node(i);
                cout<<" i : "<<i<<endl;
                node->left=left;
                node->right=right;
                trees.push_back(node);
                cout<<"push "<<node->data<<endl;
            }
        }
    }
    return trees;
}
void preorder(Node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    vector<Node*> totalTrees=constructTrees(1,3);
    for(int i=0;i<totalTrees.size();i++){
        cout<<(i+1)<<" : ";
        preorder(totalTrees[i]);
        cout<<endl;
    }

    return 0;
}
*/
///Zigzag Traversal
/*
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void zigzagTreversal(Node *root){
    if(root==NULL){
        return;
    }
    stack<Node*> currLevel;
    stack<Node*> nextLevel;
    bool leftToRight=true;
    currLevel.push(root);
    while(!currLevel.empty()){
        Node *temp=currLevel.top();
        currLevel.pop();
        if(temp){
            cout<<temp->data<<" ";

            if(leftToRight){
                if(temp->left){
                    nextLevel.push(temp->left);
                }
                if(temp->right){
                   nextLevel.push(temp->right);
               }
            }
            else{
                if(temp->right){
                    nextLevel.push(temp->right);
                }
                if(temp->left){
                    nextLevel.push(temp->left);
                }
            }
        }
        if(currLevel.empty()){
            leftToRight=!leftToRight;
            swap(currLevel,nextLevel);
        }
    }

}
int main()
{
    Node *root=new Node(12);
    root->left=new Node(9);
    root->right=new Node(15);
    root->left->left=new Node(5);
    root->left->right=new Node(10);
    zigzagTreversal(root);

    return 0;
}
*/
///Are BST Identical
/*
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool isIdentical(Node *root1,Node *root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1=root1->data==root2->data;
        bool cond2=isIdentical(root1->left,root2->left);
        bool cond3=isIdentical(root1->right,root2->right);
        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
    }
}
int main()
{
    Node *root1=new Node(2);
    root1->left=new Node(1);
    root1->right=new Node(3);
    Node *root2=new Node(6);
    root2->left=new Node(3);
    root2->right=new Node(10);
    if(isIdentical(root1,root2)){
        cout<<"BSTs are identical"<<endl;
    }
    else{
        cout<<"BSTs NOT identical"<<endl;
    }


    return 0;
}
*/
///Largest Binary search tree
/*
#include<iostream>
#include<limits>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
struct Info{
    int Size;
    int Max;
    int Min;
    int ans;
    bool isBST;
};
Info largestBSTinBT(Node *root){
    if(root==NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL && root->right==NULL){
        return{1,root->data,root->data,1,true};
    }
    Info leftInfo=largestBSTinBT(root->left);
    Info rightInfo=largestBSTinBT(root->right);
    Info curr;
    curr.Size=(1+leftInfo.Size+rightInfo.Size);
    if(leftInfo.isBST && rightInfo.isBST && leftInfo.Max<root->data && rightInfo.Min>root->data){
        curr.Min=min(leftInfo.Min,min(rightInfo.Min,root->data));
        curr.Max=max(rightInfo.Max,max(leftInfo.Max,root->data));
        curr.ans=curr.Size;
        curr.isBST=true;
        return curr;
    }
    curr.ans=max(leftInfo.ans,rightInfo.ans);
    curr.isBST=false;
    return curr;
}
int main()
{
    Node *root=new Node(5);
    root->left=new Node(3);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    root->right=new Node(6);
    cout<<"Largest BST in BT : "<<largestBSTinBT(root).ans<<endl;

    return 0;
}
*/
///Restore BST
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void Swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void calcPointers(Node *root,Node **first,Node **mid,Node **last,Node **prev){
    if(root==NULL){
        return;
    }
    calcPointers(root->left,first,mid,last,prev);
    if(*prev && root->data<(*prev)->data){
        if(!*first){
            *first=*prev;
            *mid=root;
        }
        else{
            *last=root;
        }
    }
    *prev=root;
    calcPointers(root->right,first,mid,last,prev);
}
void restoreBST(Node *root){
    Node *first,*mid,*last,*prev;
    first=NULL;
    mid=NULL;
    last=NULL;
    prev=NULL;
    calcPointers(root,&first,&mid,&last,&prev);
    ///case 1
    if(first && last){
        Swap(&(first->data),&(last->data));
    }
    ///case 2
    else if(first && mid){
        Swap(&(first->data),&(mid->data));
    }
}
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    Node *root=new Node(6);
    root->left=new Node(9);
    root->right=new Node(3);
    root->left->left=new Node(1);
    root->left->right=new Node(4);
    root->right->right=new Node(13);

    inorder(root);
    cout<<endl;
    restoreBST(root);

    inorder(root);
    cout<<endl;


    return 0;
}





