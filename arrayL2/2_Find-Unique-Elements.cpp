#include<iostream>
#include<vector>
using namespace std;

int finduniqueelements(vector<int>arr){
    int n=arr.size();
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    vector<int>arr={10,10,20,30,30,50,50};
    int digit= finduniqueelements(arr);
    cout<<digit;
}