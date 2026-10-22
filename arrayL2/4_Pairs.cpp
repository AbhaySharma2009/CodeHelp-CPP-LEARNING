#include<iostream>
#include<vector>
using namespace std;

///////////Duplicate pairs possible 
void pairsprint(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<",";
        }
    }
}
int main(){
    vector<int>arr={10,20,30,40,50};
    pairsprint(arr);
}


/////////////Difeernet pairs
void pairsprint(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<",";
        }
    }
}
int main(){
    vector<int>arr={10,20,30,40,50};
    pairsprint(arr);
}