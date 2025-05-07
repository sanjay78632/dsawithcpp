#include<iostream>

using namespace std;

int main(){
        bool isStudent;
        int cupCount;

        cout<<"Are you Student : press (1 for Yes and 0 for No) : ";
        cin>>isStudent;
        cout<<"Enter the Number of  Cups you bought :";
        cin>>cupCount;

        if( isStudent || cupCount>15){
            cout<<"You Are eligible for discount";
        }
        else{
            cout<<"You Are  Not eligible for discount";
        }

    return 0;

}