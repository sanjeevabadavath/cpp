#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char name[n+1];
    cout<<" enter name"<<endl;
    cin>>name[n];
    bool check=1;
    for(int i=0;n+1;i++){
        if(name[i]!=name[n-1-i]){
            check=0;
            break;
            cout<<" not palandrome";

        }
        else{
            cout<<" palandrome";
        }
    }
    return 0;


}
