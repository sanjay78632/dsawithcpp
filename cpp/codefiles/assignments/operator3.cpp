#include<iostream>

using namespace std;

int main(){
        int userPurchase;
        bool ismember;
        cout<<"Enter the Cups you want to buy :";
        cin>>userPurchase;
        cout<<"If you are Member more than 1 year press 1 for Yes and 0 for No :";
        cin>>ismember;

        if(ismember || userPurchase > 12){
            cout<<"You Are Eligible for Discount!!"<<endl;
        }
        else{
            cout<<"You are not Eligible for Discount!!"<<endl;
        }

    return 0;
}