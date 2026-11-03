#include<iostream>
#include<cmath>1
using namespace std;
////////////////code for find the ascii value....
// int main(){
//     char ch;
//     cin>>ch;
//     cout<<int(ch);
//     return 0;
// }


//////////////// Switch case :- 
// int main(){
//     int n;
//     cin>>n;

//     // in this case there will become 2 condn . 1st one is true(1) and the 2nd one is flase(0)
//     switch(n>=18){
//         case 1: 
//         cout<<"you are ented in the club";
//         break;
//         case 0: 
//         cout<<"you are not enterd in the club ";
//         break;
//     }
//     return 0;
// }


///////////////// for loop 
// int main (){
//     int n;
//     cin>>n;
//     for ( int i=1;i<=n;i++){
//         cout<<"1";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=1;
//     for(int i=1;i<=n;i++){
//         int value=4;
//         ans=ans*value;
//     }
//     cout<<ans;
//     return -1;
// }



// int main(){
//     int num;
//     cin>>num;
//     int n = 0;
//         int sum1 = 1;
//         if (num) {
//             int digit1 = num % 10;
//             n = n + digit1;
//         }
//         if (num) {
//             int digit = num % 10;
//             for (int i = 1; i <= n; i++) {
//                 int value = digit;
//                 sum1= sum1 * value;
//             }
//         }
//         cout << sum1 << endl;
//         return 0;
// }


string isNarcissistic(int num) {
        // Implement logic to check if num is Narcissistic
        int ans =0;
        int n =0;
        int i=1;
        while(i!=0){
            int rem= num%10;
            n++;
            num = num/10;
        }
        int j=1;
        while(j!=0){
            int rem1 = num%10;
            ans = ans+pow(rem1,n);
            num=num/10;
        }
        if(ans==num){
            return "Yes";
        }
        else{
            return "No";
        }
    }
    int main(){
        int num;
        cin>>num;
        string final= isNarcissistic(num);
        cout<<final;
        return 0;
    }