#include<iostream>
using namespace std;
int main(){
    int a,b,i,c;
    char X;
    cout<<" enter the table u want"<<endl;
    cin>>a;
    
    for(i=1;i<=10;i++){
        b=a*i;
        
        cout<<a<<"X"<<i<<" ="<<b<<endl;

    }
    return 0;
}