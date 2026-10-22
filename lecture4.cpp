# include<iostream>
using namespace std;                           



////////////////////// code for fancy letter 2 .
//int main(){
//    int n;
//    cin>>n;
//    for ( int row=0;row<n;row=row+1){
//        // print 1 in 1st row , 2 in 2nd row and so on 
//        for(int col=0;col<row+1;col=col+1){
//            cout<<row+1;
//            // now print * after every number but * not be print at last 
//        if(col !=row){
//            cout<<"* ";
//        }
//    }
//    // code  of upper part completed
//        cout <<endl;
//    }
//    // code for lower part started 
//    for ( int row=0;row<n;row=row+1){
//        for(int col=0;col<n-row;col=col+1){
//            cout<<n-row;
//        if(col !=n-row-1){
//            cout<<"* ";
//        }
//    }
//    cout<<endl;
//}
//}


//int main (){                                      // code for write 1,12,123,1234 and so on 
//    int n;
//    cin>>n;
//    for(int row=0; row<n ;row=row+1){
//        int i=0;
//        for(int col=0;col<row+1;col=col+1){
//            i=i+1;
//            cout<<i;
//        }
//        cout<<endl;
//    }
//}


//int main (){                                          // code for pallandrom alphabetic pattern A,ABA,ABCBA,adn so on 
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for (int col=0;col<row+1;col=col+1){
//            // this below code is used for to convert number into alphabat 
//            int ans=col+1;
//            char ch= ans + 'A'-1;
//            cout<<ch;
//        }
//        // reverse coutning printing
//        for(int col=row;col>=1;col=col-1){       // yaha par col=row par revrese order start hoga and col>=1 par order khatam hoga 
//            int ans=col;
//            char ch= ans + 'A'-1;
//            cout<<ch;      
//        }
//        cout<<endl;
//    }
//}

//int main (){                                                // code for numeric hollow half pyramid :- 1,12,1-3,1--4,1---5 and so on (where - represetn gap)
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for(int col=0;col<row+1;col=col+1){
//            if(col==0||col==row||row==n-1){
//                cout<<col+1;
//            }
//            else{
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//    }
//}

//int main (){                                                  // code for numeric hollow inverted half pyramid 
//   int n;
//   cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for(int col=0;col<n-row;col=col+1){
//            if(col==0||col==n-row-1||row==0){
//                cout<<col+1;
//            }
//            else{
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//    }
//}

//int main (){                                                       // code for fanncy patterm 3
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for(int col=0;col<n+3-row;col=col+1){
//            cout<<"* ";
//        }
//        for(int col=0;col<row+1;col=col+1){
//            cout<<row+1;
//            if(col!=0||col !=row){
//                cout<<"* ";
//            }
//        }
//        for(int col=0;col<n+3-row;col=col+1){
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//}

//int main (){                                                // code for solid half diamond
//    int n; 
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for(int col=0;col<row+1;col=col+1){
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//    for(int row=0;row<n;row=row+1){
//        for(int col=0;col<n-row-1;col=col+1){
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//}

// int main (){                                                   // code for numeric full pyarmid (already in notes)
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1){
//         for(int col=0;col<n-row-1;col=col+1){
//             cout<<"  ";
//         }
//         // prinitng number (already in notes )
//         int start=row+1;
//         for(int col=0;col<row+1;col=col+1){
//             cout<<start;
//             start=start+1;
//         }
//         // this line is for printitng reverse order of number 
//         int run = 2*row;
//         for(int col=0;col<row;col=col+1){
//             cout<<run;
//             run=run-1;
//         }
//         cout<<endl;
//     }
// }