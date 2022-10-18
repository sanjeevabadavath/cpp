#include<iostream>
using namespace std;
int main(){
    int arr[10][10];
    int rows,col;
    cout<<" enter rows";
    cin>>rows;
    cout<<"enter col";
    cin>>col;

    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }

    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }

return 0;
}