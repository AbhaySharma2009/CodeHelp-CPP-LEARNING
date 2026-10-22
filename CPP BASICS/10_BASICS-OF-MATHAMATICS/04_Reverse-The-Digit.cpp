#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int value=0;
    int i=0;
    while(n>0){
        int digit=n%10;
        value=value*10+digit;
        n=n/10;
    }
    cout<<value;
    return 0;
}