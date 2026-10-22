#include<iostream>
using namespace std;

void evenorodd(int n){
    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"odd";
    }
}
int main(){
    int n;
    cin>>n;
    evenorodd(n);
    return 0;
}
