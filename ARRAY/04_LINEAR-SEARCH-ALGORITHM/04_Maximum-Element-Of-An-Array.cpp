#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int findmaximum(vector<int>&arr){
    int size=arr.size();
    int max= INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    vector<int>arr = {10,56,32,6732,2323};
    int ans = findmaximum(arr);
    cout<<ans;
    return 0;
}

