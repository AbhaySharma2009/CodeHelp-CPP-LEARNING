#include<iostream>
using namespace std;

char grade(int marks){
    switch(marks/10){
        case 10: return 'A' ;break;
        case 9: return 'B' ;break;
        case 8: return 'C';break;
        case 7: return 'D' ;break;
        default: return 'E';
    }
}
int main(){
    int marks;
    cin>>marks;
    char value=grade(marks);
    cout<<value;
}
