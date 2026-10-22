#include<iostream>
using namespace std;

int main(){
    char n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    switch(n){
        case '+': cout<<a+b; break;
        case '*': cout<<a*b; break;
        case '/': cout<<a/b; break;
        case '%': cout<<a%b; break;
        default: cout<<"invalid";
    }
}