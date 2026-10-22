#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digit=0;
    int i=0;
    while(n>0){
        int value=n%10;
        digit=value*pow(2,i++)+digit;
        n=n/10;
    }
    cout<<digit;
}