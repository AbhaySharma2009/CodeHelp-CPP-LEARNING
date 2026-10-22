#include<iostream>
#include<queue>
using namespace std;
//int main(){
//    queue<int>q;
//    q.push(10);                                                 // push case
//    q.push(20);
//    q.push(30);
//    q.push(40);
//    cout<<q.size()<<endl;
//    q.pop();                                                 // pop case
//    cout<<q.size()<<endl;
//    cout<<q.front()<<endl;                                    // front case
//    cout<<q.back()<<endl;                                     // back case
//    if(q.empty()==true){                                   // empty case
//        cout<<" q is empty"<<endl;
//    }
//    else{
//        cout<<" q is not empty "<<endl;
//    }
//    return 0;
//}



int main (){                                   // "swap"  case for queue
    queue<int>a;
    queue<int>b;
    a.push(10);
    a.push(20);
    a.push(30);
    b.push(100);
    b.push(200);
    b.push(300);
    a.swap(b);
    cout<<a.front();
}