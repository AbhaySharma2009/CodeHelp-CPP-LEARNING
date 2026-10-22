#include<iostream>
using namespace std;

//int main(){             // condionals :- IF statement 
 //   int age ; 

 //   cout << "enter your age  ;"<< endl;
  //  cin>> age;


  //  if ( age>=18){
   //     cout <<" you can vote "<< endl;
  //  }
   // else{                                          // else stateemnt 
     //   cout<<"you cannot vote" << endl;
   // }
//}

/////////////////////////  Nested if - else 

//int main (){
  //  int grade;
  //  cout << " enter grade :-" << endl;
  //  cin>> grade;

//    if( grade >= 90 ) {
 //       cout << " grade a ";
 //   }
 //   else {
 //       if (grade >=80) {
   //         cout << " grade b";
//        }
 //       else {
 //           if ( grade >= 60 ){
 //           cout << "grade c ";
 //           }
 //           else{
 //               if ( grade <60 ){
 //                   cout << " grade e ";
 //               }
 //           }
 //       }
 //   }
    
//}


//////////////////////// if else - if statement 

//int main (){
//    int grade;
//    cout << " enter grade"<< endl;
//    cin>>grade ;
//    if (grade >=90 ){
//        cout << " grade a ";
//    }
//    else if ( grade >=80 ){
//        cout << " grade b ";
//    }
//    else if ( grade >= 60 ){
 //       cout << " grade c ";
 //   }
 //   else {
 //       cout << " grade d ";
 //   }
//
//}


//int main (){
//    int bronum;
 //   cout << " enter bronum value "<< endl ; 
 //   cin >> bronum;
 //   if ( bronum ==0){
 //   cout << " baat ban jayegi ";
 //   }
 //   else {
 //       cout << " baat ni banegi ";
 //   }
//}

////////////////////////////   loops:-
        
//int main (){
    //for (int i = 0 ; i<100; i= i+10){
    //    cout << i << endl;
    //}

    //for (int i = 100 ; i>=0; i= i-10){
     //   cout <<i << endl;
    //}
    

    //int n ; 
    //if  (cin >>n ){
    //    cout << "  abhay shamra"<< endl;
    //}

//}


//if( cout << "Abhay "){
//    cout <<"Sharma" << endl;
//}
//}




///////////////////////////   while Loop
//int main(){
   // intiloisation
//  int i=1;
     // condition
//  while(i<=5){
//    cout<<i;
        // updation 
//    i=i+1;
//  }
//}


///////////////////// do-while Loop

//int main (){
//   // intilisation
//  int i=1;
//  do{
//    cout<<i<<" ";
//     // updation 
//    i=i+1;
//    // conditon 
//  }while(i<=5);
//  return 0;
//}

//////////// pattern rectangle 

//int main (){
    

    //for(int row=0 ; row < 3 ; row = row +1){
    //    for( int col = 0; col<4; col= col+1){
    //        cout << "* ";
    //    }
    //    cout << endl;
    //}
// pattern for square with input values
//    int n; 
//    cin >> n;
//    for (int row= 0;row <n; row = row +1){
//        for (int col = 0; col<n; col= col+1){
//            cout<< "* ";
//        }
//        cout << endl;
//    }
//}

/////hollow rectangle 
//int main (){
//    for( int row =0; row<3; row = row+1){
//        if (row==0|| row==2 ){
//            for ( int col = 0 ; col< 4 ; col = col+1){
//                cout<<"*  ";
//            }
//        }
//        else{
//            cout<<"*  ";
//            for ( int i =0; i<3; i=i+1){
//                cout<<" ";
//            }
//            cout<<"*  ";
//        }
//        cout<<endl;
//    }
//}


/////////////////////////// genreic code for hoollow rectangle
//int main(){                      
//    int n,y;
//    cin>>n;
//    cin>>y;
//    for ( int row=0;row<n;row=row+1){
//        if(row==0 || row==n-1){
//            for ( int col=0; col<y;col=col+1){
//                cout<<"* ";
//            }
//        }
//        else{
//            cout<<"* ";
//            for ( int i=0; i<n-2;i=i+1){
//                cout<<"  ";
//            }
//            cout <<"* ";
//        }
//        cout <<endl;
//    }
//}
/////////////// generic code for half pyramid
//int main(){
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for(int col=0;col<row+1;col=col+1){
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//}

//////////////////////inverted pyramid

//int main(){
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for(int col=0;col<n-row;col=col+1){
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//}

/////////////// numberic half pyramid

//int main(){
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for(int col=0;col<row+1;col=col+1){
//            cout<<col+1;
//        }
//        cout<<endl;
//    }
//}

////////////// reverse of numeric half pyramid 

//int main(){
//    int n; 
//    cin>> n;
//    for ( int row=0;row<n;row=row+1){
//        for(int col=0; col<n-row;col=col+1){
//            cout<<col+1;   
//     }

//       cout<<endl;
 //  }
//}





        





      