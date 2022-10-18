#include<iostream> 
using namespace std;
int main(){
    int n;
    int arr[]={12,18,20,42,8,10};
    cout<<" Enter n value"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        if(arr[i]==20){
            cout<<i;
            return 1;
        }
        
    }
    return -1;
    
}