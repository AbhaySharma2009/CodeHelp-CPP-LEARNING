#include<iostream>
#include<vector>
using namespace std;

void printpairs(vector<int>nums){
    vector<int>num=nums;
    int n = num.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"["<<num[i]<<" , "<<num[j]<<"]"<<" , ";
        }
    }
}
int main(){
    vector<int>nums = {10,20,30,40,50};
    printpairs(nums);
}
