#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int findmaximum(vector<int>&arr){
    int size=arr.size();
    int mini= INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    return mini;
}
int main(){
    vector<int>arr = {10,56,32,6732,2323};
    int ans = findmaximum(arr);
    cout<<ans;
    return 0;
}