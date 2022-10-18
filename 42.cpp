#include<iostream>
using namespace std;
int power(int m,int n){
    if(n==0){
        return 1;
    }
    int prevpow=power(m,n-1);
    return m*prevpow;
}
int main(){
    int m,n;
    cout<<"Enter m and n values"<<endl;
    cin>>m>>n;
    cout<<power(m,n);
    return 0;
}