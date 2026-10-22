#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1;col<=2*row-1;col++){
            if(col==1 || col==2*row-1){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int row=1;row<=n-1;row++){
        for(int col=1;col<=row;col++){
            cout<<" ";
        }
        for(int col=1;col<=2*n-2*row-1;col++){
            if(col==1||col==2*n-2*row-1){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}