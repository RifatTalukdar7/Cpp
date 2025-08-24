///Max Sum Subarray
/*
#include<iostream>
using namespace std;
void maxSubarraySum(int arr[],int n,int k,int x){
    int sum=0,ans=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    if(sum<x){
        ans=sum;
    }
    for(int i=k;i<n;i++){
        sum-=arr[i-k];
        sum+=arr[i];
        if(sum<x){
            ans=max(ans,sum);
        }
    }
    cout<<ans<<" is the max subarray sum (<x)"<<endl;
}
int main()
{
    int arr[]={7,5,4,6,8,9};
    int k=3;
    int x=20;
    int n=6;
    maxSubarraySum(arr,n,k,x);

    return 0;
}*/
///Minimum Subarray size
/*
#include<iostream>
using namespace std;
int smallestSubarrayWithSum(int arr[],int n,int x){
    int sum=0,minLength=n+1,start=0,End=0;
    while(End<n){
        while(sum<=x && End<n){
            sum+=arr[End++];
        }
        while(sum>x && start<n){
            if(End-start < minLength){
                minLength=End-start;
            }
            sum-=arr[start++];
        }
    }
    return minLength;
}
int main()
{
    int arr[]={1,4,45,6,10,19};
    int x=51;
    int n=6;
    int minLength=smallestSubarrayWithSum(arr,n,x);
    if(minLength==n+1){
        cout<<"No such Subarray exists"<<endl;
    }
    else{
        cout<<"smallest length subarray is : "<<minLength<<endl;
    }

    return 0;
}*/
///Form Number Divisible by 3
/*
#include<iostream>
#include<vector>
using namespace std;
void computeNumberFormSubarray(vector<int> arr,int k){
    pair<int,int> ans;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    bool found=false;
    if(sum%3==0){
        ans=make_pair(0,k-1);
        found=true;
    }
    for(int j=k;j<arr.size();j++){
        if(found){
            break;
        }
        sum=sum+arr[j]-arr[j-k];
        if(sum%3==0){
            ans=make_pair(j-k+1,j);
            found=true;
        }
    }
    if(!found){
        ans=make_pair(-1,0);
    }
    if(ans.first==-1){
        cout<<"no such subarray exists"<<endl;
    }
    else{
        for(int i=ans.first;i<=ans.second;i++){
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    vector<int> arr={84,23,45,12,56,82};
    int k=3;

    computeNumberFormSubarray(arr,k);

    return 0;
}*/
///Subarray with Palindromic Concatenation
/*
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isPalindrom(int n){
    int temp=n,number=0;
    while(temp>0){
        number=number*10+temp%10;
        temp=temp/10;
    }
    if(number==n){
        return true;
    }
    else{
        return false;
    }
}
int findPalindromicSubarray(vector<int> arr,int k){
    int num=0;
    for(int i=0;i<k;i++){
        num=num*10+arr[i];
    }
    if(isPalindrom(num)){
        return 0;
    }
    for(int j=k;j<arr.size();j++){
        num=(num%(int)pow(10,k-1))*10+arr[j];
        if(isPalindrom(num)){
            return j-k+1;
        }
    }
    return -1;
}
int main()
{

    vector<int> arr={2,3,5,1,1,5};
    int k=4;
    int ans=findPalindromicSubarray(arr,k);
    if(ans==-1){
        cout<<"palindromic subarray doesn't exist"<<endl;
    }
    else{
        for(int i=ans;i<ans+k;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}*/
///Perfect Numbers in Subarray
/*
#include<iostream>
#include<cmath>
using namespace std;
bool isNumberPerfect(int n){
    int sum=1;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            if(i==n/i){
                sum+=i;
            }
            else{
                sum+=i+n/i;
            }
        }
    }
    if(sum==n && n!=1){
        return true;
    }
    return false;
}
int maxSum(int arr[],int n,int k){
    if(n<k){
        cout<<"invalid values"<<endl;
        return -1;
    }
    int res=0;
    for(int i=0;i<k;i++){
        res+=arr[i];
    }
    int sum=res;
    for(int i=k;i<n;i++){
        sum+=arr[i]-arr[i-k];
        res=max(res,sum);
    }
    return res;
}
int maxNumberOfPerfects(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(isNumberPerfect(arr[i])){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
    return maxSum(arr,n,k);
}
int main()
{
    int arr[]={28,2,3,6,496,99,8128,24};
    int k=4;
    int n=8;
    cout<<maxNumberOfPerfects(arr,n,k)<<endl;


    return 0;
}*/
















