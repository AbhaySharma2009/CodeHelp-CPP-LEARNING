#include<iostream>
#include<vector>
using namespace std;

void searchelement(vector<int> & nums , int target){
    int size= nums.size();
    for(int i=0;i<size;i++){
        if(target==nums[i]){
            cout<<i;
        }
    }
}
int main(){
    vector<int>nums = {10,20,30,40,50};
    int target;
    cin>>target;
    searchelement(nums,target);
}
