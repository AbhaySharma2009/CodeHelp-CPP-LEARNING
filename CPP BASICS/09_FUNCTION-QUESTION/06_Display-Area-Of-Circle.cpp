#include<iostream>
using namespace std;

float areaofcircle(float radius){
    float area=3.14*radius*radius;
    return area;
}
int main(){
    float radius;
    cin>>radius;
    float ans=areaofcircle(radius);
    cout<<ans;
}