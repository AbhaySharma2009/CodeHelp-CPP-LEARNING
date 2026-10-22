#include<iostream>
using namespace std;

void evenorodd(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            cout<<"Even"<<" , ";
        }
        else{
            cout<<"Odd"<<" , ";
        }
    }
}
int main(){
    int arr[5]={3,5,4,3,5};
    int size;
    cin>>size;
    evenorodd(arr,size);
    return 0;
}