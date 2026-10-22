#include<iostream>
#include<deque>
using namespace std;
//int main (){                                                    // member function in "deque"
//    deque<int>dq;
//    dq.push_back(10);
//    // 10
//    dq.push_back(20);
//    //10,20
//    dq.push_front(30);
//    //30,10,20
//    dq.push_front(40);
//    //40,30,10,20
//    cout<<dq.size()<<endl;
//    //4
//    cout<<dq.front()<<endl;
//    //40
//    cout<<dq.back()<<endl;
//    //20
//    dq.pop_back();
//    //30,10,20
//    cout<<dq.size()<<endl;
//    //3
//    if(dq.empty()==true){
//        cout<<"deque is empty"<<endl;
//    }
//    else{
//        cout<<"deque is not empty"<<endl;
//    }
//}

int main (){
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(40);
    deque<int>::iterator it=dq.begin();
    while(it!=dq.end()){
    cout<<*it<<" " ;
    it++;
    }
    return 0;
}
