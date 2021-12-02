#include <iostream>
using namespace std;

int main(){
int month;
cout<<"Enter a month number: ";
cin>>month;

switch(month){
    case 2:
    cout<<"Month "<<month<<" has 28 days.";
    break;
    case 1:
    case 4:
    case 6:
    case 9:
    case 11:
    cout<<"Month "<<month<<" has 30 days.";
    break;
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    cout<<"Month "<<month<<" has 31 days.";
    break;
    default:
    cout<<"Please enter a valid month number(between 1 and 12).";
}

}