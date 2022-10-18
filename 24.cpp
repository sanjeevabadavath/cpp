#include<iostream> 
using namespace std;
int main(){
    int arr[]={12,18,20,42,8,10};
    
    for(int i=0;i<7;i++){
        if(arr[i]==8){
            return i;
        }
    }
}