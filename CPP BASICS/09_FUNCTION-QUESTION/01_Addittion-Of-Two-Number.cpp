#include<iostream>
using namespace std;

int printaddition(int a , int b ){
    int c=a+b;
    return c;
}
int main(){
    int a,b;
    cin>>a>>b;
    int sum=printaddition(a,b);
    cout<<sum;
}