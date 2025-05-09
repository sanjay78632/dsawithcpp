#include<iostream>

using namespace std;

int checkTemprature(int temprature){
    return temprature;
}

//declaration of the function
void serveChai(int cups);

int main(){
    int result;
    result=checkTemprature(40);
    cout<<result;
    serveChai(2);
    return 0;
}

//defination of the function
void serveChai(int cups){
    cout<<"\nServing "<<cups<<" of Chai"<<endl;
}
