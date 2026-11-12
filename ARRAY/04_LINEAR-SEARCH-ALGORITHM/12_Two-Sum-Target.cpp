#include<iostream>
#include<vector>
using namespace std;

vector<int> twosum(vector<int>nums , int target){
    vector<int>num=nums;
    int n = num.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((num[i] + num[j]) == target){
                return {i,j};
                break;
            }
        }
    }   
}
int main(){
    int target = 160;
    vector<int>nums={10,20,30,40,80,80};
    vector<int>ans= twosum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;

}
