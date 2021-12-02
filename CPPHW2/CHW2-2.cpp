#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int *arr=new int[n+1];
    for(int i=0;i<n;i++){
        cout<<"Numbers: "<<endl;
        cin>>arr[i];
    }
    arr[n]=0;
    int *ptr= arr;
    ptr=ptr+n-1;
    for(int i=0;i<n;i++){
        cout<<*ptr<<endl;
        ptr--;
    }
    delete[] arr;
}