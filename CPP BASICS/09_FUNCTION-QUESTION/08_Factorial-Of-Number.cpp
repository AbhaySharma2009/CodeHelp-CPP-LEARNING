#include<iostream>
using namespace std;

int factorialvalue(int n){
    int ans=1;
    for(int i=n;i>=1;i--){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int value=factorialvalue(n);
    cout<<value;
}