/*
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);
    for(auto i:dq){
        cout<<i<<" ";
    }cout<<endl;
    dq.pop_back();
    dq.pop_front();
    for(auto i:dq){
        cout<<i<<" ";
    }cout<<endl;
    cout<<dq.size()<<endl;

    return 0;
}*/
///Sliding Window  O(n log n)
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    multiset<int,greater<int>> s;
    vector<int> ans;
    for(int i=0;i<k;i++){
        s.insert(a[i]);
    }
    ans.push_back(*s.begin());
    for(int i=k;i<n;i++){
        s.erase(s.lower_bound(a[i-k]));
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }
    for(auto i:ans){
        cout<<i<<" ";
    }


    return 0;
}*/
///Sliding Window O(n)
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    deque<int> q;
    vector<int> ans;
    for(int i=0;i<k;i++){
        while(!q.empty() && a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);
    for(int i=k;i<n;i++){
        if(q.front()==i-k){
            q.pop_front();
        }
        while(!q.empty() && a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    for(auto i:ans)
        cout<<i<<" ";

    return 0;
}*/
///Largest Rectangle In A Histogram
/*
#include<bits/stdc++.h>
using namespace std;
int get_max_area(vector<int> a){
    int n=a.size(),ans=0,i=0;
    stack<int> st;
    a.push_back(0);
    while(i<n){
        while(!st.empty() && a[st.top()]>a[i]){
            int t=st.top();
            int h=a[t];
            st.pop();
            if(st.empty()){
                ans=max(ans,h*i);
            }
            else{
                int len=i-st.top()-1;
                ans=max(ans,h*len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}
int32_t main()
{
    vector<int> a={2,1,5,6,2,3};
    cout<<get_max_area(a)<<endl;



    return 0;
}
*/
///Trapping Rainwater Harvesting
/*
#include<bits/stdc++.h>
using namespace std;
int rain_water(vector<int> a){
    stack<int> st;
    int n=a.size(),ans=0;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]<a[i]){
            int cur=st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int diff=i-st.top()-1;
            cout<<diff<<endl;
            ans+=(min(a[st.top()],a[i])-a[cur])*diff;
            cout<<ans<<" ans"<<endl;
        }
        st.push(i);
    }
    return ans;
}
int main()
{
    vector<int> a={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water(a)<<endl;


    return 0;
}*/




