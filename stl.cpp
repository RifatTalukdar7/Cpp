///Array
/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> a={1,2,3,4};
    int Size=a.size();
    for(int i=0;i<Size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at 2nd array : "<<a.at(2)<<endl;
    cout<<"Empty or not : "<<a.empty()<<endl;
    cout<<"First Element : "<<a.front()<<endl;
    cout<<"Last Element : "<<a.back()<<endl;

    return 0;
}*/

///vector
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);
    cout<<"Print last "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(7);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;
    cout<<"Element at 2nd Index -> "<<v.at(2)<<endl;
    cout<<"Front -> "<<v.front()<<endl;
    cout<<"Back -> "<<v.back()<<endl;
    cout<<"Before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Before clear Size "<<v.size()<<endl;
    cout<<"Before clear Size "<<v.capacity()<<endl;
    v.clear();
    cout<<"After Clear size "<<v.size()<<endl;
    cout<<"After Clear size "<<v.capacity()<<endl;
    return 0;
}*/

///Deque
/*#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(5);
    d.push_front(2);
    d.push_back(4);
    d.push_back(6);
//    deque<int>::iterator it;
//    for(it=d.begin();it!=d.end();it++){
//        cout<<*it<<" ";
//    }cout<<endl;
//    d.pop_front();
//    for(auto i:d){
//        cout<<i<<" ";
//    }cout<<endl;
     cout<<"Print 1st element -> "<<d.at(0)<<endl;
     cout<<"Print Front -> "<<d.front()<<endl;
     cout<<"Print Back -> "<<d.back()<<endl;
     cout<<"Empty or not -> "<<d.empty()<<endl;
     cout<<"Before Erase -> "<<d.size()<<endl;
     d.erase(d.begin(),d.begin()+2);
     cout<<"After Erase -> "<<d.size()<<endl;
     for(int i:d){
        cout<<i<<" ";
     }

    return 0;
}*/







