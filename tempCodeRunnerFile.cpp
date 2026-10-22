///////////////////////////////////   code for writing in pairs 
void printpair(vector<int>arr){
   int n=arr.size();
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cout<<"("<<arr[i]<<", "<<arr[j]<<")";
       }
   }
   cout<<endl;
}
int main (){
   vector<int>arr;
   arr.push_back(10);
   arr.push_back(20);
   arr.push_back(30);
   arr.push_back(40); 
   printpair(arr);
   return 0;
}
