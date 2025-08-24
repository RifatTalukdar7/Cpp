///Get bit
/*#include<iostream>
using namespace std;
int getBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}
int main()
{
    cout<<getBit(5,2)<<endl;


    return 0;
}*/
///Set bit
/*#include<iostream>
using namespace std;
int setBit(int n,int pos){
    return (n | (1<<pos));
}
int main()
{
    cout<<setBit(5,1)<<endl;


    return 0;
}*/
///Clear bit
/*#include<iostream>
using namespace std;
int clearBit(int n,int pos){
    int mask=~(1<<pos);
    return (n&mask);
}
int main()
{
    cout<<clearBit(5,2)<<endl;


    return 0;
}*/
///Update bit
/*
#include<iostream>
using namespace std;
int updateBit(int n,int pos,int value){
    int mask=~(1<<pos);
    n=n&mask;
    return n|(value<<pos);
}
int main()
{
    cout<<updateBit(5,1,1)<<endl;

    return 0;
}
*/
///write a program to check if a given number is power of 2
/*
#include<iostream>
using namespace std;
bool ispowerof2(int n){
    return (n && !(n & n-1));
}
int main()
{
    cout<<ispowerof2(32)<<endl;

    return 0;
}*/
///Write a program to count the number of ones in binary representation of a number
/*#include<iostream>
using namespace std;
int numberofone(int n){
    int count=0;
    while(n){
        n=n&n-1;
        count++;
    }
    return count;
}
int main()
{
    cout<<numberofone(19)<<endl;

    return 0;
}*/
///Write a program to generate all possible subset of a set
/*#include<iostream>
using namespace std;
void subsets(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int main()
{
    int arr[4]={1,2,3,4};
    subsets(arr,4);
    return 0;
}*/
///Write a program to find a unique number in an array where all numbers except one are present twice
/*
#include<iostream>
using namespace std;
int Unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int main()
{
    int arr[]={1,2,3,4,1,2,3};
    cout<<Unique(arr,7)<<endl;

    return 0;
}*/
///Write a program to find 2 unique number in an array where all numbers except two,are present twice
/*
#include<iostream>
using namespace std;
int setBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}
void Unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],pos-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}
int main()
{
    int arr[]={1,2,3,1,2,3,5,7};
    Unique(arr,8);

    return 0;
}*/
///Write a program to find a unique number in an array where all numbers except one,are present trice
/*
#include<iostream>
using namespace std;
int getBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}
int setBit(int n,int pos){
    return (n|(1<<pos));
}
int Unique(int arr[],int n){
    int result=0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result=setBit(result,i);
        }
    }
    return result;
}
int main()
{
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    cout<<Unique(arr,10)<<endl;
    return 0;
}*/









