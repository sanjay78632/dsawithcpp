#include<iostream>

using namespace std;

int main(){
    int numberofCups;
    float pricePerpack,totalPrice,finalPrice;

    cout<<"Enter the Number of Tea bags you want :";
    cin>>numberofCups;
    cout<<"Enter the Price per pack :";
    cin>>pricePerpack;

    totalPrice= numberofCups*pricePerpack;
    finalPrice = totalPrice + (totalPrice*0.10);

    cout << "Total Price (before tax): " << totalPrice << endl;
    cout << "Final Price (after 10% tax): " << finalPrice << endl;

return 0;

}