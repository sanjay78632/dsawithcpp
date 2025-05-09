#include<iostream>

using namespace std;
    //superman is just a placeholder now the reference is passed when & is used 
    void pourChai(int &superman){
        superman+=5;
        cout<<"Value inside the Function: "<<superman<<endl;
    }
int main(){

    int cups=3;
    pourChai(cups);
    cout<<"Value in main method :"<<cups<<endl;
    return 0;
}