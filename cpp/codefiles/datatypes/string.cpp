#include<iostream>
#include<string>
using namespace std;

int main(){

    string favoriteTea= "Lemon Tea \n";
    string description ="Known as a \t \"bestTea\"";

    //learned about escape sequences also;

    cout << favoriteTea ;
    cout << description <<endl;
    string userinput;
    cout<<"Enter the User Input:";
    getline(cin,userinput);
    
    return 0;
}
