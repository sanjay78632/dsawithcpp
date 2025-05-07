#include<iostream>

using namespace std;
 int main(){
    int numberofCups;
     cout<<"Enter the number of Tea Cups you Bought :";
     cin>>numberofCups;

     if(numberofCups>20 ){
        cout<<"You Got GOLD Badge!!"<<endl;
     }
     else if( numberofCups>=10 && numberofCups<=20){
        cout<<"You Got Silver Badge !"<<endl;
     }
     else{
        cout<<"OOPs  No badge for you !"<<endl;
     }


    return 0;
 }