#include<iostream>
using namespace std;

int main(){
    int length,breadth;
    cin>>length>>breadth;

    for(int row=1;row<=length;row++){
        for(int col=1;col<=breadth;col++){
            cout<<" *";
        }
        cout<<endl;
    }
}