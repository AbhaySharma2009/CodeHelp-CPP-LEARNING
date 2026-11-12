#include<iostream>
#include<vector>
using namespace std;


void printtriplets(vector<int>nums){
    vector<int>num=nums;
    int n = num.size();
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    cout<<"["<<num[i]<<","<<num[j]<<","<<num[k]<<"]"<<" , ";
                }
            }
        }
    }
}
int main(){
    vector<int> nums = {10,20,30,40,50,60,70};
    printtriplets(nums);
    return 0;
}