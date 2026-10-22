#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mini=INT_MAX;
    int value=0;
    int i=0;
    while(n>0){
        int digit=n%10;
        if(mini>digit){
            mini=digit;
        }
        n=n/10;
    }
    cout<<mini;
}