#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int ones=10;
    int value=0;
    int i=0;
    while(n>0){
        int digit=n%2;
        value=digit*pow(10,i++)+value;
        n=n/2;
    }
    cout<<value;
}
