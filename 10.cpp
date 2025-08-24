///Char Array
//#include<iostream>
//using namespace std;
//int main()
//{
//    char arr[100]="apple";
//    int i=0;
//    while(arr[i]!='\0'){
//        cout<<arr[i]<<endl;
//        i++;
//    }
//    return 0;
//}
///char Array input
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    char arr[100];
//    cin>>arr;
//    cout<<arr[2];
//    return 0;
//}
///Palindrome
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    char arr[n+1];
//    cin>>arr;
//    bool check=1;
//    for(int i=0;i<n;i++){
//        if(arr[i]!=arr[n-1-i]){
//            check=0;
//            break;
//        }
//    }
//    if(check==true){
//        cout<<"Word is a palindrome"<<endl;
//    }
//    else{
//        cout<<"Word is not a palindrome"<<endl;
//    }
//    return 0;
//}
///largest Word in a semetence
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    cin.ignore();
//    char arr[n+1];
//    cin.getline(arr,n);
//    cin.ignore();
//    int i=0;
//    int currlen =0,maxlen=0;
//    int maxst=0,st=0;
//    while(1){
//        if(arr[i]==' '||arr[i]=='\0'){
//            if(currlen>maxlen){
//                maxlen=currlen;
//                maxst=st;
//            }
//            currlen=0;
//            st=i+1;
//        }
//        else
//        currlen++;
//        if(arr[i]=='\0')
//            break;
//        i++;
//    }
//    cout<<maxlen<<endl;
//    for(int i=0;i<maxlen;i++){
//        cout<<arr[i+maxst];
//    }
//
//    return 0;
//}

