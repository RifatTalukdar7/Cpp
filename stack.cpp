//#include<iostream>
//using namespace std;
//#define n 100
//
//class stack{
//    int *arr;
//    int top;
//
//public:
//    stack(){
//        arr=new int[n];
//        top=-1;
//    }
//    void push(int x){
//        if(top==n-1){
//            cout<<"Stack overflow"<<endl;
//            return;
//        }
//        top++;
//        arr[top]=x;
//    }
//    void pop(){
//        if(top==-1){
//            cout<<"No element to pop"<<endl;
//            return;
//        }
//        top--;
//    }
//    int Top(){
//        if(top==-1){
//            cout<<"No top element to pop"<<endl;
//            return -1;
//        }
//        return arr[top];
//    }
//    bool empty(){
//        return top==-1;
//    }
//
//};
//int main()
//{
//    stack st;
//    st.push(1);
//    st.push(2);
//    st.push(3);
//    cout<<st.Top()<<endl;
//    st.pop();
//    cout<<st.Top()<<endl;
//    st.pop();
//    st.pop();
//    st.pop();
//    cout<<st.empty()<<endl;
//
//    return 0;
//}
///Reversesentence
//#include<iostream>
//#include<stack>
//using namespace std;
//void reverseSentence(string s)
//{
//    stack<string> st;
//    for(int i=0;i<s.length();i++){
//        string word="";
//        while(s[i]!=' ' && i<s.length()){
//            word+=s[i];
//            i++;
//        }
//        st.push(word);
//    }
//    while(!st.empty()){
//        cout<<st.top()<<" ";
//        st.pop();
//    }
//    cout<<endl;
//
//}
//int main()
//{
//    string s="Hey, how are you doing?";
//    reverseSentence(s);
//    return 0;
//}
///reverse stack
//#include<iostream>
//#include<stack>
//using namespace std;
//
//void insertAtBottom(stack<int> &st,int ele){
//    if(st.empty()){
//        st.push(ele);
//        return;
//    }
//    int topele=st.top();
//    st.pop();
//    insertAtBottom(st,ele);
//    st.push(topele);
//
//}
//void revers(stack<int> &st){
//    if(st.empty()){
//        return;
//    }
//    int ele=st.top();
//    st.pop();
///    revers(st);
//    insertAtBottom(st,ele);
//
//}
//int main()
//{
//    stack<int> st;
//    st.push(1);
//    st.push(2);
//    st.push(3);
//    st.push(4);
//
//    revers(st);
//    while(!st.empty()){
//        cout<<st.top()<<endl;
//        st.pop();
//    }
//
//    return 0;
//}
///Prefix Evaluation
//#include<iostream>
//#include<stack>
//#include<math.h>
//using namespace std;
//int prefixEvaluation(string s){
//    stack<int> st;
//    for(int i=s.length()-1;i>=0;i--){
//        if(s[i]>='0' && s[i]<='9'){
//            st.push(s[i]-'0');
//        }
//        else{
//            int op1=st.top();
//            st.pop();
//            int op2=st.top();
//            st.pop();
//            switch(s[i]){
//            case '+':
//                st.push(op1+op2);
//                break;
//            case '-':
//                st.push(op1-op2);
//                break;
//            case '*':
//                st.push(op1*op2);
//                break;
//            case '/':
//                st.push(op1/op2);
//                break;
//            case '^':
//                st.push(pow(op1,op2));
//                break;
//            }
//        }
//    }
//    return st.top();
//}
//int main()
//{
//    cout<<prefixEvaluation("-+7*45+20");
//    return 0;
//}
///Postfix Evaluation
//#include<iostream>
//#include<stack>
//#include<math.h>
//using namespace std;
//int postfixEvaluation(string s){
//    stack<int> st;
//    for(int i=0;i<s.length();i++){
//        if(s[i]>='0' && s[i]<='9'){
//            st.push(s[i]-'0');
//        }
//        else{
//            int op2=st.top();
//            st.pop();
//            int op1=st.top();
//            st.pop();
//            switch(s[i]){
//            case '+':
//                st.push(op1+op2);
//                break;
//            case '-':
//                st.push(op1-op2);
//                break;
//            case '*':
//                st.push(op1*op2);
//                break;
//            case '/':
//                st.push(op1/op2);
//                break;
//            case '^':
//                st.push(pow(op1,op2));
//                break;
//            }
//        }
//    }
//    return st.top();
//}
//int main()
//{
//    cout<<postfixEvaluation("46+2/5*7+");
//    return 0;
//}
///Infix to Postfix  abc/-ak/l-*
/*
#include<iostream>
#include<stack>
using namespace std;
int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixtoPostfix(string s){
    stack<char> st;
    string res;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top())>=prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}
int main()
{
    cout<<infixtoPostfix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}
*/
///infix to prefix  *-a/bc-/akl
//#include<iostream>
//#include<stack>
//#include<algorithm>
//using namespace std;
//int prec(char c){
//    if(c=='^'){
//        return 3;
//    }
//    else if(c=='*' || c=='/'){
//        return 2;
//    }
//    else if(c=='+' || c=='-'){
//        return 1;
//    }
//    else{
//        return -1;
//    }
//}
//string infixtoprefix(string s){
//    reverse(s.begin(),s.end());
//    stack<char> st;
//    string res;
//    for(int i=0;i<s.length();i++){
//        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
//            res+=s[i];
//        }
//        else if(s[i]==')'){
//            st.push(s[i]);
//        }
//        else if(s[i]=='('){
//            while(!st.empty() && st.top()!=')'){
//                res+=st.top();
//                st.pop();
//            }
//            if(!st.empty()){
//                st.pop();
//            }
//        }
//        else{
//            while(!st.empty() && prec(st.top())>=prec(s[i])){
//                res+=st.top();
//                st.pop();
//            }
//            st.push(s[i]);
//        }
//    }
//    while(!st.empty()){
//        res+=st.top();
//        st.pop();
//    }
//    reverse(res.begin(),res.end());
//    return res;
//}
//int main()
//{
//    cout<<infixtoprefix("(a-b/c)*(a/k-l)")<<endl;
//    return 0;
//}
///Balance Parenthesis
//#include<bits/stdc++.h>
//using namespace std;
//bool isValid(string s){
//    int n=s.size();
//    stack<char> st;
//    bool ans=true;
//    for(int i=0;i<n;i++){
//        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//            st.push(s[i]);
//        }
//        else if(s[i]==')'){
//            if(!st.empty() && st.top()=='('){
//                st.pop();
//            }
//            else{
//                ans=false;
//                break;
//            }
//        }
//        else if(s[i]=='}'){
//            if(!st.empty() && st.top()=='{'){
//                st.pop();
//            }
//            else{
//                ans=false;
//                break;
//            }
//        }
//        else if(s[i]==']'){
//            if(!st.empty() && st.top()=='['){
//                st.pop();
//            }
//            else{
//                ans=false;
//                break;
//            }
//        }
//    }
//    if(!st.empty()){
//        return false;
//    }
//    return ans;
//
//}
//int main()
//{
//    string s ="{([])}";
//    if(isValid(s)){
//        cout<<"Valid String "<<endl;
//    }
//    else {
//        cout<<"Invalid String"<<endl;
//    }
//
//    return 0;
//}
///Stack using queue Approach 1
//#include<iostream>
//#include<queue>
//using namespace std;
//class Stack{
//    int N;
//    queue<int> q1;
//    queue<int> q2;
//public:
//    Stack(){
//        N=0;
//    }
//    void push(int x){
//        q2.push(x);
//        N++;
//        while(!q1.empty()){
//            q2.push(q1.front());
//            q1.pop();
//        }
//        queue<int> temp=q1;
//        q1=q2;
//        q2=temp;
//    }
//    void pop(){
//        q1.pop();
//        N--;
//    }
//    int Top(){
//        return q1.front();
//    }
//    int size(){
//        return N;
//    }
//};
//int main()
//{
//    Stack st;
//    st.push(1);
//    st.push(2);
//    st.push(3);
//    st.push(4);
//    cout<<st.Top()<<endl;
//    st.pop();
//    cout<<st.Top()<<endl;
//    st.pop();
//    cout<<st.Top()<<endl;
//    st.pop();
//    cout<<st.Top()<<endl;
//    st.pop();
//    cout<<st.size()<<endl;
//
//    return 0;
//}
///Stack using queue Approach 2
//#include<iostream>
//#include<queue>
//using namespace std;
//class Stack{
//    int N;
//    queue<int> q1;
//    queue<int> q2;
//public:
//    Stack(){
//        N=0;
//    }
//    void push(int x){
//        q1.push(x);
//        N++;
//    }
//    void pop(){
//        if(q1.empty()){
//            return;
//        }
//        while(q1.size() !=1){
//            q2.push(q1.front());
//            q1.pop();
//        }
//        q1.pop();
//        N--;
//        queue <int> temp=q1;
//        q1=q2;
//        q2=temp;
//    }
//    int Top(){
//        if(q1.empty()){
//            return -1;
//        }
//        while(q1.size() !=1){
//            q2.push(q1.front());
//            q1.pop();
//        }
//        int ans=q1.front();
//        q2.push(ans);
//        queue <int> temp=q1;
//        q1=q2;
//        q2=temp;
//        return ans;
//    }
//    int size(){
//        return N;
//    }
//};
//int main()
//{
//    Stack st;
//    st.push(1);
//    st.push(2);
//    st.push(3);
//    st.push(4);
//    cout<<st.Top()<<endl;
//    st.pop();
//    cout<<st.Top()<<endl;
//    st.pop();
//    cout<<st.Top()<<endl;
//    st.pop();
//    cout<<st.Top()<<endl;
//    st.pop();
//    cout<<st.size()<<endl;
//
//    return 0;
//}
///push at the bottom of stack
//#include<iostream>
//#include<stack>
//using namespace std;
//void pushAtBottom(int n,stack<int> &s){
//    if(s.empty()){
//        s.push(n);
//        return;
//    }
//    int Top=s.top();
//    s.pop();
//    pushAtBottom(n,s);
//    s.push(Top);
//}
//int main()
//{
//    stack<int> st;
//    st.push(1);
//    st.push(2);
//    st.push(3);
//    pushAtBottom(4,st);
//    while(!st.empty()){
//        cout<<st.top()<<endl;
//        st.pop();
//    }
//    return 0;
//}
///Trapping RainWater
/*
#include<bits/stdc++.h>
using namespace std;
int rain_water(vector<int> &a){
    stack<int> st;
    int n=a.size(),ans=0;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]<a[i]){
            int cur=st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int diff=i-st.top()-1;
            ans+=(min(a[st.top()],a[i])-a[cur])*diff;
        }
        st.push(i);
    }
    return ans;
}
int main()
{
    vector<int> a={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water(a);


    return 0;
}
*/
///Redundant Parantheses
/*
((a+b))
1
(a+b)
0
(a+(a+b))
0
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    bool ans=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                ans=true;
            }
            while(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                st.pop();
            }
            st.pop();
        }
    }
    cout<<ans<<endl;

    return 0;
}
*/
///Stock span Problem
//1 1 1 2 1 4 6
/*
#include<bits/stdc++.h>
using namespace std;
vector<int> stockspan(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int>> s;
    for(auto price:prices){
        int days=1;
        while(!s.empty() && s.top().first<=price){
            days+=s.top().second;
            s.pop();
        }
        s.push({price,days});
        ans.push_back(days);
    }
    return ans;
}
int main()
{
    vector<int> a={100,80,60,70,60,75,85};
    vector<int> res=stockspan(a);
    for(auto i:res){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}
*/
