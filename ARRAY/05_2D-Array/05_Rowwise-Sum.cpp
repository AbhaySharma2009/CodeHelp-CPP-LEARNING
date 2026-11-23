#include<iostream>
using namespace std;


// yaha par arr[row][col] col ka size dalna jarrui hai kyuki formula col*i+j thatswhy col is important 
void printrowwise(int arr[][2], int rowsize , int colsize){
    for(int row=0;row<rowsize;row++){
        int sum =0 ;
        for(int col=0;col<colsize;col++){
           sum = sum+arr[row][col];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    printrowwise(arr,3,2);
}