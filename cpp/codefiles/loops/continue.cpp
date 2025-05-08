#include<iostream>
#include<string>
using namespace std;

int main(){
    string teaTypes[3]={"Lemon Tea" ,"Green Tea","Black Tea"};
    for(int i=0;i<3;i++){
        if(teaTypes[i]=="Green Tea"){
        cout<<"Skipping the Green Tea"<<endl;
        continue;
    }
    cout<<"Brewing the :"<<teaTypes[i]<<endl;
}

    return 0;

}