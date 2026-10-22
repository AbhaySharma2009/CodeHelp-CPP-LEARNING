#include<iostream>
#include<cmath>
using namespace std;
/////////////////////////////////////////////////////    decimal to binary (METHOD 1)
//int decimalToBinarymethod1( int n){
//    int binary=0;
//    int i=0;
//    while(n>0){
//        int bit=n%2;
//        binary = bit*pow(10,i++)+binary;
//        n=n/2;
//    }
//    return binary;
//}
//int main(){
//    int n;
//    cin>>n;
//    int binary = decimalToBinarymethod1(n);
//    cout<<binary<<endl;
//}




// ///////////////////////////////////////////////////// decimal to binary (METHOD 2)
// int decimalToBinarymethod1( int n){
//     int binary=0;
//     int i=0;
//     while(n>0){
//         int bit = (n & 1);
//         binary = bit*pow(10,i++)+binary;
//         n=n>>1;
//     }
//     return binary;
// }
// int main(){
//     int n;
//     cin>>n;
//     int binary = decimalToBinarymethod1(n);
//     cout<<binary<<endl;
// }





///////////////////////////////////////////////////// binary to decimal 
int binarytodecimal( int n){
    int decimal=0;
    int i=0;
    while(n){
        int bit= bit%10;
        decimal = decimal + bit*pow(2,i++);
        n/=10;
    }
    return decimal;
}
int main (){
    int n;
    cin>>n;
    int binary = binarytodecimal(n);
    cout<<binary<<endl;
}