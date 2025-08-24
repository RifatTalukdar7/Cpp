//#include<iostream>
//using namespace std;
//int sum(int n){
//    int s=0;
//    for(int i=1;i<=n;i++){
//        s+=i;
//    }
//
//    return s;
//}
//int main(){
//    int n;
//    cin>>n;
//    cout<<sum(n);
//
//    return 0;
//}

///Pythagorean triplet
//#include<iostream>
//using namespace std;
//bool check(int x,int y,int z){
//    int a=max(x,max(y,z));
//    int b,c;
//    if(a==x){
//        b=y;
//        c=z;
//    }
//    else if(a==y){
//        b=x;
//        c=z;
//    }
//    else{
//        b=x;
//        c=y;
//    }
//    if(a*a==b*b+c*c){
//        return true;
//    }
//    else{
//        return false;
//    }
//}
//int main()
//{
//    int x,y,z;
//    cin>>x>>y>>z;
//    if(check(x,y,z)){
//        cout<<"Pythagorean triplet";
//    }
//    else{
//        cout<<"Not Pythagorean triplet";
//    }
//    return 0;
//}
///Binary to decimal
/*
#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int32_t main()
{
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;

    return 0;
}
*/
///Octal to decimal
/*
#include<bits/stdc++.h>
using namespace std;
int octalToDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}
int32_t main()
{
    int n;
    cin>>n;
    cout<<octalToDecimal(n)<<endl;

    return 0;
}
*/
///Hexadecimal To Decimal
/*
#include<bits/stdc++.h>
using namespace std;
int hexadecimalToDecimal(string n){
    int ans=0;
    int x=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>'A' && n[i]<='F'){
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}
int32_t main()
{
    string n;
    cin>>n;
    cout<<hexadecimalToDecimal(n)<<endl;

    return 0;
}
*/
///Decimal To Binary
/*
#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n){
    int x=1;
    int ans=0;
    while(x<=n)
        x*=2;
    x/=2;
    while(x>0){
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=2;
        ans=ans*10+lastDigit;
    }
    return ans;
}
int32_t main()
{
    int n;
    cin>>n;
    cout<<decimalToBinary(n)<<endl;

    return 0;
}
*/
/// Decimal To Octal
/*
#include<bits/stdc++.h>
using namespace std;
int decimalToOctal(int n){
    int x=1;
    int ans=0;
    while(x<=n)
        x*=8;
    x/=8;
    while(x>0){
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=8;
        ans=ans*10+lastDigit;
    }
    return ans;
}
int32_t main()
{
    int n;
    cin>>n;
    cout<<decimalToOctal(n)<<endl;

    return 0;
}
*/
/// Decimal To Hexadecimal
/*
#include<bits/stdc++.h>
using namespace std;
string decimalToHexadecimal(int n){
    int x=1;
    string ans="";
    while(x<=n)
        x*=16;
    x/=16;
    while(x>0){
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=16;
        if(lastDigit<=9){
            ans=ans+to_string(lastDigit);
        }
        else{
            char c='A'+lastDigit-10;
            ans.push_back(c);
        }
    }
    return ans;
}
int32_t main()
{
    int n;
    cin>>n;
    cout<<decimalToHexadecimal(n)<<endl;

    return 0;
}
*/
///Add Two Binary Number
/*
#include<bits/stdc++.h>
using namespace std;
int Reverse(int n){
    int ans=0;
    while(n>0){
        int lastDigit=n%10;
        ans=ans*10+lastDigit;
        n/=10;
    }
    return ans;
}
int addBinary(int a,int b){
    int ans=0;
    int prevCarry=0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans=ans*10+prevCarry;
            prevCarry=0;
        }
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0)){
            if(prevCarry==1){
                ans=ans*10+0;
            }
            else{
                ans=ans*10+1;
                prevCarry=0;
            }
        }
        else{
            ans=ans*10+prevCarry;
            prevCarry=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(prevCarry==1){
            if(a%2==1){
                ans=ans*10+0;
                prevCarry=1;
            }
            else{
                ans=ans*10+1;
                prevCarry=0;
            }
        }
        else{
            ans=ans*10+(a%2);
        }
        a/=10;
    }
    while(b>0){
        if(prevCarry==1){
            if(b%2==1){
                ans=ans*10+0;
                prevCarry=1;
            }
            else{
                ans=ans*10+1;
                prevCarry=0;
            }
        }
        else{
            ans=ans*10+(b%2);
        }
        b/=10;
    }
    if(prevCarry==1){
        ans=ans*10+1;
    }
    ans=Reverse(ans);
    return ans;
}
int32_t main()
{
    int a,b;
    cin>>a>>b;
    cout<<addBinary(a,b)<<endl;

    return 0;
}*/











