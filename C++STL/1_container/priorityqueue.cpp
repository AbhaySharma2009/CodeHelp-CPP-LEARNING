#include<iostream>
#include<queue>
using namespace std;
//int main (){                                                      //memner funstion in "priority queue"
//    priority_queue<int> pq;
//    pq.push(10);
//    //10
//    pq.push(9);
//    //10,9
//    pq.push(99);
//    //99,10,9
//    cout<<pq.top()<<endl;
//    //99(kyu ki 99 sabse bda hai tho uski priority bhi jyada hogi )
//    pq.pop();
//    //99
//    cout<<pq.size()<<endl;
//    return 0;
//}



int main (){   
    // min heap syntax    
    // min heap = minimum number priority order                                                //memner funstion in "priority queue"
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    //10
    pq.push(9);
    //9,10
    pq.push(99);
    //9,10,99
    cout<<pq.top()<<endl;
    //9
    pq.pop();
    //9
    cout<<pq.size()<<endl;
    return 0;
}