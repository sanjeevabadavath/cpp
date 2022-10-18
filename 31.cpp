#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    for(int i=5;i>=1;i--){
        for(int j=i;j<=n;j++){        
          cout<<i<<" ";
        }       
        cout<<endl;
    }
    
    
    return 0;
} 