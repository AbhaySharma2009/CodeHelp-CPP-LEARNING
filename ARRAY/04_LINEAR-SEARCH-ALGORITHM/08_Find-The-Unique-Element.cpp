#include<iostream>
#include<vector>
using namespace std;

int uniqueelement(vector<int>&nums){
    int n = nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^nums[i];
    }
    return ans;
}
int main(){
    vector<int> nums={10,10,20, 30 ,30};
    int ans = uniqueelement(nums);
    cout<<ans<<endl;
}