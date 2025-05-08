#include<iostream>
#include<string>


using namespace std;

int main(){

    string teaTypes[3]={"Lemon Tea" ,"Green Tea","Black Tea"};

    for(int i=0;i<3;i++){
        cout<< "Brewing "<<teaTypes[i]<<"..."<<endl;

        for(int j=0;j<2;j++){
            cout<<"Brewing the " <<j <<"cup of " <<teaTypes[i]<<endl;
        }
    }

    return 0;
}

