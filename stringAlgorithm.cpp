///string hash
///find the number of unique stings
/*
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    vector<string> strings={"aa","ab","aa","b","cc","aa"};
    sort(strings.begin(),strings.end());
    int distinct=0;
    for(int i=0;i<strings.size();i++){
        if(i==0 || strings[i]!=strings[i-1]){
            distinct++;
        }
    }
    cout<<distinct<<endl;

    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int p=31;
const int N=1e5+7,m=1e9+7;
vector<long long> powers(N);
long long calculate_hash(string s){
    long long hash=0;
    for(int i=0;i<s.size();i++){
        hash=hash+(s[i]-'a'+1)*powers[i];
    }
    return hash;
}
int32_t main()
{
    powers[0]=1;
    for(int i=1;i<N;i++){
        powers[i]=(powers[i-1]*p)%m;
    }
    vector<string> strings={"aa","ab","aa","b","cc","aa"};
    vector<long long> hashes;
    for(auto w:strings){
        hashes.push_back(calculate_hash(w));
    }
    sort(hashes.begin(),hashes.end());
    int distinct=0;
    for(int i=0;i<hashes.size();i++){
        if(i==0 || hashes[i]!=hashes[i-1]){
            distinct++;
        }
    }
    cout<<distinct<<endl;

    return 0;
}
*/
///calculate the indices of the occurrences of string s in t
/*
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    string s="na";
    string t="apna collegena";
    int S=s.size(),T=t.size();
    for(int i=0;i<T-S+1;i++){
        if(t.substr(i,S)==s){
            cout<<"Found at index "<<i<<endl;
        }
    }

    return 0;
}
*/
///KMP algorithm
/*
#include<bits/stdc++.h>
using namespace std;
vector<int> prefix_function(string s){
    int n=s.size();
    vector<int> pi(n,0);
    for(int i=1;i<n;i++){
        int j=pi[i-1];
        while(j>0 && s[i]!=s[j]){
            j=pi[j-1];
        }
        if(s[i]==s[j]) j++;
        pi[i]=j;
    }
    return pi;
}
int32_t main()
{
    string s="nana";
    vector<int> prefix=prefix_function(s);
    string t="apnancnanacollege";
    int pos=-1;
    int i(0),j(0);
    while(i<t.size()){
        if(t[i]==s[j]){
            j++;
            i++;
        }
        else{
            if(j!=0){
                j=prefix[j-1];
            }
            else{
                i++;
            }
        }
        if(j==s.size()){
            pos=i-s.size();
            break;
        }
    }
    cout<<pos<<endl;

    return 0;
}
*/
///Rabin-Karp Algorithm
/*
#include<bits/stdc++.h>
using namespace std;
int p=31;
const int N=1e5+7,m=1e9+7;
vector<long long> power(N);
int32_t main()
{
    string s="na";
    string t="apna collegena";
    int S=s.size(),T=t.size();
    vector<long long> h(T+1,0);
    power[0]=1;
    for(int i=1;i<N;i++){
        power[i]=(power[i-1]*p)%m;
    }
    for(int i=0;i<T;i++){
        h[i+1]=(h[i]+(t[i]-'a'+1)*power[i])%m;
    }
    long long h_s=0;
    for(int i=0;i<S;i++){
        h_s=(h_s+(s[i]-'a'+1)*power[i])%m;
    }
    for(int i=0;i+S-1<T;i++){
        long long cur_h=(h[i+S]-h[i]+m)%m;
        if(cur_h==(h_s*power[i])%m){
            cout<<"Found at index "<<i<<endl;
        }
    }



    return 0;
}
*/
