#include<iostream>
using namespace std;

void zeroandone(int arr[],int size){
    int zeros = 0;
    int ones=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeros++;
        }
        else if(arr[i]==1){
            ones++;
        }
        else{
            cout<<"Invalid"<<" ";
        }
    }
    cout<<zeros <<" "<<ones<<" ";
}
int main(){
    int arr[5]={1,1,0,1,1};
    int size;
    cin>>size;
    zeroandone(arr,size);
    return 0;
}