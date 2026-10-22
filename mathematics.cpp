#include<iostream>
using namespace std;

////////////// sum of digit;
// int sumofdigit(int num){
//     int sum=0;
//     while(num!=0){
//         int digit=num%10;
//         sum=sum+digit;
//         num=num/10;
//     }
//     return sum;
// }
// int main(){
//     int num;
//     cin>>num;
//     int value=sumofdigit(num);
//     cout<<value;
//     return 0;
// }


/////////////smallest digit of a number
// int smallestdigit(int num){
//     //INT_MAX ko use karne kai liye header file hot hai "#include<limits.h>"
//     int mini=INT_MAX;
//     //check digit is smallest or not
//     //if jo new digit mere paas aya hai
//     // agar wo chotta h tb tak k smallest value se
//     //then store this new digit
//     while(num!=0){
//         int value=num%10;
//         if(value<mini){
//             mini=value;
//         }
//         //new updation 
//         num=num/10;
//     }
//     return mini;
// }
// int main(){
//     int num;
//     cin>>num;
//     int digit=smallestdigit(num);
//     cout<<digit<<endl;
//     return 0;
// }


//////////////The number is even or odd
// void evenodd(int num){
//     // num&1 =binary term mai agar "&"
//     // ka rule lagaynge 
//     if((num&1)==0){
//         cout<<"even";
//     }
//     else{
//         cout<<"odd";
//     }
// }
// int main(){
//     int num;
//     cin>>num;
//     evenodd(num);
//     return 0;
// }


///////////////Reverse the digit
// int reversenumber(int num){
//     int digit=0;
//     while(num!=0){
//         int value=num%10;
//         //eqn for revesrsing the digit
//         digit=digit*10+value;
//         //updation
//         num=num/10;
//     }
//     return digit;
// }
// int main(){
//     int num;
//     cin>>num;
//     int ans=reversenumber(num);
//     cout<<ans;
//     return 0;
// }


//////////////Reverse an integer
// long long int reversenumber(int num){
//     int digit=0;
//     while(num!=0){
//         int value=num%10;
//         //eqn for revesrsing the digit
//         digit=digit*10+value;
//         //updation
//         num=num/10;
//     }
//     return digit;
// }
// int reverse(int num){
//     if(num==0){
//         return 0;
//     }
//     bool floag=0;
//     if(num>0){
//         flag=1;
//     }
//     else{
//         flag=0;
//     }
//     num=abs(num);
//     long long int abhay=reversenumber(num);
//     if(flaog==0){
//         abhay=0-digit;
//     }
//     return
// }



//////////////Palindrom number ex=1221==1221(same number obtained by revrsing )
// int pallindromnumber(int num){
//     int value=0;
//     while(num!=0){
//         // reversing numebr eqn
//         int digit=num%10;
//         value=value*10+digit;
//         //upadation
//         num=num/10;
//     }
//     return value;
// }
// int main(){
//     int num;
//     cin>>num;
//     int pallindrom=pallindromnumber(num);
//     // condn for num==palindrome or not 
//     if(num==pallindrom){
//         cout<<"pallindorme number";
//     }
//     else{
//         cout<<"not a pallindrome";
//     }
//     return 0;
// }

/////////////No. is a power of 2 or not
// void powernumber(int num){
//     //num==1 is the value of 2^0;
//     if(num==1){
//         cout<<"power of 2";
//     }
//     // and num&1==0 by the binary number rule
//     else if((num&1)==0){
//         cout<<"power of 2";
//     }
//     else{
//         cout<<"not a power of 2";
//     }
// }
// int main(){
//     int num;
//     cin>>num;
//     powernumber(num);
//     return 0;
// }

////////////check whther the number is prime or not
// string primenumber(int num){
//     if(num==1){
//         return "yes";
//     }
//     else if(num==2||num==3){
//         return "yes";
//     }
//     for(int i=4;i<=num;i++){
//         if(num%i==0){
//             return "no";
//         }
//     }
//     return "yes";
// }
// int main(){
//     int num;
//     cin>>num;
//     primenumber(num);
//     return 0;
// }


