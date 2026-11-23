#include<iostream>
using namespace std;


// yaha par arr[row][col] col ka size dalna jarrui hai kyuki formula col*i+j thatswhy col is important 
void printcolwise(int arr[][2], int rowsize , int colsize){
    for(int col=0;col<colsize;col++){
        for(int row=0;row<rowsize;row++){
            cout<<arr[row][col]<<" , ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][2];
    for(int j=0;j<2;j++){
        for(int i=0;i<3;i++){
            cin>>arr[i][j];
        }
    }
    printcolwise(arr,3,2);
}