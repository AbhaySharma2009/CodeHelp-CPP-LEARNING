#include<iostream>
#include<set>  // only <set> is same as "Ordered set"
#include<unordered_set>
using namespace std;
//int main (){                                           // order set 
//    set<int>st;
//    st.insert(10);
//    st.insert(15);
//    st.insert(8);
//    st.insert(4);
//    //traverse
//    set<int>::iterator it=st.begin();
//    while(it!=st.end()){
//        cout<<*it<<" ";
//        it++;
//    }
//    return 0;
//}



int main (){                                                                 // unordered _set 
    unordered_set<int>st;
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);
    //traverse
    unordered_set<int>::iterator it=st.begin();
    while(it!=st.end()){
        cout<<*it<<" ";
        it++;
    }
    if(st.find(20) != st.end()){
        // if value 20 there ins et then key foudn otherwise not found
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    if(st.count(15)==1){
        // if 15 there then it is found otherwise not found 
        // 1== true and 0=false
        cout<<"key found"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
    return 0;
}