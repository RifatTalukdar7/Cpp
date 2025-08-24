#include<iostream>
using namespace std;
int main(){
    int col,row,n;
    cin>>n;
    for(col=1;col<=n;col++){
        for(row=1;row<=col;row++){
                if(row==1||row==col){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }

        }
        for(row=1;row<=2*n-2*col;row++){
            cout<<" ";
        }
        for(row=1;row<=col;row++){
            if(row==1||row==col){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
        }
        cout<<endl;
    }
    for(col=1;col<=n;col++){
        for(row=1;row<=n+1-col;row++){
                if(row==1||(row+col)==n+1){
                   cout<<"*";
                }
                else{
                    cout<<" ";
                }
        }
        for(row=1;row<=2*col-2;row++){
            cout<<" ";
        }
        for(row=1;row<=n+1-col;row++){
           if(row==1||(row+col)==n+1){
                   cout<<"*";
                }
                else{
                    cout<<" ";
                }
        }
        cout<<endl;
    }


}




