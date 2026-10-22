#include<iostream>
using namespace std;

int main (){                                                    //  code for flipped solid diamond 
   int n;
   cin>>n;
   for(int row=0;row<n;row=row+1){
       // half triangel 
       for(int col=0;col<n-row;col=col+1){
           cout<<"* ";
       }
       // full empty triangle 
       for(int col=0;col<2*row+1;col=col+1){
           cout<<"  ";
       }
       // half trianle 
       for(int col=0;col<n-row;col=col+1){
           cout<<"* ";
       }
       // th eupper end completed 
       cout<<endl;
   }
   // lower part code start form here
   for(int row=0;row<n;row=row+1){
       // half lower pyramid
       for(int col=0;col<row+1;col=col+1){
       cout<<"* ";
       }
       // half lower full empty traingel 
       for(int col=0;col<2*n-2*row-1;col=col+1){
           cout<< "  ";
       }
       // half pyrmaid triangle 
           for(int col=0;col<row+1;col=col+1){
               cout<<"* ";
           }
           cout<<endl;
    }
}