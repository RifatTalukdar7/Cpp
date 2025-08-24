///Set
/*
#include<iostream>
#include<set>
using namespace std;
int32_t main()
{
    set<int> s;
    s.insert(6);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    cout<<s.size()<<endl;
    s.erase(6);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}
*/
///Multi set
/*
#include<iostream>
#include<set>
using namespace std;
int32_t main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(7);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    s.erase(s.find(3));
    s.erase(3);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}*/
///Unordered set
/*
#include<iostream>
#include<unordered_set>
using namespace std;
int32_t main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    ///s.erase(s.begin());
    s.erase(s.find(3));
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}*/
///Unordered multi set
/*
#include<iostream>
#include<unordered_set>
using namespace std;
int32_t main()
{
    unordered_multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    ///s.erase(s.find(3));
    s.erase(3);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}*/

