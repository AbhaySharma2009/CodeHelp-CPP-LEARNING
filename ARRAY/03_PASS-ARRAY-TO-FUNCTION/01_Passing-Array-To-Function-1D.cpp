// array is always pass by reference 

#include<iostream>
using namespace std;

void doubleprint(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<2*arr[i]<<" , ";
    }
}
int main(){
    int arr[5] = {10,20,30,40,50};
    int size;
    cin>>size;
    doubleprint(arr,size);
    return 0;
}