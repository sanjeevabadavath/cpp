#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
}
else{
    int prevfact=factorial(n-1);
    return n*prevfact;
}
}

int main(){
    int n;
    cout<<" Enter the value of n:"<<endl;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
