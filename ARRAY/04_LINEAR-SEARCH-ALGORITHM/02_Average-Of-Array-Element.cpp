#include<iostream>
#include<vector>
using namespace std;

double findaverage(vector<int> & arr){
    int size = arr.size();
    double average =0;
    int sum =0;
    for(int i=0;i<size;i++){
        sum = arr[i]+sum;
    }
    average = (sum*1.0)/size;
    return average;
}
int main(){
    vector<int>arr={10,20,30,50,60};
    int ans = findaverage(arr);
    cout<<ans;
}