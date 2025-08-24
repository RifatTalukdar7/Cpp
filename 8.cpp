//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int array[n];
//    for(int i=0;i<n;i++){
//        cin>>array[i];
//    }
//    for(int i=0;i<n;i++){
//        cout<<array[i]<<endl;
//    }
//
//
//    return 0;
//}
///Max and Min
//#include<bits/stdc++.h>
//#include<climits>
//using namespace std;
//int main()
//{
//    int n;
//    cout<<"Enter a number : ";
//    cin>>n;
//    int array[n];
//    for(int i=0;i<n;i++){
//        cin>>array[i];
//    }
//    int maxNo=INT_MIN;
//    int minNo=INT_MAX;
//    for(int i=0;i<n;i++){
//            maxNo=max(maxNo,array[i]);
//            minNo=min(minNo,array[i]);
//
//    }
//    cout<<maxNo<<" "<<minNo;
//
//    return 0;
//}
///Linear search
//#include<bits/stdc++.h>
//using namespace std;
//int LinearSearch (int arr[],int n,int key){
//    for(int i=0;i<n;i++){
//        if(arr[i]==key){
//            return i;
//        }
//    }
//
//    return -1;
//
//}
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int key;
//    cin>>key;
//
//    cout<<LinearSearch(arr,n,key)<<endl;
//
//    return 0;
//}
///Binary Search
//#include<bits/stdc++.h>
//using namespace std;
//int binarySearch(int arr[],int n,int key){
//     int s=0;
//     int e=n;
//     while(s<=e){
//        int mid=(s+e)/2;
//        if(arr[mid]==key){
//            return mid;
//        }
//        else if(arr[mid]>key){
//            e=mid-1;
//        }
//        else{
//            s=mid+1;
//        }
//     }
//     return -1;
//}
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int key;
//    cin>>key;
//    cout<<binarySearch(arr,n,key);
//
//    return 0;
//}
///problem 1
//#include<bits/stdc++.h>
////#include<climits>
//using namespace std;
//int main()
//{
//    int mx=INT_MIN;
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//        mx=max(mx,arr[i]);
//        cout<<mx<<" ";
//    }
//    return 0;
//}
///subarray vs subsequence
///problem 1(sum of subarray)
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int sum=0;
//    for(int i=0;i<n;i++){
//        sum=0;
//        for(int j=i;j<n;j++){
//                sum+=arr[j];
//            cout<<sum<<" ";
//        }
//    }
//    return 0;
//}
///longest arithmetic subarray  10 7 4 6 8 10 11 = 4
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int ans =2;
//    int pd=arr[1]-arr[0];
//    int j=2;
//    int curr=2;
//    while(j<n)
//    {
//        if(pd==arr[j]-arr[j-1]){
//            curr++;
//        }
//        else{
//            pd=arr[j]-arr[j-1];
//            curr=2;
//        }
//        ans=max(ans,curr);
//        j++;
//    }
//    cout<<ans<<endl;
//
//    return 0;
//}
///Add Two array 1
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int n1;
//    cin>>n1;
//    int arr1[n1];
//    for(int i=0;i<n1;i++){
//        cin>>arr1[i];
//    }
//    int n2,j=0;
//    n2=n+n1;
//    int arr2[n2];
//    for(int i=0;i<n2;i++){
//        arr2[i]=arr[i];
//        if(arr2[i]==arr2[n]){
//            j++;
//        }
//        if(j!=0){
//            arr2[i]=arr1[i-n];
//        }
//    }
//    for(int i=0;i<n2;i++){
//        cout<<arr2[i]<<" ";
//    }
//
//
//    return 0;
//}
///Add Two array 2
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n,m,s;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    cin>>m;
//    int arr1[m];
//    for(int i=0;i<m;i++){
//        cin>>arr1[i];
//    }
//    s=n+m;
//    int arr2[s];
//    for(int i=0;i<s;i++){
//        arr2[i]=arr[i];
//        if(i>=n){
//            arr2[i]=arr1[i-n];
//        }
//    }
//    for(int i=0;i<s;i++){
//        cout<<arr2[i]<<" ";
//    }
//    return 0;
//}
///Record Breaker        1 2 0 7 2 0 2 2 (2)
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n+1];
//    arr[n]=-1;
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    if(n==1){
//        cout<<"1"<<endl;
//        return 0;
//    }
//    int ans=0;
//    int mx=-1;
//    for(int i=0;i<n;i++){
//        if(arr[i]>mx && arr[i]>arr[i+1]){
//            ans++;
//        }
//        mx=max(mx,arr[i]);
//    }
//    cout<<ans<<endl;
//
//    return 0;
//}
///First Repeating element  1 5 3 4 3 5 6 = 2
//#include<iostream>
//#include<climits>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    const int N=1e6+2;
//    int idx[N];
//    for(int i=0;i<N;i++){
//        idx[i]=-1;
//    }
//    int minidx=INT_MAX;
//    for(int i=0;i<n;i++){
//        if(idx[arr[i]]!=-1){
//            minidx=min(minidx,idx[arr[i]]);
//        }
//        else{
//            idx[arr[i]]=i;
//        }
//    }
//    if(minidx==INT_MAX){
//        cout<<"-1"<<endl;
//    }
//    else{
//        cout<<minidx+1<<endl;
//    }
//    return 0;
//}
///subarray with given sum input N=5,S=12; 1 2 3 7 5 Output : 2 4
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n,s;
//    cin>>n>>s;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int i=0,j=0,st=-1,en=-1,sum=0;
//    while(j<n && sum+arr[j]<=s){
//        sum+=arr[j];
//        j++;
//    }
//    if(sum==s){
//        cout<<i+1<<" "<<j<<endl;
//        return 0;
//    }
//    while(j<n){
//        sum+=arr[j];
//        while(sum>s){
//            sum-=arr[i];
//            i++;
//        }
//        if(sum==s){
//            st=i+1;
//            en=j+1;
//            break;
//        }
//        j++;
//    }
//    cout<<st<<" "<<en<<endl;
//
//    return 0;
//}
///Smallest positive missing number
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    const int N=1e6+2;
//    bool check[N];
//    for(int i=0;i<N;i++){
//        check[i]=false;
//    }
//    for(int i=0;i<n;i++){
//        if(arr[i]>0){
//            check[arr[i]]=true;
//        }
//    }
//    int ans=-1;
//    for(int i=1;i<N;i++){
//        if(check[i]==false){
//            ans=i;
//            break;
//        }
//    }
//    cout<<ans<<endl;
//    return 0;
//}
///A subarray is a contiguous part of an array
//4
//-1 4 7 2
//-1
//-1 4
//-1 4 7
//-1 4 7 2
//4
//4 7
//4 7 2
//7
//7 2
//2
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//        for(int j=i;j<n;j++){
//            for(int k=i;k<=j;k++){
//                cout<<arr[k]<<" ";
//            }
//            cout<<endl;
//        }
//    }
//    return 0;
//}
///Find the subarray in an array which has maximum sum -1 4 7 2 = 13
///solution 1 (Brute force approach)
//#include<iostream>
//#include<climits>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int mx=INT_MIN;
//    for(int i=0;i<n;i++){
//        for(int j=i;j<n;j++){
//            int sum=0;
//            for(int k=i;k<=j;k++){
//                sum+=arr[k];
//            }
//            mx=max(mx,sum);
//        }
//    }
//    cout<<mx<<endl;
//    return 0;
//}
///solution 2 (cumulative sum approach)
//#include<iostream>
//#include<climits>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int currsum[n+1];
//    currsum[0]=0;
//    for(int i=1;i<=n;i++){
//        currsum[i]=currsum[i-1]+arr[i-1];
//    }
//    int maxsum=INT_MIN;
//    for(int i=1;i<=n;i++){
//        int sum=0;
//        for(int j=0;j<i;j++){
//            sum=currsum[i]-currsum[j];
//            maxsum=max(sum,maxsum);
//        }
//    }
//    cout<<maxsum;
//    return 0;
//}
///solution 2 (kadane's algorithm)
//#include<iostream>
//#include<climits>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int currentsum=0;
//    int maxsum=INT_MIN;
//    for(int i=0;i<n;i++){
//        currentsum+=arr[i];
//        if(currentsum<0){
//            currentsum=0;
//        }
//        maxsum=max(maxsum,currentsum);
//    }
//    cout<<maxsum<<endl;
//    return 0;
//}
///Maximum Circular Subarray Sum
//c1=-1 4 -6 7 5 -4 = 12
//c2=4 -4 6 -6  10 -11 12 =22
//#include<iostream>
//#include<climits>
//using namespace std;
//int kadane(int arr[],int n){
//    int currentsum=0;
//    int maxsum=INT_MIN;
//    for(int i=0;i<n;i++){
//        currentsum+=arr[i];
//        if(currentsum<0){
//            currentsum=0;
//        }
//        maxsum=max(maxsum,currentsum);
//    }
//    return maxsum;
//}
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int wrapsum;
//    int nonwrapsum;
//    nonwrapsum=kadane(arr,n);
//    int totalsum=0;
//    for(int i=0;i<n;i++){
//        totalsum+=arr[i];
//        arr[i]=-arr[i];
//    }
//    wrapsum=totalsum+kadane(arr,n);
//    cout<<max(wrapsum,nonwrapsum)<<endl;
//
//
//    return 0;
//}
///Pair sum problem
//#include<iostream>
//using namespace std;
//bool pairsum(int arr[],int n,int k){
//    for(int i=0;i<n-1;i++){
//        for(int j=i+1;j<n;j++){
//            if(arr[i]+arr[j]==k){
//                cout<<i<<" "<<j<<endl;
//                return true;
//            }
//        }
//    }
//    return false;
//}
//int main()
//{
//    int arr[]={2,4,7,11,14,16,20,21};
//    int k=31;
//
//    cout<<pairsum(arr,8,k)<<endl;
//
//
//    return 0;
//}
///another way
//#include<iostream>
//using namespace std;
//bool pairsum(int arr[],int n,int k){
//    int low=0,high=n-1;
//    while(low<high){
//        if(arr[low]+arr[high]==k){
//            cout<<low<<" "<<high<<endl;
//            return true;
//        }
//        else if(arr[low]+arr[high]>k){
//            high--;
//        }
//        else{
//            low++;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int arr[]={2,4,7,11,14,16,20,21};
//    int k=31;
//
//    cout<<pairsum(arr,8,k)<<endl;
//
//
//    return 0;
//}





