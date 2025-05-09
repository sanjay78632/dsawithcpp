#include<iostream>
#include<vector>

using namespace std;

class Chai{
  public:
    //data members (attributes)
        string teaName; //names of tea
        int servings; //number of servings
        vector<string> ingredients; // list of ingredients

        //Member function
        void displayDetails(){
            cout<<"Tea name:"<< teaName<<endl;
            cout<<"Servings :"<< servings<<endl;
            cout<<"Ingredients :";
            for(string ingredient : ingredients){
                cout<<ingredient<<" ";
        }
        cout<< endl;
    }


};

int main(){
        Chai chaiOne;
        chaiOne.teaName="Lemon Tea";
        chaiOne.servings=2;
        chaiOne.ingredients={"Water","Lemon","Honey","Tea"};
        chaiOne.displayDetails();
        Chai chaitwo;
        chaitwo.teaName="Masala Chai";
        chaitwo.servings=5;
        chaitwo.ingredients={"Water","Milk","Tea","Ginger","Masala"};
        chaitwo.displayDetails();

        


    return 0;
}