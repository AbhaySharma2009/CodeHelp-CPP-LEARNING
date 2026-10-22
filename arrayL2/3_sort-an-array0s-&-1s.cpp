#include<iostream>
#include<vector>
using namespace std;

int sortanarray(vector<int>arr){
    vector<int>nums=arr;
    int n=nums.size();
    int totalzero=0;
    int totalones=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            totalzero++;
        }
        if(nums[i]==1){
            totalones++;
        }
    }
    fill(nums.begin(),nums.begin()+totalzero,0);
    fill(nums.begin()+totalzero,nums.end(),1);
    return nums;
}
int main(){
    vector<int>arr={0,1,1,1,0,0,0,0,};
    int ans=sortanarray(arr);
    cout<<ans;
}
