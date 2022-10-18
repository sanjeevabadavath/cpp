#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    switch(age )
    {
    case 18:
    cout<<" you r eighteen";
    break;
    case 22:
    cout<<" you r twinty   two";
    break;

    default:
    cout<<" you r older";
    }
    return 0;
}