#include<iostream>

using namespace std;

int main(){

    int teaCups;

    cout<<"Enter the number of tea cups to serve :";
    cin>>teaCups;

    while(teaCups>0){
        cout<<"Serving a cup of tea\n"<<teaCups<<"remaining"<<endl;
        teaCups--;

    }
    cout<<"All the Tea cups are served!!"<<endl;

    return 0;
}