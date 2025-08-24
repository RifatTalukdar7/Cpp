#include<iostream>
using namespace std;
void b(string s,string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
    char c=s[0];
    string s1=s.substr(1);
    b(s1,ans+c);
    b(s1,ans);
}
int main()
{
    b("abc","");

    return 0;
}
