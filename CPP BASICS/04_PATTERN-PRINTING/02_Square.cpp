#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    for(int row=1;row<=a;row++){
        for(int col=1;col<=a;col++){
            cout<<" *";
        }
        cout<<endl;
    }
}