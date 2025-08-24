///Sorting in array
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n-1;i++){
//        for(int j=i+1;j<n;j++){
//            if(arr[j]<arr[i]){
//                int temp=arr[j];
//                arr[j]=arr[i];
//                arr[i]=temp;
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//
//    return 0;
//}
///Selection sort
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n-1;i++){
//        int minimum=i;
//        for(int j=i+1;j<n;j++){
//            if(arr[j]<arr[minimum]){
//                minimum=j;}
//        }
//            if(minimum!=i){
//                int temp=arr[minimum];
//                arr[minimum]=arr[i];
//                arr[i]=temp;
//            }
//        }
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//
//    return 0;
//}
///Bubble Sort
//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int counter=1;
//    while(counter<n){
//        for(int i=0;i<n-counter;i++){
//            if(arr[i]>arr[i+1]){
//                int temp=arr[i+1];
//                arr[i+1]=arr[i];
//                arr[i]=temp;
//            }
//        }
//        counter++;
//    }
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//
//    return 0;
//}
///Insertion sort
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=1;i<n;i++){
//        int current=arr[i];
//        int j=i-1;
//        while(arr[j]>current &&j>=0){
//            arr[j+1]=arr[j];
//            j--;
//        }
//        arr[j+1]=current;
//    }
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}
///Marge sort
/*
#include<iostream>
using namespace std;
void marge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++; i++;
        }
        else{
            arr[k]=b[j];
            k++; j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++; j++;
    }
}
void margeSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        margeSort(arr,l,mid);
        margeSort(arr,mid+1,r);
        marge(arr,l,mid,r);
    }
}
int main()
{
    int arr[]={5,4,3,2,1};
    margeSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}*/
///or
//#include<iostream>
//using namespace std;
//void conquer(int arr[],int si,int mid,int ei){
//    int merged[ei-si+1];
//    int idx1=si;
//    int idx2=mid+1;
//    int x=0;
//    while(idx1<=mid && idx2<=ei){
//        if(arr[idx1]<=arr[idx2]){
//            merged[x++]=arr[idx1++];
//        }
//        else{
//            merged[x++]=arr[idx2++];
//        }
//    }
//    while(idx1<=mid){
//        merged[x++]=arr[idx1++];
//    }
//    while(idx2<=ei){
//        merged[x++]=arr[idx2++];
//    }
//    for(int i=0,j=si;i<sizeof(merged)/sizeof(int);i++,j++){
//        arr[j]=merged[i];
//    }
//}
//void devide(int arr[],int si,int ei){
//    if(si>=ei){
//        return;
//    }
//    int mid=si+(ei-si)/2;
//    devide(arr,si,mid);
//    devide(arr,mid+1,ei);
//    conquer(arr,si,mid,ei);
//}
//int main()
//{
//    int arr[]={5,4,3,2,1};
//    int n=sizeof(arr)/sizeof(int);
//    devide(arr,0,n-1);
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//
//    return 0;
//}
///Quick Sort
//#include<iostream>
//using namespace std;
//void Swap(int arr[],int i,int j){
//    int temp=arr[i];
//    arr[i]=arr[j];
//    arr[j]=temp;
//}
//int Partition(int arr[],int l,int r){
//    int pivot=arr[r];
//    int i=l-1;
//    for(int j=l;j<r;j++){
//        if(arr[j]<pivot){
//            i++;
//            Swap(arr,i,j);
//        }
//    }
//    Swap(arr,i+1,r);
//    return i+1;
//}
//void quickSort(int arr[],int l,int r){
//    if(l<r){
//        int pi=Partition(arr,l,r);
//        quickSort(arr,l,pi-1);
//        quickSort(arr,pi+1,r);
//    }
//}
//int main()
//{
//    int arr[]={6,3,9,5,2,8,7};
//    quickSort(arr,0,6);
//    for(int i=0;i<7;i++){
//        cout<<arr[i]<<" ";
//    }
//
//    return 0;
//}
///Count Sort
//#include<iostream>
//using namespace std;
//void countSort(int arr[],int n){
//    int k=arr[0];
//    for(int i=0;i<n;i++){
//        k=max(k,arr[i]);
//    }
//    int Count[10]={0};
//    for(int i=0;i<n;i++){
//        Count[arr[i]]++;
//    }
//    for(int i=1;i<=k;i++){
//        Count[i]+=Count[i-1];
//    }
//    int output[n];
//    for(int i=n-1;i>=0;i--){
//        output[--Count[arr[i]]]=arr[i];
//    }
//    for(int i=0;i<n;i++){
//        arr[i]=output[i];
//    }
//}
//int main()
//{
//    int arr[]={1,3,2,3,4,1,6,4,3};
//    countSort(arr,9);
//    for(int i=0;i<9;i++){
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}
///DNF sort
//#include<iostream>
//using namespace std;
//void Swap(int arr[],int i,int j){
//    int temp=arr[i];
//    arr[i]=arr[j];
//    arr[j]=temp;
//}
//void dnfSort(int arr[],int n){
//    int low=0;
//    int mid=0;
//    int hight=n-1;
//    while(mid<=hight){
//        if(arr[mid]==0){
//            Swap(arr,low,mid);
//            low++; mid++;
//        }
//        else if(arr[mid]==1){
//            mid++;
//        }
//        else{
//            Swap(arr,mid,hight);
//            hight--;
//        }
//    }
//}
//int main()
//{
//    int arr[]={1,0,2,1,0,1,2,1,2};
//    dnfSort(arr,8);
//    for(int i=0;i<9;i++){
//        cout<<arr[i]<<" ";
//    }
//
//    return 0;
//}
///Wave Sort
/*#include<iostream>
using namespace std;
void Swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void waveSort(int arr[],int n){
    for(int i=1;i<n;i+=2){
        if(arr[i]>arr[i-1]){
            Swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1] && i<=n-2){
            Swap(arr,i,i+1);
        }
    }
}
int main()
{
    int arr[]={1,3,4,7,5,6,2,9};
    waveSort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
///count inversion(Brute Force)
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int inv=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                inv++;
            }
        }
    }
    cout<<inv<<endl;

    return 0;
}*/
///count inversion(Marge)
///3 5 6 9 1 2 7 8
///10
/*#include<bits/stdc++.h>
using namespace std;
long long marge(int arr[],int l,int mid,int r){
    long long inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            inv+=n1-i;
            /// a[i],a[i+1],a[i+2]..>b[j] and i<j;
            k++;j++;
        }
    }
    while(i<n1){
        arr[k++]=a[i++];
    }
    while(j<n2){
        arr[k++]=b[j++];
    }
    return inv;
}
long long margeSort(int arr[],int l,int r){
    long long inv=0;
    if(l<r){
        int mid=(l+r)/2;
        inv+=margeSort(arr,l,mid);
        inv+=margeSort(arr,mid+1,r);
        inv+=marge(arr,l,mid,r);
    }
    return inv;
}
int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<margeSort(arr,0,n-1);

    return 0;
}*/
