#include<iostream>
#include<vector>
using namespace std;

int main(){
    // creation
    // declare 
    // int arr[3][2];
    int arr[3][2]={{1,2},{10,11},{11,11}};
    
    // access;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++)
        cout<<arr[i][j]<<endl;
    }


    cout<<"No dikhaat"<<endl;
    return 0;

}


