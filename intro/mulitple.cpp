#include<iostream>

using namespace std ; 

int main (){
    int m , n ; 
    cin >> m >> n ; 
    if ( n % m  == 0 ){
        cout << "Yes" << endl ; 
    }else {
        cout << "No" << endl ;
    }
    return 0 ; 
}