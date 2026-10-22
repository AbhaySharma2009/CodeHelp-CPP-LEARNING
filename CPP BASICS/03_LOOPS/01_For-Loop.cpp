#include<iostream>
using namespace std;

int main (){
    for (int i = 0 ; i<100; i= i+10){
       cout << i << endl;
    }

    for (int i = 100 ; i>=0; i= i-10){
       cout <<i << endl;
    }
}


// nested for loop
int main(){
    int n;
    cin>>n;

    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            cout<<"( "<<i<<" , " <<j<<" ) "<<endl;
        }
    }
}