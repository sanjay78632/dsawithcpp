#include<iostream>
#include<string>


using namespace std;

int main(){
    string response;

    while(true){
        cout<<"Do you want more Tea  (type 'stop' to exit )? : "<<endl;
        getline(cin,response);

        if(response=="stop" || response=="STOP"){
            break;
        }
        cout<<"Here is another cup of tea"<<endl;
    }
    cout<<"No more Teas"<<endl;
    return 0;
}