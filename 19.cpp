#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<" Enter the number"<<endl;
    cin>>a;
    if(a%1==0){
        cout<<" The number is  prime";

        }
    else if(a%a==0){
            cout<<" The number is  prime";

        }
    
    else 
    {
        cout<<" The number is not prime";
    }
    return 0;


}