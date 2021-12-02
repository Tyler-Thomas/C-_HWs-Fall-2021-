#include <iostream>
#include <typeinfo>
using namespace std;

void addFive(void* v, char t){
    switch(t){
        case 'c':{
        char ch=*((char*)v)+5;
        cout<<ch<<endl;
        break;}
        case 'd':
        {   
        double d= *static_cast<double*>(v)+5;
        cout<<d<<endl;
        break;}
        case 'f':{
            
        float fl= *static_cast<float*>(v)+5;
        cout<<fl<<endl;
        break;}
        case 'i':{
            
        int in= *static_cast<int*>(v)+5;
        cout<<in<<endl;
        break;}
        default:
        cout<<"Oops"<<endl;
    }
    
}
int main(){
    char c='d';
    double i=7;
    float f=5.4;
    int j=16;
    addFive(&c,typeid(c).name()[0]);
    addFive(&i,typeid(i).name()[0]);
    addFive(&f,typeid(f).name()[0]);
    addFive(&j,typeid(j).name()[0]);
}