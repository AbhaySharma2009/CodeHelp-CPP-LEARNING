#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

///////////////////////SYTAX
//int main(){
//    int arr[3][2]={{10,20},{100,200},{1000,2000}};
//    cout<<arr[1][1];              // it print 200
//}

//////////////// INPUT VLAUES
//int main (){
//    int arr[3][2];
//    for(int i=0;i<3;i++){
//        for(int j=0;j<2;j++){
//            cout<<"the row is "<<i<<"the coloum is "<<j<<endl;
//            cin>>arr[i][j];
//        }
//    }
//    for(int i=0;i<3;i++){
//        for(int j=0;j<2;j++){
//            cout<<arr[i][j]<<endl;
//        }
//    }
//}



//////////////////////////// 2D Array for print rowwise number 
//void printarrayrowwise(int arr[][2],int rowsize,int colsize){
//    for(int row=0;row<rowsize;row=row+1){
//        for(int col=0;col<colsize;col=col+1){
//            cout<<arr[row][col]<<",";
//        }
//        cout<<endl;
//    }
//}
//int main (){
//    int arr[3][2];
//    for(int i=0;i<3;i=i+1){
//        for(int j=0;j<2;j=j+1){
//            cin>>arr[i][j];
//        }
//    }
//    printarrayrowwise(arr,3,2);
//}



///////////////////////////// 2D Array for coloumwise numbere 
//void printarraycoloumwise(int arr[][2],int rowsize,int colsize){
//    for(int col=0;col<colsize;col++){
//        for(int row=0;row<rowsize;row++){
//            cout<<arr[row][col]<<",";
//        }
//        cout<<endl;
//    }
//}
//int main (){
//    int arr[3][2];
//    for(int i=0;i<3;i=i+1){
//        for(int j=0;j<2;j=j+1){
//            cin>>arr[i][j];
//        }
//    }
//    printarraycoloumwise(arr,3,2);
//}




////////////////////////////// 2D Array . Print rowwise sum 
//void printsum(int arr[][2], int rowsize, int colsize){
//    for(int row=0;row<rowsize;row++){
//        int sum=0;
//        for(int col=0;col<colsize;col++){
//            int value= arr[row][col];
//            sum = sum+value;
//        }
//        cout<<sum<<endl;
//    }
//}
//int main (){
//    int arr[3][2];
//    for(int i=0;i<3;i++){
//        for(int j=0;j<2;j++){
//            cin>>arr[i][j];
//        }
//    }
//    printsum(arr,3,2);
//}




/////////////////////////////// 2D Array . Print colwise sum 
//void printsum(int arr[][2], int rowsize, int colsize){
//    for(int col=0;col<colsize;col++){
//        int sum=0;
//        for(int row=0;row<rowsize;row++){
//            int value= arr[row][col];
//            sum = sum+value;
//        }
//        cout<<sum<<endl;
//    }
//}
//int main (){
//    int arr[3][2];
//    for(int i=0;i<3;i++){
//        for(int j=0;j<2;j++){
//            cin>>arr[i][j];
//        }
//    }
//    printsum(arr,3,2);
//}



//////////////////////////// 2D Array . search for an array. 
//pair<int,int> printsum(int arr[][2], int rowsize, int colsize, int target){
//    for(int row=0;row<rowsize;row++){
//        for(int col=0;col<colsize;col++){
//            int value= arr[row][col];
//            if(value ==target ){
//                return{row,col};
//            }
//        }
//    }
//    return{-1,-1};
//}
//int main (){
//    int arr[3][2];
//    for(int i=0;i<3;i++){
//        for(int j=0;j<2;j++){
//            cin>>arr[i][j];
//        }
//    }
//    pair<int,int> sum = printsum(arr,3,2,55);
//    cout<<sum.first<<","<<sum.second;
//}




//////////////////////////////2D Array . for print maximum number 
//int printarrayrowwise(int arr[][2],int rowsize,int colsize){
//    int mini= INT_MAX;
//    for(int row=0;row<rowsize;row=row+1){
//        for(int col=0;col<colsize;col=col+1){
//            int value = arr[row][col];
//            if(value<mini){
//                mini=value;          
//            }
//        }
//    }
//    return mini;
//}
//int main (){
//    int arr[3][2];
//    for(int i=0;i<3;i=i+1){
//        for(int j=0;j<2;j=j+1){
//            cin>>arr[i][j];
//        }
//    }
//    int sum = printarrayrowwise(arr,3,2);
//    cout<<sum;
//}





