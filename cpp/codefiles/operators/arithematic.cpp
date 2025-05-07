#include<iostream>

using namespace std;
int main(){
        int numberofCup=0;
        float priceperCup=0,totalprice=0,discountedPrice=0;

        cout<<"Enter the Number of Tea Cups You Want :";
        cin>>numberofCup;
        cout<<"Enter the Price per Cup :";
        cin>>priceperCup;

        
        totalprice= numberofCup*priceperCup;
        if(totalprice>100){
            discountedPrice=totalprice- (totalprice*0.05);
            cout<<"The Total is "<<totalprice<<"\nThe Payable amount after discount is "<<discountedPrice<<endl;
        }
        else{
            cout<<"The Total bill is "<<totalprice <<endl;
        }

        

    return 0;
}