 #include<iostream>
#include<stack>
using namespace std;
int main (){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    if(st.empty()==true){
        cout<<"stack is empty";
    }
    else{
        cout<<" stack is not empty ";
    }
}