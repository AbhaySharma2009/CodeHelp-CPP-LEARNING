#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int value=1;
    while(value<=n){
        value=value*2;
    }
    if(value==n){
        cout<<"yes power of 2";
    }
    else{
        cout<<"no not power of 2";
    }
    return 0;
}