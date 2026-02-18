#include <iostream> 

using namespace std ; 
int main ( )
{
    int n ; 
    cin >> n ; 

    for (int i = 0 ; i < n ; i++){
        int num ; 
        int num2 ; 

        cin >> num ; 
        long long arr[num]; 
        
       
        for (int i = 0 ; i < num ; i++){
            cin >> arr[i]; 
        }
        cin >> num2 ; 
        long long arr2[num2];

    for(int i = 0 ; i < num2 ; i++){
        cin >> arr2[i]; 
    }


        for ( int i = 0 ; i < num ;  i++){
            for(int j = 0  ; j <  num2 ; j++){
                if (arr[i] == arr2[j]){
                    cout << arr[i] << " "; 
                    arr2[j] = -1 ; 
                    break ; 
                }
            }

        } 
       


    cout << endl ; 
    }
    return 0 ; 
}