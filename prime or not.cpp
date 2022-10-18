#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< " Enter number";
    cin>>num;
    if(num%num==0){
        if(num%1==0){
            cout<<" Number is prime";
        }
    }
    else{
        cout<<" Number is not prime";
    }
    return 0;
}