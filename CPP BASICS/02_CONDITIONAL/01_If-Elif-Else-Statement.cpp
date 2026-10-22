#include<iostream>
using namespace std;


// condionals :- IF statement 
int main(){             
   int age ; 

   cout << "enter your age  ;"<< endl;
   cin>> age;


   if ( age>=18){
       cout <<" you can vote "<< endl;
   }
   else{                                          // else stateemnt 
       cout<<"you cannot vote" << endl;
   }
}

///////////////////////  Nested if - else 

int main (){
   int grade;
   cout << " enter grade :-" << endl;
   cin>> grade;

   if( grade >= 90 ) {
       cout << " grade a ";
   }
   else {
       if (grade >=80) {
           cout << " grade b";
       }
       else {
           if ( grade >= 60 ){
           cout << "grade c ";
           }
           else{
               if ( grade <60 ){
                   cout << " grade e ";
               }
           }
       }
   }
    
}


////////////////////// if else - if statement 

int main (){
   int grade;
   cout << " enter grade"<< endl;
   cin>>grade ;
   if (grade >=90 ){
       cout << " grade a ";
   }
   else if ( grade >=80 ){
       cout << " grade b ";
   }
   else if ( grade >= 60 ){
       cout << " grade c ";
   }
   else {
       cout << " grade d ";
   }

}


int main (){
   int bronum;
   cout << " enter bronum value "<< endl ; 
   cin >> bronum;
   if ( bronum ==0){
   cout << " baat ban jayegi ";
   }
   else {
       cout << " baat ni banegi ";
   }
}