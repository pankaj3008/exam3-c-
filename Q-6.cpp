#include<iostream>
using namespace std ;
int main(){
    int i , j , k , l , m ;
    for(i = 1 ; i <= 5 ; i++){
        for(j = 1 ; j <= i ; j++){
            cout<<j<<" ";
        }
        for(k = 4 ; k >= i ; k--){
            cout<<" ";
        }
        for(k = 4 ; k >= i ; k--){
            cout<<"   ";
        }
            for(l = i ; l >= 1 ; l--){
                cout<<l<<" ";
            }
        cout<<endl;
    }
    return 0 ;
}