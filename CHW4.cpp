#include <cstring>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;


class MyString{
private:
    char * str;
    int size;
public:
    MyString(){
        str= new char[1];
        str[0]='\0';
        size=0;
    }
    MyString(const char* str2){
       str= new char[strlen(str2)+1];
       size= strlen(str2);
        for(int i=0;i<strlen(str2);i++){
            str[i]=str2[i];
        }
        str[strlen(str2)]='\0';
    }
    MyString(const MyString& a): MyString(a.c_str()){}
   /* MyString(const MyString& a){
        str=new char[a.length()+1];
        for(int i=0;i<a.length();i++){
            str[i]=a.c_str()[i];   
        }
       str[a.length()]='\0';
       size=a.length();
    }*/
    ~MyString(){delete[] str;}
   MyString& operator=(const MyString& a){
       if(this!=&a){
           delete[] this->str;
           this->str= new char[a.length()+1];
           for(int i=0;i<a.length();i++){
            this->str[i]=a.c_str()[i];   
        }
    
        str[a.length()]='\0';
        size=a.length();
       }
       return *this;
    }
    MyString& operator+=(const MyString& ms1){
        char * str2= new char[size];
        for(int i=0;i<size;i++){
            str2[i]=str[i];
        }
        delete[] str;
        str= new char[size+ms1.length()+1];
        for(int i=0;i<size;i++){
            str[i]=str2[i];
        }
        delete[] str2;
        for(int i=0;i<ms1.length();i++){
            str[i+size]=ms1.c_str()[i];
        }
        size+=ms1.length();
        str[size]='\0';
        return *this;

    }

    MyString operator+(const MyString& ms2){
         MyString ms (*this);
         return ms += ms2;
    }

    bool operator==(const MyString& ms1){
        return strcmp(this->str,ms1.c_str())==0;
    }

    friend ostream& operator<<(ostream& os, const MyString& ms1){
        os<<"\""<<ms1.c_str()<<"\"";
        return os;
    }
    char& operator[](int index){return str[index];}

    int length() const {return size;}
    const char* c_str() const {return str;}
    
};


int main(){
    MyString ms1("Hello");
    MyString ms2("World");
    MyString ms3 = ms1 + " " + ms2;
    std::cout << ms3 << std::endl;
    std::cout << ((ms3 == "Hello World") ? "Same strings\n" : "Different strings\n");
   
} 