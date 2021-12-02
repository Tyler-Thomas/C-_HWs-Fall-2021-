#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


int strCmp(char str1[], char str2[], bool  ignoreCase=false){
    
    if(ignoreCase){
        for(int i=0;i<strlen(str1);i++){
            if(strlen(str2)>i){
            if(toupper(str1[i])!=toupper(str2[i])){
                if(toupper(str1[i])>toupper(str2[i]))
                return 1;
                else return -1;
            }
        }
        else return 1;
        }
    }
    else{
        for(int i=0;i<strlen(str1);i++){
            if(strlen(str2)>i){
            if((str1[i])!=(str2[i])){
                if((str1[i])>(str2[i]))
                return 1;
                else return -1;
            }
        }
        else return 1;
    }
    }
    if(strlen(str1)==strlen(str2))
    return 0;
    else {
    return -1;
    }
    }
    

int main(){
    char string1[50];
    char string2[50];
    cout<<"Enter two strings to be compared: "<<endl;
    cin.getline(string1,50);
    cin.getline(string2,50);
    if(strCmp(string1,string2,true)==1)
    cout<<"\""<<string1<<"\" is greater than \""<<string2<<"\"."<<endl;
    else if(strCmp(string1,string2,true)==-1)
    cout<<"\""<<string2<<"\" is greater than \""<<string1<<"\"."<<endl;
    else
    cout<<"\""<<string1<<"\" and \""<<string2<<"\" are equal."<<endl;
    return 0;
}