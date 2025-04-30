#include<iostream>

using namespace std;

int main(){

    float teaLeaves = 49.99;
    
    int roundedTeaprice = (int) teaLeaves;
   
    cout << "The  Number of  Tea leaves are "<< teaLeaves <<endl;
    cout << "The  Number of    Tea leaves after casting "<< roundedTeaprice <<endl;
    return 0;
}
