#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int value=0;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            value=value+1;
            cout<<value;
        }
        cout<<endl;
    }
    return 0;
}