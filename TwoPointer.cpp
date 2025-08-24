/// 3 Sum
/*
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;cin>>n;
    int target;cin>>target;
    vector<int> a(n);
    for(auto &i :a){
        cin>>i;
    }
    bool found=false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int lo=i+1,hi=n-1;
        while(lo<hi){
            int current=a[i]+a[lo]+a[hi];
            if(current==target){
                found=true;
            }
            if(current<target){
                lo++;
            }
            else{
                hi--;
            }
        }
    }
    if(found){
        cout<<"True"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }



    return 0;
}*/
///Maximum Consecutive Ones
/*
Test 1:
5 2
1 1 0 0 1
5
Test 2:
11 2
1 1 1 0 0 0 1 1 1 1 0
6
Test 3:
19 3
0 0 1 1 0 0 1 1 1 0 1 1 0 0 0 1 1 1 1
10
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;cin>>n;
    int k;cin>>k;
    vector<int> a(n);
    for(auto &i: a){
        cin>>i;
    }
    int zerocnt=0,i=0,ans=0;
    for(int j=0;j<n;j++){
        if(a[j]==0){
            zerocnt++;
        }
        while(zerocnt>k){
            if(a[i]==0){
                zerocnt--;
            }
            i++;
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans<<endl;

    return 0;
}*/
///Longest Substring without Repeated Character
/*
Test 1:
pwwkew
3
Test 2:
bbbbb
1
Test 3:
pwwker
4

#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    string s;cin>>s;
    vector<int> dict(256,-1);
    int maxLen=0,start=-1;
    for(int i=0;i<s.size();i++){
        if(dict[s[i]]>start)
            start=dict[s[i]];
        dict[s[i]]=i;
        maxLen=max(maxLen,i-start);
    }
    cout<<maxLen<<endl;



    return 0;
}*/











