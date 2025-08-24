///Place Elements to Maximise Minimum Distance
/*
#include<iostream>
#include<algorithm>
using namespace std;
bool isFeasible(int mid,int arr[],int n,int k){
    int pos=arr[0],element=1;
    for(int i=1;i<n;i++){
        if(arr[i]-pos >=mid){
            pos=arr[i];
            element++;
            if(element==k){
                return true;
            }
        }
    }
    return false;
}
int largestMinDistance(int arr[],int n,int k){
    sort(arr,arr+n);
    int result=-1;
    int left=1,right=arr[n-1];
    while(left<right){
        int mid=(left+right)/2;
        if(isFeasible(mid,arr,n,k)){
            result=max(result,mid);
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    return result;
}
int main()
{
    int arr[]={1,2,8,4,9};
    int n=5;
    int k=3;
    cout<<"largest min distance is : "<<largestMinDistance(arr,n,k)<<endl;


    return 0;
}*/
///Page Allocation
/*
#include<iostream>
#include<climits>
using namespace std;
bool isPossible(int arr[],int n,int m,int Min){
    int studentsRequired=1,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>Min){
            return false;
        }
        if(sum+arr[i]>Min){
            studentsRequired++;
            sum=arr[i];
            if(studentsRequired>m){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}
int allocateMinimumPages(int arr[],int n,int m){
    int sum=0;
    if(n<m){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int start=0,End=sum,ans=INT_MAX;
    while(start<=End){
        int mid=(start+End)/2;
        if(isPossible(arr,n,m,mid)){
            ans=min(ans,mid);
            End=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={12,34,67,90};
    int n=4;
    int m=2;
    cout<<"The minimum no of pages : "<<allocateMinimumPages(arr,n,m)<<endl;



    return 0;
}
*/
///Painters Partition Problem
/*
#include<iostream>
using namespace std;
int findFeasible(int boards[],int n,int limit){
    int sum=0,painters=1;
    for(int i=0;i<n;i++){
        sum+=boards[i];
        if(sum>limit){
            sum=boards[i];
            painters++;
        }
    }
    return painters;
}
int paintersPartition(int boards[],int n,int m){
    int totalLength=0,k=0;
    for(int i=0;i<n;i++){
        k=max(k,boards[i]);
        totalLength+=boards[i];
    }
    int low=k,high=totalLength;
    while(low<high){
        int mid=(low+high)/2;
        int painters=findFeasible(boards,n,mid);
        if(painters<=m){
            high=mid;
        }else{
            low=mid+1;
        }
    }
    return low;

}
int main()
{
    int arr[]={30,40,10,20};
    int n=4;
    int m=2;
    cout<<"Minimum Time to paint boards : "<<paintersPartition(arr,n,m);



    return 0;
}
*/
///Search in Sorted & Rotated array
/*
#include<iostream>
using namespace std;
int searchInRotatedArray(int arr[],int key,int left,int right){
    if(left>right){
        return -1;
    }
    int mid=(left+right)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[left]<=arr[mid]){
        if(key>=arr[left] && key<=arr[mid]){
            return searchInRotatedArray(arr,key,left,mid-1);
        }
        return searchInRotatedArray(arr,key,mid+1,right);
    }
    if(key>=arr[mid] && key<=arr[right]){
        return searchInRotatedArray(arr,key,mid+1,right);
    }
    return searchInRotatedArray(arr,key,left,mid-1);
}
int main()
{
    int arr[]={6,7,8,9,10,1,2,5};
    int n=8;
    int key=2;
    int idx=searchInRotatedArray(arr,key,0,n-1);
    if(idx==-1){
        cout<<"Key doesn't exist"<<endl;
    }else{
        cout<<"key is present at idx : "<<idx<<endl;
    }

    return 0;
}*/
///Find the Peak Element
/*
#include<iostream>
using namespace std;
int findPeakElement(int arr[],int low,int high,int n){
    int mid=low+(high-low)/2;
    if((mid==0 || arr[mid-1]<=arr[mid])&&(mid==n-1 || arr[mid+1]<=arr[mid])){
       return mid;
    }
    else if(mid>0 && arr[mid-1]>arr[mid]){
        return findPeakElement(arr,low,mid-1,n);
    }
    else{
        return findPeakElement(arr,mid+1,high,n);
    }
}
int main()
{
    int arr[]={0,6,8,5,7,9};
    int n=6;
    cout<<"peak element index : "<<findPeakElement(arr,0,n-1,n)<<endl;


    return 0;
}*/








