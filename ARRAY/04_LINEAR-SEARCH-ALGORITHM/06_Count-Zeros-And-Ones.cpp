#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


////////////////pair<int,int> = used for directly return two values ex = return{_,_}
// and at te place of pair<int,int> we ca also write pair<flaot,int>

pair<int,int> findzeros(vector<int>&arr){
    int size=arr.size();
    int ones=0;
    int zeros =0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeros++;
        }
        else{
            ones++;
        }
    }
    return{zeros , ones};
}
int main(){
    vector<int>arr = {1,0,1,1,1,0};

    // to access the pair<int,int> value we have to also write pair<int,int> in function call

    pair<int,int> ans = findzeros(arr);

    // to print ther pari<int,int> value we have to write "_.first" and "_.second"
    cout<<"First "<<ans.first<<endl;
    cout<<"Second "<<ans.second<<endl;
    return 0;
}