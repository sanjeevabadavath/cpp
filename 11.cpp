#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<" Enter your age"<<endl;
    cin>>age;
    if (age<18)
    {
        cout<<" you are a child not allowed to party";

    }
    else if(age==18){
        cout<<" you are kid you required pass";
    }
    else{
        cout<<" you can come";
    }
    return 0;
}

