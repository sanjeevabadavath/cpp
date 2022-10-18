#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<" Enter the number you want to check"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<n<<" "<<"IS PRIME";
        }
        else{
            cout<< n<<" "<<"IS COMPOSITE";
            }
            return 0;
}
