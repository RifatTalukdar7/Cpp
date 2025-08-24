/*
#include<bits/stdc++.h>
using namespace std;
class Trie{
public:
    class Node{
    public:
        bool End;
        Node *next[26];
        Node(){
            End=false;
            for(int i=0;i<26;i++){
                next[i]=NULL;
            }
        }
    };
    Node *trie;
    Trie(){
        trie=new Node();
    }
    void Insert(string word){
        int i=0;
        Node *it=trie;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL){
                it->next[word[i]-'a']=new Node();
            }
            it=it->next[word[i]-'a'];
            i++;
        }
        it->End=true;
    }
    bool Search(string word){
        int i=0;
        Node *it=trie;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL)
                return false;
            it=it->next[word[i]-'a'];
            i++;
        }
        return it->End;
    }
};
int main()
{
    Trie *myTrie=new Trie();
    vector<string> words={"ayush","daasi"};
    for(auto w:words){
        myTrie->Insert(w);
    }
    if(myTrie->Search("madhav")){
        cout<<"Madhav found"<<endl;
    }
    else{
        cout<<"Madhav does not exists"<<endl;
    }
    if(myTrie->Search("ayush")){
        cout<<"Ayush found"<<endl;
    }
    else{
        cout<<"Ayush does not exists"<<endl;
    }

    return 0;
}*/
///Maximum XOR of Two Numbers in an Array
/*
#include<bits/stdc++.h>
using namespace std;
class TrieNode{
public:
    TrieNode *next[2];
    TrieNode(){
        next[0]=NULL;
        next[1]=NULL;
    }
};
TrieNode* buildtrie(vector<int> &a){
    TrieNode* root=new TrieNode();
    int n=a.size();
    for(int i=0;i<n;i++){
        int num=a[i];
        TrieNode *cur=root;
        for(int i=31;i>=0;i--){
            int bit=(num>>i) & 1;

            if(cur->next[bit]==NULL)
                cur->next[bit]=new TrieNode();
            cur=cur->next[bit];
        }
    }
    return root;
}
int helper(TrieNode* root,vector<int> &a){
    int res=0;
    for(int i=0;i<a.size();i++){
        int num=a[i];
        TrieNode *it=root;
        int cur_max=0;
        for(int i=31;i>=0;i--){
            int bit=((num>>i) & 1)?0:1;
            if(it->next[bit]){
                cur_max<<=1;
                cur_max|=1;
                it=it->next[bit];
            }
            else{
                cur_max<<=1;
                cur_max|=0;
                it=it->next[bit^1];
            }
        }
        res=max(res,cur_max);
    }
    return res;
}
int32_t main()
{
    vector<int> a={3,10,5,15,2};
    TrieNode* root=buildtrie(a);
    int ans=helper(root,a);
    cout<<ans<<endl;

    return 0;
}*/
///Trie Bash
/*
#include<bits/stdc++.h>
using namespace std;
int int_size=32;
class node{
public:
    node* next[2];
    node(){
        for(int i=0;i<2;i++){
            next[i]=NULL;
        }
    }
};
node *trie;
void Insert(int num){
    node *it=trie;
    for(int i=int_size-1;i>=0;i--){
        int cur_bit=(num>>i)&1;
        if(!it->next[cur_bit])
            it->next[cur_bit]=new node();
        it=it->next[cur_bit];
    }
}
int query(int num){
    node *it=trie;
    int ans=0;
    for(int i=int_size-1;i>=0;i--){
        int cur_bit=(num>>i)&1;
        int opposite=cur_bit^1;
        if(it->next[opposite]){
            it=it->next[opposite];
            ans |=1<<i;
        }
        else{
            it=it->next[opposite^1];
        }
    }
    return ans;
}
int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    trie=new node();
    Insert(0);
    vector<int> rmax(n+1,0);
    int R=0;
    for(int i=n-1;i>=0;i--){
        R=R^a[i];
        if(i!=n-1){
            rmax[i]=max(rmax[i+1],query(R));
            Insert(R);
        }
        else{
            rmax[i]=query(R);
            Insert(R);
        }
    }
    free(trie);
    trie=new node();
    Insert(0);
    int ans=0;
    int L=0;
    for(int i=0;i<n;i++){
        L=L^a[i];
        ans=max(ans,rmax[i+1]+query(L));
        Insert(L);
    }
    cout<<ans;

    return 0;
}*/
///Digital Dictionary
/*
#include"bits/stdc++.h"
using namespace std;
class node{
public:
    node *next[26];
    bool End;
    node(){
        for(int i=0;i<26;i++){
            next[i]=NULL;
        }
        End=false;
    }
};
class Trie{
private:
    node *root;
public:
    Trie()
    {
        root=new node();
    }
    void Insert(string &s){
        node *it=root;
        for(auto c:s){
            if(!it->next[c-'a']){
                it->next[c-'a']=new node();
            }
            it=it->next[c-'a'];
        }
        it->End=true;
    }
    void Find(string &s){
        node *it=root;
        for(auto c:s){
            if(!it->next[c-'a']){
                cout<<"No suggestions"<<endl;
                Insert(s);
                return;
            }
            it=it->next[c-'a'];
        }
        vector<string> res;
        printall(it,s,res,"");
        for(auto c:res){
            cout<<s<<c<<endl;
        }
    }
    void printall(node *it,string &s,vector<string> &res,string cur){
        if(it==NULL){
            return;
        }
        if(it->End){
            res.push_back(cur);
        }
        for(int i=0;i<26;i++){
            if(it->next[i]){
                printall(it->next[i],s,res,cur+char('a'+i));
            }
        }
    }
};
int32_t main()
{
    Trie t;
    int n;cin>>n;
    vector<string> a(n);
    for(auto &i:a){
        cin>>i;
        t.Insert(i);
    }
    int q;cin>>q;
    while(q--){
        string s;cin>>s;
        t.Find(s);
    }

    return 0;
}*/
///java
/*
#include<iostream>
using namespace std;
class Node{
    public:
    Node *children[26];
    bool eow;
    Node(){
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        eow=false;
    }
};
Node *root=new Node();
void Insert(string word){
    Node *curr=root;
    for(int i=0;i<word.length();i++){
        int idx=word[i]-'a';
        if(curr->children[idx]==NULL){
            curr->children[idx]=new Node();
        }
        if(i==word.length()-1){
            curr->children[idx]->eow=true;
        }
        curr=curr->children[idx];
    }
}
bool Search(string key){
    Node *curr=root;
    for(int i=0;i<key.length();i++){
        int idx=key[i]-'a';
        if(curr->children[idx]==NULL){
            return false;
        }
        if(i==key.length()-1 && curr->children[idx]->eow==false){
            return false;
        }
        curr=curr->children[idx];
    }
    return true;
}
int main()
{
    string words[]={"the","a","there","their","any"};
    for(int i=0;i<sizeof(words)/sizeof(words[0]);i++){
        Insert(words[i]);
    }
    cout<<Search("their")<<endl;
    cout<<Search("thor")<<endl;
    cout<<Search("an")<<endl;

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Node{
public:
    Node *children[26];
    bool eow;
    Node(){
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        eow=false;
    }
};
Node *root=new Node();
void Insert(string s){
    Node *curr=root;
    for(int i=0;i<s.size();i++){
        int idx=s[i]-'a';
        if(curr->children[idx]==NULL){
            curr->children[idx]=new Node();
        }
        if(i==s.size()-1){
             curr->children[idx]->eow=true;
        }
        curr=curr->children[idx];
    }
}
bool Search(string s){
    Node *curr=root;
    for(int i=0;i<s.size();i++){
        int idx=s[i]-'a';
        if(curr->children[idx]==NULL){
            return false;
        }
        if(i==s.size()-1 && curr->children[idx]->eow==false){
            return false;
        }
        curr=curr->children[idx];
    }
    return true;
}
bool wordBreak(string key){
    if(key.size()==0) return true;
    for(int i=1;i<=key.size();i++){
        string firstPart=key.substr(0,i);
        string secPart=key.substr(i);
        if(Search(firstPart) && wordBreak(secPart)){
            return true;
        }
    }
    return false;
}
bool startWith(string prefix){
    Node *curr=root;
    for(int i=0;i<prefix.size();i++){
        int idx=prefix[i]-'a';
        if(curr->children[idx]==NULL){
            return false;
        }
        curr=curr->children[idx];
    }
    return true;
}
int main()
{
    ////wordBreak
    string words[]={"i","like","sam","samsung","mobile"};
    string key="ilikesamsung";
    for(int i=0;i<sizeof(words)/sizeof(words[0]);i++){
        Insert(words[i]);
    }
    cout<<wordBreak(key)<<endl;
    ///startWith
    string words[]={"apple","app","mango","man","women"};
    string prefix="moon";
    for(int i=0;i<sizeof(words)/sizeof(words[0]);i++){
        Insert(words[i]);
    }
    cout<<startWith(prefix)<<endl;

    return 0;
}
*/
///count Unique substring
/*
#include<iostream>
using namespace std;
class Node{
public:
    Node *children[26];
    bool eow;
    Node(){
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        eow=false;
    }
};
Node *root=new Node();
void Insert(string s){
    Node *curr=root;
    for(int i=0;i<s.size();i++){
        int idx=s[i]-'a';
        if(curr->children[idx]==NULL){
            curr->children[idx]=new Node();
        }
        if(i==s.size()-1){
             curr->children[idx]->eow=true;
        }
        curr=curr->children[idx];
    }
}
bool Search(string s){
    Node *curr=root;
    for(int i=0;i<s.size();i++){
        int idx=s[i]-'a';
        if(curr->children[idx]==NULL){
            return false;
        }
        if(i==s.size()-1 && curr->children[idx]->eow==false){
            return false;
        }
        curr=curr->children[idx];
    }
    return true;
}
int countNode(Node *root){
    if(root==NULL) return 0;
    int count=0;
    for(int i=0;i<26;i++){
        if(root->children[i]!=NULL){
            count+=countNode(root->children[i]);
        }
    }
    return count+1;
}
int main()
{
    string str="ababa";
    for(int i=0;i<str.size();i++){
        string suffix=str.substr(i);
        Insert(suffix);
    }
    cout<<countNode(root)<<endl;

    return 0;
}
*/
///Longest Word
/*
#include<iostream>
using namespace std;
class Node{
public:
    Node* children[26];
    bool e;
    Node(){
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        e=false;
    }
};
Node *root=new Node();
void Insert(string s){
    Node *curr=root;
    for(int i=0;i<s.size();i++){
        int idx=s[i]-'a';
        if(curr->children[idx]==NULL){
            curr->children[idx]=new Node();
        }
        if(i==s.size()-1){
            curr->children[idx]->e=true;
        }
        curr=curr->children[idx];
    }
}
bool Search(string s){
    Node *curr=root;
    for(int i=0;i<s.size();i++){
        int idx=s[i]-'a';
        if(curr->children[idx]==NULL){
            return false;
        }
        else if(i==s.size()-1 && curr->children[idx]->e==false){
            return false;
        }
        curr=curr->children[idx];
    }
    return true;
}
string ans="";
void longestWord(Node *root,string temp){
    if(root==NULL) return;
    for(int i=0;i<26;i++){
        if(root->children[i]!=NULL && root->children[i]->e==true){
            temp+=(char)i+'a';
            if(temp.size()>ans.size()){
                ans=temp;
            }
            longestWord(root->children[i],temp);
            temp.pop_back();
        }
    }
}
int main()
{
    string words[]={"a","banana","app","appl","b","ap","ba","apply","ban","bana","banan"};
    for(int i=0;i<sizeof(words)/sizeof(words[0]);i++){
        Insert(words[i]);
    }
    longestWord(root,"");
    cout<<ans<<endl;


    return 0;
}*/



