#include<iostream>
using namespace std;

//int main(){                                                    //   code for to find the ascii value and only int func valid 
//    int n='h';
//    cout << " The ASCII value of " << n<<endl;

//}

//int main (){                                               // code for hollow square or rectangle
//       int n;
//       cin>>n;
//       for(int row=0;row<n;row=row+1){
//        if(row==0||row==n-1){
//            for ( int col=0;col<n;col=col+1){
//                cout<<"* ";
//            }
//        }
//        else {
//            cout<<"* ";
//            for (int col=0; col<n-2;col=col+1){
//            cout<<"  ";
//            }
//            cout << "* ";
//        }
//        cout<<endl;
//    }
//}


//int main (){                                               // code for half pyramid
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for(int col=0;col<row+1;col=col+1){
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//}


//int main (){                                                 // code for inverted half pyramid 
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for (int col=0;col<n-row;col=col+1){
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//}

//int main(){                                                    // another code for numeric hald pyramid 
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        int i=0;
//        for (int col =0;col<row+1;col=col+1){
//            i=i+1;
//            cout<<i;

//        }
//        cout<<endl;
//    }
//}


//int main (){                                          //(old method) code for inverted numeric pyramid
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for (int col=0;col<n-row; col=col+1){
//            cout <<col+1;
//        }
//        cout<<endl;
//    }
//}

//int main (){                                        //   code for ful pyramid 
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        for(int col=0;col<n-row-1;col=col+1){
//            cout <<"  ";
//        }
//        for (int col=0;col<row+1;col=col+1){
//            cout<<"*   ";

//        }
//        cout <<endl;
//    }
//}


//int main (){
//    int n;
//    cin>>n;
//    for (int row=0;row<n;row=row+1){
//        for(int col=0;col<row;col=col+1){
//            cout<<"  ";
//        }
//        for ( int col=0;col<n-row;col=col+1){
//            cout<<"*  ";
//        }
//        cout<<endl;
//    }
//}


// int main (){                                              // code for solid diamond
//     int n;
//     cin>>n;
//     for ( int row=0;row<n;row=row+1){
//         for(int col=0;col<n-row-1;col=col+1){
//             cout <<"  ";
//         }
//         for (int col=0;col<row+1;col=col+1){
//             cout << "*   ";
//         }
//         cout<<endl;
//     }
//     for( int row=0;row<n;row=row+1){
//         for(int col=0;col<row;col=col+1){
//                         cout<<"  ";
//         }
//         for(int col=0;col<n-row;col=col+1){
//             cout<<"*   ";
//         }
//         cout<<endl;
//     }

// }


//int main(){                                          // code for hollow diamond 
//    int n;
//    cin>>n;
//    for( int row=0;row<n;row=row+1){
//        for(int col=0;col<n-row-1;col=col+1){
//            cout<<"  ";
//        }
//        for(int col=0;col<2*row+1; col=col+1){
//            if(col==0||col==2*row){
//                cout<<"* ";
//            }
//            else{
//                cout<<"  ";
//            }
//        }
//        cout<<endl;
//    }
//    for(int row=0;row<n;row=row+1){
//        for(int col=0;col<row;col=col+1){
//            cout<<"  ";
//        }
//        for(int col=0;col<2*n-2*row-1;col=col+1){
//            if(col==0||col==2*n-2*row-2){
//                cout<<"* ";
//            }
//            else{
//                cout<<"  ";
//            }
//        }
//        cout<<endl;

//    }
//}


//int main (){                                                    //  code for flipped solid diamond 
//    int n;
//    cin>>n;
//    for(int row=0;row<n;row=row+1){
//        // half triangel 
//        for(int col=0;col<n-row;col=col+1){
//            cout<<"* ";
//        }
//        // full empty triangle 
//        for(int col=0;col<2*row+1;col=col+1){
//            cout<<"  ";
//        }
//        // half trianle 
//        for(int col=0;col<n-row;col=col+1){
//            cout<<"* ";
//        }
//        // th eupper end completed 
//        cout<<endl;
//    }
 //   // lower part code start form here
 //   for(int row=0;row<n;row=row+1){
//        // half lower pyramid
//        for(int col=0;col<row+1;col=col+1){
//        cout<<"* ";
//        }
//        // half lower full empty traingel 
//        for(int col=0;col<2*n-2*row-1;col=col+1){
//            cout<< "  ";
//        }
//        // half pyrmaid triangle 
//            for(int col=0;col<row+1;col=col+1){
//                cout<<"* ";
//            }
//            cout<<endl;
//}
//}