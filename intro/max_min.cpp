#include <iostream>

using namespace std ;

int  main (){
    int m , n ; 
    cin >> m >> n ; 

    if ( m > n ){
        cout << "Min" << " = " << n << endl ; 
        cout << "Max" << " = " << m << endl ; 
    }else {
        cout << "Min" << " = " << m << endl ; 
        cout << "Max" << " = " << n << endl ; 
    }
    return 0 ; 
}