#include<iostream>
#include<math.h>
using namespace std;
main()
{
//    int n;
//    cin>>n;
//    int r=0;
//    while(n>0){
//        int l=n%10;
//        r=r*10+l;
//        n=n/10;
//    }
//    cout<<r;
    int n,n1;
    cin>>n;
    int sum=0;
    n1=n;
    while(n>0){
        int l=n%10;
        sum+=pow(l,3);
        n=n/10;
    }
    if(n1==sum){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not Armstrong number";
    }

    return 0;
}
