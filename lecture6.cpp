#include<iostream>
using namespace std;

//void printname (){                                                        //function
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i=i++){
//        cout<<"Abhay"<<endl;
//    }
//}
//int main(){
//    //function call or function invoke
//    printname();
//}

//void printnumber (int num){                                                  //function call stack
//    cout<<num<<endl;
//}
//int main(){
//    int a=5;
//    printnumber(a);
//}

//int main(){                                                            // code for to find the adresss of given number
//    int a=7;
//    cout<<"adress of the number is "<<&a<<endl;
//}



// "add" function defined 
//int add (int n,int m){                                                  // code for addition of two number
//    int result = n+m;
//    return result;

//}

//int main(){
//    int n,m;
//    cin>>n;
//    cin>>m;
//    int sum=add(n,m);
//    cout<<"addition result is "<<sum;
//}





//int max(int num1, int num2, int num3){                           // code for find the max of 3 number 
//    if(num1>num2 && num1>num3){
//        return num1;
//    }
//    else if ( num2>num1 && num2>num3){
//        return num2;
//    }
//    else {
//        return num3;
//    }
//}
//int main(){
//    int a,b,c;
//    cin>>a;
//    cin>>b;
//    cin>>c;
//    int maxnum= max(a,b,c);
//    cout<<" maximum numebr is "<< maxnum;
//}





// here we write void because in this question there is not need of 'return' 
               // here "n" is parameter
//void printnumber( int n){                                            // code for counting from 1 to N
//    for(int i=0;i<=n;i=i+1){
//        cout<<i<<endl;
//    }
//}
//int main(){
//    int n;
//    cin>>n;

         // here "n" is argument 
//    printnumber(n);
//}





//char grade( int marks){                           // code for write a funch of student and grade problem
//    if(marks>=90){
//        return 'A';
//    }
//else if(marks >=70){
//    return 'B';
//}
//else if (marks>=50){
//    return 'C';
//}
//else{
//    return 'D';
//}
//}
//int main(){
//    int marks;
//    cin>> marks;
//    char getgrade= grade(marks);
//    cout<<" grades is "<< getgrade;
//return 0;
//}




//char grade( int marks){                           // another code for write a funch of student and grade problem
//    switch(marks/10){
//        case 10: return 'A'; break;
//        case 9 : return 'A'; break;
//        case 8 : return 'B'; break;
//        case 7 : return 'C'; break;
//        case 6 : return 'D'; break;
//        default: return 'E'; break;
//    }
//}
//int main(){
//    int marks;
//    cin>> marks;
//    char getgrade= grade(marks);
//    cout<<" grades is "<< getgrade;
//    return 0;
//}






//int getsum ( int n){                                  // code for sum of all number upto n 
//    int sum=0;
//    for(int i=0;i<=n;i=i+1){
//        sum=sum+i;     
//    }
//    return sum;
//}
//int main(){
//    int n;
//    cin>>n;
//    int number = getsum(n);
//    cout<<" the sum of all number is "<< number;
//    return 0;
//}





//int getsum ( int n){                                    // code for sum of all even number 
//    int sum=0;
//    for(int i=2;i<=n;i=i+2){
//        sum=sum+i;     
//    }
//    return sum;
//}
//int main(){
//    int n;
//    cin>>n;
//    int number = getsum(n);
//    cout<<" the sum of all even number is "<< number;
//    return 0;
//}



//bool printnumber(int n){                                    // code for write the function to find the no is even or odd
//    if(n%2==0){
//        return true;
//    }
//    else{
//        return false;
//    }
//}

//int main (){
//    int n;
//    cin>>n;
//    bool number = printnumber(n);
//    if ( number ==true){
//        cout<<" the number is even";
//    }
//    else{
//        cout<<" the number is odd";
//    }
//    return 0;

//}





//int factorialis(int n){                                            // code for write the function to find factorial of n number 
//    int fact=1;
//    for(int i=1;i<=n;i=i+1){
//        fact = fact *i;
//    }
//    return fact;
//}
//int main(){
//    int n;
//    cin>>n;
//    int factorial= factorialis(n);
//    cout<<" the factorial of the given numebr is "<< factorial;
//}





bool primenumber(int n){                                    // code fore write funtction to find the number is prime or not
int i=2;
   for(int i=2;i<n;i++){
       if(n%i==0){
           return false;
       }
       else{
           return true;
       }
   }
}
int main(){
   int n;
   cin>>n;
   bool number= primenumber(n);
   if(number==false){
       cout<<"the given number is not a prime number";
   }
   else{
       cout<<" the given number is prime numebr ";
   }
   return 0;

}





// void reverint(int n){
//     for(int i=n;i>0;i--){
//         cout<<i;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     reverint(n);
//     cout<<reverint <<" ";
// }

















