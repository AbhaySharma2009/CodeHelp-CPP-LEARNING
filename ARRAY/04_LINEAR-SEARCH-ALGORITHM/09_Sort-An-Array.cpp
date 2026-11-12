#include<iostream>
#include<vector>
using namespace std;

///////// sort an array of 0's and 1's

vector<int> sortarray(vector<int>& nums){
    vector<int> arr = nums;
    int n = arr.size();

    int totalzeros = 0;
    int totalones = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            totalzeros++;
        }
        else{
            totalones++;
        }
    }

    fill(arr.begin(), arr.begin() + totalzeros, 0);
    fill(arr.begin() + totalzeros, arr.end(), 1);

    return arr;
}

int main(){
    vector<int> nums = {0, 0, 1, 1, 0, 0};

    vector<int> ans = sortarray(nums);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}
