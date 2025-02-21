#include<iostream>
using namespace std;
int main(){
    int i , j ;
    for(i = 1 ; i <= 5 ; i ++){
        if(i == 1 || i == 3){
            for(j = 1 ; j <= 5 ; j ++){
                cout<<"* ";
            }
            cout<<endl;
        }
        if(i == 2){
            cout<<"*   ";
            cout<<"    *";
            cout<<endl;
        }
        if(i == 4 || i == 5){
            cout<<"* ";
            cout<<endl;
        }
    }
    cout<<endl;
}