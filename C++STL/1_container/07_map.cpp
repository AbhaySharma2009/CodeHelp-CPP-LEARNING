 #include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
// int main (){
//     // int = key , string = value 
//     unordered_map<int,string>table;
//     table.insert(make_pair(9,"Abhay"));
//     table.insert(make_pair(7,"Abhay"));
//     table.insert(make_pair(1,"Abhay"));
//     table.insert(make_pair(6,"Abhay"));
//     unordered_map<int,string>::iterator it=table.begin();
//     while(it!=table.end()){
//         pair<int,string>p=*it;
//         cout<<p.first<<" "<<p.second<<endl;
//         it++;
//     }
//     if(table.find(7) != table.end()){
//         // if 9,1,6,7 is there then key foudn otherwise not
//         cout<<"key found"<<endl;
//     }
//     else{
//         cout<<"key not found "<<endl;
//     }
//     return 0;
// }


///////ordered map
int main (){
    // int = key , string = value 
    map<int,string>table;
    table.insert(make_pair(9,"Abhay"));
    table.insert(make_pair(7,"Abhay"));
    table.insert(make_pair(1,"Abhay"));
    table.insert(make_pair(6,"Abhay"));
    map<int,string>::iterator it=table.begin();
    while(it!=table.end()){
        pair<int,string>p=*it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }
    return 0;
}