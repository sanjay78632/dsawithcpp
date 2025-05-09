#include <iostream>

using namespace std;

int main(){
    //lambda function  declaration
    auto x = [](int cups){
        cout<<"preparing the "<<cups<<"no of cups";
    };

    x(4);
    //explored new datatype auto

    return 0;
}

