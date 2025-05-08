#include<iostream>
#include<string>
using namespace std;

int main(){
    string  userInput;
    do{
        cout<<"Do you want more Tea: (yes/no) :";
        getline(cin,userInput);

    }while (userInput != "no" && userInput !="NO");
    
    
    
    return 0;
}