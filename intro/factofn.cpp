#include<iostream>

using namespace std ; 

int main (){
    int m , n ; 
    cin >> m >> n ; 
    if ( m  % n  == 0 ){
        cout << "Yes" << endl ; 
    }else {
        cout << "No" << endl ;
    }
    return 0 ; 
}