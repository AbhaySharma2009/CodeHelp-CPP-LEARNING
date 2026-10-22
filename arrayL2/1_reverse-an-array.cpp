#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>reversearray(vector<int>arr){
    vector<int>arr={10,20,30,40,50};
    int n=arr.size();
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return 0; 
}
}
