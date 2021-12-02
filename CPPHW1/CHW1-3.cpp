#include <iostream>
using namespace std;

int main(){
    int row;
    int col;
    cout<<"Rows: ";
    cin>>row;
    cout<<"Columns ";
    cin>>col;
    int nums[row][col];

    cout<<"Enter numbers:\n";

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>nums[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<nums[i][j]<<" ";
        }
    }
}