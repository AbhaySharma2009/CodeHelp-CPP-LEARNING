#include<iostream>
#include<vector>
using namespace std;

////// reverse an array 
// vector<int>reversearray(const vector<int>& arr){
// vector<int>num=arr;
// int n=num.size();
// int i=0;
// int j=n-1;
// while(i<=j){
//     num[i].swap(num[j]);
//     i++;
//     j--;
// }
// return num;
// }
















// ///////////// sort an arrya of 0s and 1s
// vector<int> sortArray(vector<int>& nums) {
//        // Implement the function here.
//        vector<int>num=nums;
//        int n=num.size();
//        int totalzeros=0;
//        int totalones=0;
//        for(int i=0;i<n;i++){
//            if(num[i]==0){
//                totalzeros++;
//            }
//            if(num[i]==1){
//                totalones++;
//            }
//        }
//        // num.beign()= satrting , num.beign()+total zero = till last condn , 0 = put 0 in all value
//        fill(num.begin(),num.begin()+totalzeros,0);
//        // fill "1"
//        fill(num.begin()+totalzeros,num.end(),1);
//        return num;
//    }
//    int main (){
//          vector<int>nums;
//        cin>>nums;
//        vector<int>sortArray(nums);
//        return 0;
//    }




// /////////////////////////////////   code for writing in pairs 
// void printpair(vector<int>arr){
//    int n=arr.size();
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            cout<<"("<<arr[i]<<", "<<arr[j]<<")";
//        }
//    }
// }
// int main(){
//     vector<int>arr;
//     arr.push_back(10);
//     arr.push_back(20);
//     arr.push_back(30);
//     arr.push_back(40);
//     printpair(arr);
// }



/////////////////////////// code for writing triplet where value are differet
// void printpair(vector<int>arr){
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 cout<<"("<<arr[i]<<", "<<arr[j]<<","<<arr[k]<<")"<<endl;
//             }
//         }
//     }
// }
// int main (){
//     vector<int>arr;
//     arr.push_back(10);
//     arr.push_back(20);
//     arr.push_back(30);
//     arr.push_back(40);
//     printpair(arr);
//     return 0;
// }

