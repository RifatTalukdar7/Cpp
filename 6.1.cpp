///prime Number;
//#include<iostream>
//#include<math.h>
//using namespace std;
//bool isPrime(int num){
//    for(int i=2;i<=sqrt(num);i++){
//        if(num%i==0){
//            return false;
//        }
//    }
//    return true;
//
//}
//main(){
//    int a,b;
//    cin>>a>>b;
//    for(int i=a;i<=b;i++){
//        if(isPrime(i)){
//            cout<<i<<"\t";
//        }
//    }
//    return 0;
//}

///Fobinacci
//#include<iostream>
//using namespace std;
//void fib(int n){
//    int t1=0;
//    int t2=1;
//    int sum=0;
//    for(int i=1;i<=n;i++){
//        cout<<t1<<" ";
//        sum=t1+t2;
//        t1=t2;
//        t2=sum;
//    }
//    return;
//
//}
//int main(){
//    int n;
//    cin>>n;
//    fib(n);
//
//
//return 0;
//}


///Factorial
//#include<iostream>
//using namespace std;
//int fac(int n){
//    int factorial=1;
//    for(int i=2;i<=n;i++){
//        factorial=factorial*i;
//    }
//    return factorial;
//}
//int main(){
//    int n;
//    cin>>n;
//    int ans=fac(n);
//    cout<<ans;
//
//return 0;
//}

///nCr

//#include<iostream>
//using namespace std;
//int fac(int n){
//    int sum=1;
//    for(int i=2;i<=n;i++){
//        sum*=i;
//    }
//    return sum;
//
//}
//
//main(){
//    int n,r;
//    cin>>n>>r;
//    int ans=fac(n)/(fac(n-r)*fac(r));
//    cout<<ans;
//
//    return 0;
//}

///pascale triangle
#include<iostream>
using namespace std;
int fac(int n){
    int sum=1;
    for(int i=2;i<=n;i++){
        sum*=i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fac(i)/(fac(j)*fac(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;

}
















