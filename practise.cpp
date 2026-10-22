#include<iostream>
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

int main(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=1;i<=n;i++){
        int value=4;
        ans=ans*value;
    }
    cout<<ans;
    return -1;
}



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