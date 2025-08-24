///create A binary tree
//#include<bits/stdc++.h>
//using namespace std;
//struct Node{
//    int data;
//    struct Node *left;
//    struct Node *right;
//    Node(int val){
//        data=val;
//        left=NULL;
//        right=NULL;
//    }
//};
//int main()
//{
//    struct Node *root=new Node(1);
//    root->left=new Node(2);
//    root->right=new Node(3);
//    /*
//        1
//       / \
//      2   3
//    */
//    root->left->left=new Node(4);
//    root->left->right=new Node(5);
//    /*
//         1
//        / \
//       2   3
//      / \
//     4   5
//    */
//    return 0;
//}
///Binary tree traversals
//#include<bits/stdc++.h>
//using namespace std;
//struct Node{
//    int data;
//    struct Node *left;
//    struct Node *right;
//    Node(int val){
//        data=val;
//        left=NULL;
//        right=NULL;
//    }
//};
//void preorder(struct Node *root){
//    if(root==NULL){
//        return;
//    }
//    cout<<root->data<<" ";
//    preorder(root->left);
//    preorder(root->right);
//}
//void inorder(struct Node *root){
//    if(root==NULL){
//        return;
//    }
//    inorder(root->left);
//    cout<<root->data<<" ";
//    inorder(root->right);
//}
//void postorder(struct Node *root){
//    if(root==NULL){
//        return;
//    }
//    postorder(root->left);
//    postorder(root->right);
//    cout<<root->data<<" ";
//}
//
//int main()
//{
//    struct Node *root=new Node(1);
//    root->left=new Node(2);
//    root->right=new Node(3);
//    root->left->left=new Node(4);
//    root->left->right=new Node(5);
//    root->right->left=new Node(6);
//    root->right->right=new Node(7);
//    cout<<"Pre Order : ";
//    preorder(root);
//    cout<<endl;
//    cout<<"In Order : ";
//    inorder(root);
//    cout<<endl;
//    cout<<"Post Order : ";
//    postorder(root);
//    cout<<endl;
//    return 0;
//}
///Build Tree from Preorder and Inorder
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
int Search(int inorder[],int start,int End,int curr){
    for(int i=start;i<=End;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
Node *buildTree(int preorder[],int inorder[],int start,int End){
    static int idx=0;
    if(start>End){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    Node *node=new Node(curr);
    if(start==End){
        return node;
    }
    int pos=Search(inorder,start,End,curr);
    node->left=buildTree(preorder,inorder,start,pos-1);
    node->right=buildTree(preorder,inorder,pos+1,End);
    return node;
}
void inorderPrint(Node *root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main()
{
    int preorder[]={1,2};
    int inorder[]={2,1};
    Node *root=buildTree(preorder,inorder,0,1);
    inorderPrint(root);
    return 0;
}*/

///Build Tree from postorder and Inorder
//#include<iostream>
//using namespace std;
//struct Node{
//    int data;
//    Node *left;
//    Node *right;
//    Node(int val){
//        data=val;
//        left=NULL;
//        right=NULL;
//    }
//};
//int Search(int inorder[],int start,int End,int val){
//    for(int i=start;i<=End;i++){
//        if(inorder[i]==val){
//            return i;
//        }
//    }
//    return -1;
//}
//Node *buildTree(int postorder[],int inorder[],int start,int End){
//    static int idx=4;
//    if(start>End){
//        return NULL;
//    }
//    int val=postorder[idx];
//    idx--;
//    Node *curr=new Node(val);
//    if(start==End){
//        return curr;
//    }
//    int pos=Search(inorder,start,End,val);
//    curr->right=buildTree(postorder,inorder,pos+1,End);
//    curr->left=buildTree(postorder,inorder,start,pos-1);
//    return curr;
//}
//void inorderPrint(Node *root){
//    if(root==NULL){
//        return;
//    }
//    inorderPrint(root->left);
//    cout<<root->data<<" ";
//    inorderPrint(root->right);
//}
//int main()
//{
//    int postorder[]={4,2,5,3,1};
//    int inorder[]={4,2,1,5,3};
//    Node *root=buildTree(postorder,inorder,0,4);
//    inorderPrint(root);
//    return 0;
//}

///count all the nodes in a binary tree
//int countNodes(Node *root){
//    if(root==NULL){
//        return 0;
//    }
//    return countNodes(root->left)+countNodes(root->right)+1;
//}
//int sumNodes(Node *root){
//    if(root==NULL){
//        return 0;
//    }
//    return sumNodes(root->left)+sumNodes(root->right)+root->data;
//}
///level order traversal
//void printLevelOrder(Node *root){
//    if(root==NULL){
//        return;
//    }
//    queue<Node*> q;
//    int count;
//    q.push(root);
//    q.push(NULL);
//    while(!q.empty()){
//        Node *node=q.front();
//        q.pop();
//        if(node!=NULL){
//            cout<<node->data<<" ";
//            if(node->left){
//                q.push(node->left);
//            }
//            if(node->right){
//                q.push(node->right);
//            }
//        }
//        else if(!q.empty()){
//            cout<<count++<<endl;
//            q.push(NULL);
//        }
//    }
//}
///Find the sum of nodes at Kth level
//int sumAtK(Node *root,int K){
//    if(root==NULL){
//        return -1;
//    }
//    queue<Node*> q;
//    q.push(root);
//    q.push(NULL);
//    int level=0;
//    int sum=0;
//    while(!q.empty()){
//        Node *node=q.front();
//        q.pop();
//        if(node!=NULL){
//            if(level==K){
//                sum+=node->data;
//            }
//            if(node->left){
//                q.push(node->left);
//            }
//            if(node->right){
//                q.push(node->right);
//            }
//        }
//        else if(!q.empty()){
//            q.push(NULL);
//            level++;
//        }
//    }
//    return sum;
//}
///Height of a binary tree
//int calcHight(Node *root){
//    if(root==NULL){
//        return 0;
//    }
//    int lHight=calcHight(root->left);
//    int rHight=calcHight(root->right);
//    return max(lHight,rHight)+1;
//}
///Diameter of a binary tree
//int calcHight(Node *root){
//    if(root==NULL){
//        return 0;
//    }
//    return max(calcHight(root->left),calcHight(root->right))+1;
//}
//int calcDiameter(Node *root){
//    if(root==NULL){
//        return 0;
//    }
//    int lHight=calcHight(root->left);
//    int rHight=calcHight(root->right);
//    int currHight=lHight+rHight+1;
//    int lDiameter=calcDiameter(root->left);
//    int rDiameter=calcDiameter(root->right);
//    return max(currHight,max(lDiameter,rDiameter));
//}
///or
//int calcDiameter(Node *root,int *height){
//    if(root==NULL){
//        *height=0;
//        return 0;
//    }
//    int lh=0,rh=0;
//    int lDiameter=calcDiameter(root->left,&lh);
//    int rDiameter=calcDiameter(root->right,&rh);
//    int currDiameter=lh+rh+1;
//    *height=max(lh,rh)+1;
//    return max(currDiameter,max(lDiameter,rDiameter));
//}
//int main()
//{
//    Node *root=new Node(1);
//    root->left=new Node(2);
//    root->right=new Node(3);
//    root->left->left=new Node(4);
//    root->left->right=new Node(5);
//    root->right->left=new Node(6);
//    root->right->right=new Node(7);
//    int height=0;
//    cout<<calcDiameter(root,&height)<<endl;
//    return 0;
//}
///Sum Replacement in a binary tree
//void sumReplace(Node *root){
//    if(root==NULL){
//        return;
//    }
//    sumReplace(root->left);
//    sumReplace(root->right);
//    if(root->left!=NULL){
//        root->data+=root->left->data;
//    }
//    if(root->right!=NULL){
//        root->data+=root->right->data;
//    }
//}
///Balanced Height in a binary tree
//int height(Node *root){
//    if(root==NULL){
//        return 0;
//    }
//    return max(height(root->left),height(root->right))+1;
//}
//bool isBalanced(Node *root){
//    if(root==NULL){
//        return true;
//    }
//    if(isBalanced(root->left)==false){
//        return false;
//    }
//    if(isBalanced(root->right)==false){
//        return false;
//    }
//    int lh=height(root->left);
//    int rh=height(root->right);
//    if(abs(lh-rh)<=1){
//        return true;
//    }
//    else{
//        return false;
//    }
//}
///or
//bool isBalanced(Node *root,int *height){
//    if(root==NULL){
//        return true;
//    }
//    int lh=0,rh=0;
//    if(isBalanced(root->left,&lh)==false){
//        return false;
//    }
//    if(isBalanced(root->right,&rh)==false){
//        return false;
//    }
//    *height=max(lh,rh)+1;
//    if(abs(lh-rh)<=1){
//        return true;
//    }
//    else{
//        return false;
//    }
//}
///Right view of a binary Tree
//void rightview(Node *root){
//    if(root==NULL){
//        return;
//    }
//    queue<Node*> q;
//    q.push(root);
//    while(!q.empty()){
//        int n=q.size();
//        for(int i=0;i<n;i++){
//            Node *curr=q.front();
//            q.pop();
//            if(i==n-1){
//                cout<<curr->data<<" ";
//            }
//            if(curr->left!=NULL){
//                q.push(curr->left);
//            }
//            if(curr->right!=NULL){
//                q.push(curr->right);
//            }
//        }
//    }
//}
///Left view of a binary Tree
//void rightview(Node *root){
//    if(root==NULL){
//        return;
//    }
//    queue<Node*> q;
//    q.push(root);
//    while(!q.empty()){
//        int n=q.size();
//        for(int i=1;i<=n;i++){
//            Node *curr=q.front();
//            q.pop();
//            if(i==1){
//                cout<<curr->data<<" ";
//            }
//            if(curr->left!=NULL){
//                q.push(curr->left);
//            }
//            if(curr->right!=NULL){
//                q.push(curr->right);
//            }
//        }
//    }
//}
///Find two distance between 2 nodes of a binary tree
/*
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node* LCA(Node *root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node *left=LCA(root->left,n1,n2);
    Node *right=LCA(root->right,n1,n2);
    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left==NULL && right==NULL){
        return NULL;
    }
    if(left!=NULL){
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);
}
int findDist(Node *root,int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left=findDist(root->left,k,dist+1);
    if(left!=-1){
        return left;
    }
    return findDist(root->right,k,dist+1);
}
int distBtwNodes(Node *root,int n1,int n2){
    Node *lca=LCA(root,n1,n2);
    int d1=findDist(lca,n1,0);
    int d2=findDist(lca,n2,0);
    return d1+d2;
}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->right=new Node(5);

    cout<<distBtwNodes(root,4,5)<<endl;


    return 0;
}
*/
///Flatten a binary tree
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
void flatten(Node *root){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->left!=NULL){
        flatten(root->left);
        Node *temp=root->right;
        root->right=root->left;
        root->left=NULL;
        Node *t=root->right;
        while(t->right!=NULL){
            t=t->right;
        }
        t->right=temp;
    }
    flatten(root->right);
}
void inorderPrint(Node *root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main()
{
    Node *root=new Node(4);
    root->left=new Node(9);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);

    flatten(root);
    inorderPrint(root);
    cout<<endl;


    return 0;
}*/
///Print all Node at distance K
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
///case 1
void printSubtreeNodes(Node *root,int k){
    if(root==NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printSubtreeNodes(root->left,k-1);
    printSubtreeNodes(root->right,k-1);
}
///case 2
int printNodesAtk(Node *root,Node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printSubtreeNodes(root,k);
        return 0;
    }
    int dl=printNodesAtk(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            printSubtreeNodes(root->right,k-dl-2);
        }
        return 1+dl;
    }
    int dr=printNodesAtk(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }
        else{
            printSubtreeNodes(root->left,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(5);
    root->right=new Node(2);
    root->left->left=new Node(6);
    root->left->left->right=new Node(7);
    root->left->left->right->left=new Node(8);
    root->left->left->right->right=new Node(9);
    root->right->left=new Node(3);
    root->right->right=new Node(4);
    printNodesAtk(root,root->left,3);

    return 0;
}
*/
///Lowest Common Ancestor for two nodes
/*
#include<iostream>
#include<vector>
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
bool getPath(Node *root,int key,vector<int> &path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if(getPath(root->left,key,path) || getPath(root->right,key,path)){
        return true;
    }
    path.pop_back();
    return false;
}
int LCA(Node *root,int n1,int n2){
    vector<int> path1,path2;
    if(!getPath(root,n1,path1) || !getPath(root,n2,path2)){
        return -1;
    }
    int pc;
    for(pc=0;pc<path1.size() && path2.size();pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}
///single time traversal
Node *LCA2(Node *root,int n2,int n1){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node *leftLCA=LCA2(root->left,n2,n1);
    Node *rightLCA=LCA2(root->right,n2,n1);
    if(leftLCA && rightLCA){
        return root;
    }
    if(leftLCA!=NULL){
        return leftLCA;
    }
    return rightLCA;
}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);

    int n1=7;
    int n2=6;
    int lca=LCA(root,n1,n2);
    if(lca==-){
        cout<<"LCA doesn't exist"<<endl;
    }
    else{
        cout<<"LCA : "<<lca<<endl;
    }
    Node *lca=LCA2(root,n2,n1);
    if(lca==NULL){
        cout<<"LCA doesn't exist"<<endl;
    }
    else{
        cout<<"LCA : "<<lca->data<<endl;
    }

    return 0;
}
*/
///Maximum path sum in a binary tree
/*
#include<bits/stdc++.h>
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
int maxPathSumUtil(Node *root,int &ans){
    if(root==NULL){
        return 0;
    }
    int left=maxPathSumUtil(root->left,ans);
    int right=maxPathSumUtil(root->right,ans);
    int nodeMax=max(max(root->data,root->data+left+right),
                    max(root->data+left,root->data+right));
    ans=max(ans,nodeMax);
    int singlePathSum=max(root->data,max(root->data+left,root->data+right));
    return singlePathSum;
}
int maxPathSum(Node *root){
    int ans=INT_MIN;
    maxPathSumUtil(root,ans);
    return ans;
}
int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->right=new Node(5);

    cout<<maxPathSum(root)<<endl;

    return 0;
}
*/














