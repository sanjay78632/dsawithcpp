#include<iostream>

using namespace std;

int main(){
    int teaBags;

    cout<<"Enter the number of tea bags you have : ";
    cin>>teaBags;

    if(teaBags<10){
        teaBags+=5;
        cout<<"You had fewer tea bags than 10 so 5 bags are added !! now you have "<<teaBags <<" teabags"<<endl;
    }
    else {
        cout<<"You have :"<<teaBags<<" Tea bags"<<endl;
    }

    return 0;
}