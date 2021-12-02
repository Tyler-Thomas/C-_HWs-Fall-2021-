#include <iostream>
using namespace std;

int main(){
    int nums[10];
    int max;

    for(int i=0;i<10;i++){
        cin>>nums[i];
        if(i==0){
            max=nums[i];
            }
        else if(nums[i]>max){
            max=nums[i];
        }
    }
    for(int x:nums){
        cout<<x<<" ";
    }
    cout<<"Highest number: "<<max;
}