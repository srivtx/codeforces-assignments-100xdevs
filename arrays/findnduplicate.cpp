#include <iostream> 

using namespace std ; 
int main ( )
{
    int n ; 
    cin >> n ; 

    for (int i = 0 ; i < n ; i++){
        int num ; 
        cin >> num ; 
        long long arr[num]; 

        for (int i = 0 ; i < num ; i++){
            cin >> arr[i]; 
        }
        int missing ; 

        for ( int i = 0 ; i < num ;  i++){
            int occr  = 0 ; 
            for(int j = 0  ; j <  num ; j++){
                if (arr[i] == arr[j]){
                    occr++; 
                }
            }

            if (occr > 1 ){
                missing =  arr[i]; 
                cout << missing ; 
                break ; 
            }
        }


    cout << endl ; 
    }
    return 0 ; 
}