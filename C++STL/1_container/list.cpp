#include<iostream>
#include<list>
using namespace std;
//int main (){                                                // all member function in list.
//    list<int>mylist;
//    mylist.push_back(10);
      //10
//    mylist.push_back(20);
      //10,20
//    mylist.push_back(30);
      //10,20,30
//    mylist.push_back(40);
      //10,20,30,40
//    cout<<mylist.front()<<endl;
      //10
//    cout<<mylist.back()<<endl;
//    mylist.pop_back();
      //10,20,30 (remove 40)
//    mylist.pop_front();
      // 20,30 (remove 10)
//    cout<<mylist.size()<<endl;
      //2
 //   mylist.clear();
//    cout<<mylist.size()<<endl;
//    if(mylist.empty()==true){
//        cout<<"list is ab empty ";
//    }
//    else {
//        cout<<" list is not an empty";
//    }
//}



 
//int main (){                                                    // use of transerverse an iterator in list 
//    list<int>mylist;
//    mylist.push_back(10);
//    mylist.push_back(20);
//    mylist.push_back(30);
//    list<int>::iterator it=mylist.begin();
//    while(it!=mylist.end()){
//        cout<<*it<<" ";
//        it++;
//    }
//    return 0;
//}



//int main (){                                            // "swap" case for list
//    list<int>first;
//    list<int>second;
//    first.push_back(10);
//    first.push_back(20);
//    first.push_back(30);
//    second.push_back(100);
//    second.push_back(200);
//    second.push_back(300);
//    first.swap(second);
//    cout<<first [0]<<" "<<first [1]<<" "<<first [2];
//    return 0;
//}



//////////Iterator Possible
int main(){
    list<int>first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    list<int>::iterator it=first.begin();
    while(it!=first.end()){
        cout<<*it<<" , ";
        it++;
    }
}



