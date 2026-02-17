#include <iostream> 

using namespace std ; 
int main ( )
{
    int n ; 
    cin >> n ; 

    for (int i = 0 ; i < n ; i++){
        int num ; 
        cin >> num ; 

    for (int i = 1 ; i <= num ; i++){
        if (i % 2 == 1 ){
            cout <<  i << " " ; 
        }
    }

    for ( int i = num ; i > 1 ; i--){
        if (i % 2 == 0 ){
            cout << i << " "; 
        }
    }


    cout << endl ; 

    }
    return 0 ; 
}