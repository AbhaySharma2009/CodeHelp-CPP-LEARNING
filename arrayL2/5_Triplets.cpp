#include<iostream>
#include<vector>
using namespace std;



void pairsprint(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++)
            cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<",";
        }
    }
}
int main(){
    vector<int>arr={10,20,30,40,50};
    pairsprint(arr);
}