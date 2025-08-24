///Search a element
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n,m;
//    cin>>n>>m;
//    int arr[n][m];
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>arr[i][j];
//        }
//    }
//    cout<<"Matrix is :\n";
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    int x;
//    bool flag=false;
//    cin>>x;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(arr[i][j]==x){
//                cout<<i<<" "<<j<<endl;
//                flag=true;
//            }
//        }
//    }
//    if(flag){
//        cout<<"Element is found ";
//    }
//    else{
//        cout<<"Element not found";
//    }
//
//    return 0;
//}
///Sprial Order Matrix Traversal
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,m;
//    cin>>n>>m;
//    int arr[n][m];
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>arr[i][j];
//        }
//    }
//    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;
//    while(row_start<=row_end || column_start<=column_end)
//        {
//        ///for row_start
//        for(int col=column_start;col<=column_end;col++)
//            cout<<arr[row_start][col]<<" ";
//
//        row_start++;
//        ///for column_end
//        for(int row=row_start;row<=row_end;row++)
//            cout<<arr[row][column_end]<<" ";
//
//        column_end--;
//        ///for row_end
//        for(int col=column_end;col>=column_start;col--)
//            cout<<arr[row_end][col]<<" ";
//
//        row_end--;
//        ///for column_start
//        for(int row=row_end;row>=row_start;row--)
//            cout<<arr[row][column_start]<<" ";
//
//        column_start++;
//    }
//
//    return 0;
//}
/*1 5 7 9 10 11
6 10 12 13 20 21
9 25 29 30 32 41
15 55 59 63 68 70
40 70 79 81 95 105*/
///Transpose
//#include<iostream>
//using namespace std;
//int main()
//{
//    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    for(int i=0;i<3;i++){
//        for(int j=i;j<3;j++){
//            int temp=arr[i][j];
//            arr[i][j]=arr[j][i];
//            arr[j][i]=temp;
//        }
//    }
//    for(int i=0;i<3;i++){
//        for(int j=0;j<3;j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n1,n2,n3;
//    cin>>n1>>n2>>n3;
//    int arr1[n1][n2];
//    int arr2[n2][n3];
//    for(int i=0;i<n1;i++){
//        for(int j=0;j<n2;j++)
//            cin>>arr1[i][j];
//    }
//    for(int i=0;i<n2;i++){
//        for(int j=0;j<n3;j++)
//            cin>>arr2[i][j];
//    }
//    int arr3[n1][n3];
//    int sum=0;
//    for(int i=0;i<n1;i++){
//        for(int j=0;j<n3;j++){
//            for(int k=0;k<n2;k++){
//                sum+=arr1[i][k]*arr2[k][j];
//            }
//            arr3[i][j]=sum;
//            cout<<arr3[i][j]<<" ";
//            sum=0;
//        }
//        cout<<endl;
//    }
//    return 0;
//}
///matrix Search
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n,m;
//    cin>>n>>m;
//    int target;
//    cin>>target;
//    int arr[n][m];
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>arr[i][j];
//        }
//    }
//    int r=0,c=m-1;
//    bool found=false;
//    while(r<n && c>=0){
//        if(arr[r][c]==target){
//            found=true;
//        }
//        if(arr[r][c]>target){
//            c--;
//        }
//        else{
//            r++;
//        }
//    }
//    if(found){
//            cout<<"Element Found";
//        }
//        else{
//            cout<<"Element does not exist";
//        }
//    return 0;
//}















