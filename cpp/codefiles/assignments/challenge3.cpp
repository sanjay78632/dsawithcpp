#include <iostream>
#include <string>

using namespace std;

int main(){
    string favoriteTea;
    int cups;

    cout<<"Enter you Favorite Tea ?";
    getline(cin,favoriteTea);

    cout<<"Enter the Cups :";
    cin>>cups;

    cout<<"Great Choice! Here's"<<cups <<" cup" <<  favoriteTea << " coming right up!";
    return 0;
    
}