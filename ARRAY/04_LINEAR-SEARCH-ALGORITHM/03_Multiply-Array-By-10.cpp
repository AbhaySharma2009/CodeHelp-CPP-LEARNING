#include<iostream>
#include<vector>
using namespace std;

void multiplyarray(vector<int>&nums){
    int size = nums.size();
    for(int i=0;i<size;i++){
        cout<<10*nums[i]<<" ";
    }
}
int main(){
    vector<int>nums={10,20,40,50,100};
    multiplyarray(nums);
    return 0;
}