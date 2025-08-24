//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    string s;
//    string s1(5,'n');
//    cout<<s1<<endl;
//    string s;
//    getline(cin,s);
//    cout<<s<<endl;
    ///string  s1="Fam";
    ///string s2="ily";
    //s1.append(s2);
    //cout<<s1+s2<<endl;
    ///cout<<s1[1]<<endl;
//    string abc="ksdfhesrkgh jrhfhsk jhd";
//    abc.clear();
//    cout<<abc;

//    string s1="abc";
//    string s2="xyz";
//    cout<<s2.compare(s1)<<endl;

    //string s1="nincompoop";
//    s1.erase(3,2);
//    cout<<s1<<endl;
    ///cout<<s1.find("poo")<<endl;
    ///s1.insert(2,"lol");
    ///cout<<s1.length()<<endl;
    ///cout<<s1.size()<<endl;
    ///string s=s1.substr(6,4);
    //cout<<s<<endl;
//    string s1="786";
//    int x=stoi(s1);
//    cout<<x+2<<endl;
//    int x=786;
//    cout<<to_string(x)+"2"<<endl;
//    return 0;
//}
///sorting A string
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main()
//{
//    string s1="dkuhgiuvnsijf";
//    sort(s1.begin(),s1.end());
//    cout<<s1<<endl;
//    return 0;
//}
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main(){
//    string s="sdRsOnks";
    ///to upper
//    for(int i=0;i<s.length();i++){
//        if(s[i]>='a'&&s[i]<='z'){
//            s[i]-=32;
//        }
//    }
//    cout<<s<<endl;
    ///to lower
//    for(int i=0;i<s.length();i++){
//        if(s[i]>='A'&&s[i]<='Z'){
//            s[i]+=32;
//        }
//    }
//    cout<<s<<endl;
//    transform(s.begin(),s.end(),s.begin(),::toupper);
//    cout<<s<<endl;
//    transform(s.begin(),s.end(),s.begin(),::tolower);
//    cout<<s<<endl;
//    return 0;
//}
///From the biggest number from the numeric string
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main(){
//    string s="986592";
//    sort(s.begin(),s.end(),greater<int>());
//    cout<<s<<endl;
//    sort(s.begin(),s.end());
//    cout<<s<<endl;
//
//    return 0;
//}
///max an char count in string
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main(){
//    string s="feiheriuhsfhaihfoiwhiffsit";
//    int freq[26];
//    for(int i=0;i<26;i++)
//        freq[i]=0;
//    for(int i=0;i<s.size();i++)
//        freq[s[i]-'a']++;
//    char ans='a';
//    int maxf=0;
//    for(int i=0;i<26;i++){
//        if(freq[i]>=maxf){
//            maxf=freq[i];
//            ans=i+'a';
//        }
//    }
//    cout<<maxf<<" "<<ans<<endl;
//    return 0;
//}
///max an char count in string
//#include <iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//    string s="fjhsuhdhfi";
//    sort(s.begin(),s.end());
//    int k=1;
//    int m=-1;
//    char ans;
//    for(int i=0;i<s.size()-1;i++){
//        for(int j=i+1;j<s.size();j++){
//            if(s[i]==s[j]){
//                k++;
//                if(k>m){
//                   ans=s[i];
//                }
//            }
//        }
//        m=max(m,k);
//        k=1;
//    }
//    cout<<m<<" "<<ans;
//    return 0;
//}

