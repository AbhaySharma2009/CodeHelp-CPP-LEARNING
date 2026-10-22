#include<iostream>
using namespace std;

// sum of even number upto n 
int sumofevennumber(int n){
    int value=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            value=value+i;
        }
    }
    return value;
}
int main(){
    int n;
    cin>>n;
    int ans=sumofevennumber(n);
    cout<<ans;
}