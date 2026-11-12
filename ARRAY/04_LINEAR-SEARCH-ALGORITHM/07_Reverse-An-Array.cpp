#include<iostream>
#include<vector>
using namespace std;

vector<int>arrayreverse(vector<int>&arr){
    vector<int>num=arr;
    int n = num.size();
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(num[i],num[j]);
        i++;
        j--;
    }
    return num;
}
int main(){
    vector<int>arr={10,20,30,40};
    vector<int>ans =arrayreverse(arr);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}