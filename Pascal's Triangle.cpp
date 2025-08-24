///Pascal Triangle
/*
#include<iostream>
using namespace std;
main(){
int n,k=1;
cin>>n;
for(int row=0;row<n;row++){
    for(int col=1;col<=n-row;col++){
        cout<<" ";
    }
    for(int col=0;col<=row;col++){
                    if(col==0){
                       k=1;
                    }
                    else{
                            k=k*(row-col+1)/col;
                    }
                    cout<<k<<" ";
            }
            cout<<endl;
    }

}*/

/*
          1
         2 3
        4 6 9
      8 12 18 27
    16 24 36 54 81
  32 48 72 108 162 243
 64 96 144 216 324 486 729


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(j==i){
                cout<<pow(3,i);
            }
            else if(j==0){
                cout<<pow(2,i)<<" ";
            }
            else{
                cout<<pow(3,j)*pow(2,i-j)<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
*/

