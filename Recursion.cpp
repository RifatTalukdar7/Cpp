///sum
/*
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum=sum(n-1);
    return n+prevSum;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;

    return 0;
}*/
///calculate n raised to power of p
/*
#include<iostream>
using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPower=power(n,p-1);
    return n*prevPower;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;

    return 0;
}*/
///X^n(logn)
/*
#include<bits/stdc++.h>
using namespace std;
int p(int x,int n){
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    if(n%2==0){
        return p(x,n/2)*p(x,n/2);
    }
    else{
        return p(x,n/2)*p(x,n/2)*x;
    }
}
int main()
{
    int n,x;cin>>x>>n;
    cout<<p(x,n);

    return 0;
}
*/
///find the factorial of a number
/*
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;

    return 0;
}*/
///Print the fibonacci sequence till nth term
/*
#include<bits/stdc++.h>
using namespace std;
void p(int n,int a,int b){
    if(n==0){
        return;
    }
    int c=a+b;
    cout<<c<<" ";
    p(n-1,b,c);
}
int main()
{
    int n,a(0),b{1};cin>>n;
    cout<<a<<" "<<b<<" ";
    p(n-2,a,b);

    return 0;
}*/
///check if an array is sorted or not
/*
#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restArray=sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<sorted(arr,5);

    return 0;
}
*/
///Find the first and last occurence of a number in an array
/*
#include<bits/stdc++.h>
using namespace std;
static int first=-1;
static int last=-1;
void findOccurance(string str,int idx,char element){
    if(idx==str.length()){
        cout<<first<<endl;
        cout<<last<<endl;
        return;
    }
    char currChar=str[idx];
    if(currChar==element){
        if(first==-1){
            first=idx;
        }
        else{
            last=idx;
        }
    }
    findOccurance(str,idx+1,element);
}
int main()
{
    string str="abaacdaefaah";
    findOccurance(str,0,'a');


    return 0;
}
*/
///Reverse a string using recursion
//#include<iostream>
//using namespace std;
//void revese(string s){
//    if(s.length()==0){
//        return;
//    }
//    string ros=s.substr(1);
//    revese(ros);
//    cout<<s[0];
//}
//int main()
//{
//    revese("binod");
//
//    return 0;
//}
///pi replace pi with 3.14 in string
//#include<iostream>
//using namespace std;
//void Replace(string s){
//    if(s.length()==0){
//        return;
//    }
//    if(s[0]=='p' && s[1]=='i'){
//        cout<<"3.14";
//        Replace(s.substr(2));
//    }
//    else{
//        cout<<s[0];
//        Replace(s.substr(1));
//    }
//}
//int main()
//{
//    Replace("pippppiiiipi");
//
//    return 0;
//}
/// Tower of Hanoi
/*
#include<bits/stdc++.h>
using namespace std;
void tower(int n,string src,string helper,string dest){
    if(n==1){
        cout<<"transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    tower(n-1,src,dest,helper);
    cout<<"transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    tower(n-1,helper,src,dest);
}
int main()
{
    int n=3;
    tower(n,"A","B","C");


    return 0;
}*/
///Remove all duplicate from the string
/*
#include<iostream>
using namespace std;
string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=removeDup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main()
{
    cout<<removeDup("aaaabbbeeecdddd")<<endl;

    return 0;
}*/
///or
/*
#include<bits/stdc++.h>
using namespace std;
vector<bool> m(26);
void removeDuplicates(string str,int idx,string newString){
    if(idx==str.length()){
        cout<<newString<<endl;
        return;
    }
    char currChar=str[idx];
    if(m[currChar-'a']==true){
        removeDuplicates(str,idx+1,newString);
    }
    else{
        newString+=currChar;
        m[currChar-'a']=true;
        removeDuplicates(str,idx+1,newString);
    }
}
int main()
{
    string str="abbccda";
    removeDuplicates(str,0,"");


    return 0;
}
*/
///Move all x to end of the string
//#include<iostream>
//using namespace std;
//string moveallX(string s){
//    if(s.length()==0){
//        return "";
//    }
//    char ch=s[0];
//    string ans=moveallX(s.substr(1));
//    if(ch=='x'){
//        return ans+ch;
//    }
//    return (ch+ans);
//}
//int main()
//{
//    cout<<moveallX("axxbdxcefxhix")<<endl;
//
//    return 0;
//}
///or
/*
#include<bits/stdc++.h>
using namespace std;
void moveAllX(string str,int idx,int count,string newString){
    if(idx==str.length()){
        for(int i=0;i<count;i++){
            newString+='x';
        }
        cout<<newString<<endl;
        return;
    }
    char currChar=str[idx];
    if(currChar=='x'){
        count++;
        moveAllX(str,idx+1,count,newString);
    }
    else{
        newString+=currChar;
        moveAllX(str,idx+1,count,newString);
    }
}
int main()
{
    string str="axbcxxd";
    moveAllX(str,0,0,"");


    return 0;
}
*/
///Generated all substrings of a string
/*
#include<iostream>
using namespace std;
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,ans+ch);
    subseq(ros,ans);

}
int main()
{
    subseq("ABC","");

    return 0;
}*/
///or
/*#include<bits/stdc++.h>
using namespace std;
void subsequence(string str,int idx,string newString){
    if(idx==str.size()){
        cout<<newString<<endl;
        return;
    }
    char currChar=str[idx];
    subsequence(str,idx+1,newString+currChar);
    subsequence(str,idx+1,newString);
}
int main()
{
    string str="ABC";
    subsequence(str,0,"");


    return 0;
}
*/
///Or
/*
#include<bits/stdc++.h>
using namespace std;
set<string> Set;
void subsequences(string str,int idx,string newString){
    if(idx==str.length()){
        Set.insert(newString);
        return;
    }
    char currChar=str[idx];
    subsequences(str,idx+1,newString+currChar);
    subsequences(str,idx+1,newString);
}
int main()
{
    string str="aab";
    subsequences(str,0,"");
    for(auto i:Set)
        cout<<i<<endl;

    return 0;
}
*/
///generate substrings with ASCII number
/*
#include<iostream>
using namespace std;
void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code =ch;
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(code));
}
int main()
{
    subseq("AB","");


    return 0;
}*/
///print all possible words from phone digits
/*#include<iostream>
using namespace std;
string keypadArr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadArr[ch-'0'];
    string ros=s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}
int main()
{
    keypad("23","");


    return 0;
}*/
///or
/*
#include<bits/stdc++.h>
using namespace std;
string keypad[]={".","abc","def","ghi","jkl","mno","pqrs","tu","wx","yz"};
void printComb(string str,int idx,string combination){
    if(idx==str.size()){
        cout<<combination<<endl;
        return;
    }
    char currChar=str[idx];
    string mapping=keypad[currChar-'0'];
    for(int i=0;i<mapping.size();i++){
        printComb(str,idx+1,combination+mapping[i]);
    }
}
int main()
{
    string str="23";
    printComb(str,0,"");


    return 0;
}
*/
///Permutation
/*
#include"bits/stdc++.h"
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> &a,int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}
int32_t main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    permute(a,0);
    for(auto v : ans){
        for(auto i :v)
            cout<<i<<" ";
        cout<<"\n";
    }

    return 0;
}*/
///Permutation STL
/*#include"bits/stdc++.h"
using namespace std;
vector<vector<int>> ans;
int32_t main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
    for(auto v : ans){
        for(auto i :v)
            cout<<i<<" ";
        cout<<"\n";
    }

    return 0;
}*/
///Permutation II (remove duplicate)
/*
#include"bits/stdc++.h"
using namespace std;
void helper(vector<int> a,vector<vector<int>> &ans,int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        if(i!=idx && a[i]==a[idx])
            continue;
        swap(a[i],a[idx]);
        helper(a,ans,idx+1);
    }
}
vector<vector<int>> permute(vector<int> nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    helper(nums,ans,0);
    return ans;
}
int32_t main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    vector<vector<int>>res=permute(a);
    for(auto v : res){
        for(auto i :v)
            cout<<i<<" ";
        cout<<"\n";
    }

    return 0;
}*/
///Permutation
/*
#include<iostream>
using namespace std;
void permutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }
}
int main()
{
    permutation("ABC","");


    return 0;
}*/
/// Count the number of paths possible from start point to end point in gameboard
/*
#include<iostream>
using namespace std;
int countPath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=countPath(s+i,e);
    }
    return count;
}
int main()
{
    cout<<countPath(0,3)<<endl;

    return 0;
}*/
///count the number of paths possible in a maze
/*
#include<iostream>
using namespace std;
int countPathMaze(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return countPathMaze(n,i+1,j)+countPathMaze(n,i,j+1);
}
int main()
{
    cout<<countPathMaze(3,0,0)<<endl;



    return 0;
}*/
///Or
/*
#include<bits/stdc++.h>
using namespace std;
int countPath(int i,int j,int n,int m){
    if(i==n || j==m){
        return 0;
    }
    if(i==n-1 && j==m-1){
        return 1;
    }
    int downPath=countPath(i+1,j,n,m);
    int rightPath=countPath(i,j+1,n,m);
    return downPath+rightPath;
}
int main()
{
    int n=3,m=3;
    cout<<countPath(0,0,n,m)<<endl;
    return 0;
}*/
///Tiling Problem
/*
#include<iostream>
using namespace std;
int tilingWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingWays(n-1)+tilingWays(n-2);
}
int main()
{
    cout<<tilingWays(4)<<endl;


    return 0;
}*/
///or
/*
#include<iostream>
using namespace std;
int placeTiles(int n,int m)
{
    if(n==m) return 2;
    if(n<m) return 1;
    int vertPlacements=placeTiles(n-m,m);
    int horPlacements=placeTiles(n-1,m);
    return vertPlacements+horPlacements;
}
int main()
{
    int n=7,m=2;
    cout<<placeTiles(n,m)<<endl;

    return 0;
}
*/
///Friends Pairing problem
/*
#include<iostream>
using namespace std;
int friendsPairing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return friendsPairing(n-1)+friendsPairing(n-2)*(n-1);
}
int main()
{
    cout<<friendsPairing(4)<<endl;


    return 0;
}*/
///print all the subset of a set of first n natural numbers
/*
#include<bits/stdc++.h>
using namespace std;
void printSubset(vector<int> &subset){
    for(int i=0;i<subset.size();i++){
        cout<<subset[i]<<" ";
    }
    cout<<endl;
}
void findSubsets(int n,vector<int> &subset){
    if(n==0){
        printSubset(subset);
        return;
    }
    subset.push_back(n);
    findSubsets(n-1,subset);
    subset.pop_back();
    findSubsets(n-1,subset);
}
int main()
{
    int n=3;
    vector<int> subset;
    findSubsets(n,subset);

    return 0;
}
*/












