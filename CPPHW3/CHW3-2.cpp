#include <iostream>
#include <string>
using namespace std;

void csv(string& str){
    
    int first=0;
    int gap;
    int last;
    bool flag=false; //Just trust me on this one.
    while(first!=-1){
        first=(str).find(" ");
        gap=1;
        last=first;
        flag=false;
        while(!((last)>(str).size()-2)&&((str)[last]==' ')){
            flag=true;
            gap++;
            last++;
            
        }
        if(flag)
        gap--;
        if(first!=-1)
        (str).replace(first,gap,",");
    }
    cout<<str<<endl;
}
void csv(string& str,string& cha){
    
    int first=0;
    int gap;
    int last;
    bool flag=false; //Just trust me on this one.
    while(first!=-1){
        first=str.find(" ");
        gap=1;
        last=first;
        flag=false;
        while(!((last)>(str).size()-2)&&((str)[last]==' ')){
            flag=true;
            gap++;
            last++;
            
        }
        
        if(flag)
        gap--;
        if(first!=-1)
        str.replace(first,gap,cha);
        
    }
    cout<<str<<endl;
}
int main(){
string st="Bing Bam  Boom   Bom ";
string st2=st;
string delim="*";
csv(st);
csv(st2, delim);
}