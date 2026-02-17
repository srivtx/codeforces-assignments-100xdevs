#include<iostream> 

using namespace std; 

int main ( )
{
    int x ;
    cin >> x ;  

    for (int i = 1 ; i <= x ; i++ ){


        int count ; 
        cin >> count ; 
        long long arr[count];
        
        int cz = 0 ; 
        int co = 0 ; 


        for (int j = 0 ; j < count ; j++)
        {
            cin >> arr[j]; 
        }

        for ( int k = 0 ; k < count ; k++ ){
            if (arr[k] == 0){
                cz++ ; 
            }else if ( arr[k] ==1 ){
                co++; 
            }
        }
        
       for(int i = 0 ; i < cz ; i++){
        cout << 0 << " "; 
    }
       for (int i = 0 ; i < co ; i++){
        cout << 1 << " "; 
       } 
       cout << endl ;  
    }


    return 0 ; 
}