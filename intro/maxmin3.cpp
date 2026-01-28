#include<iostream>

using namespace std ; 


int main ( ){
    int m  , n , o ; 
    int max , min ; 

    cin >> m >> n >> o ; 


    if ( m > n && m  > o ){
        max = m ; 
    }else if ( n  > m  &&  n > o  ){
        max =  n ;
    }else {
        max = o ; 
    }
    if ( m < n && m < o ){
        min = m ; 
    } else if ( n < m && n < o ){
        min = n ; 
    }else {
        min = o ; 
    }
    cout << "Min" << " = " << min << endl ; 
    cout << "Max" << " = " << max << endl ; 

    return 0 ; 
}