#include<iostream>
using namespace std;
double area_circle(){ 
    double radius,area;
    
    cout<<" Enter radius"<<endl;
    cin>>radius;
    float area_circle;
    area =3.14*radius*radius;
    return area;
}
   
int main(){
    double area_circle();
    cout<<"Area of circle is"<<area_circle();
    return 0;

}