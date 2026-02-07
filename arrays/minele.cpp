#include<iostream> 

using namespace std; 

int main ( )
{ 
    int n ; 
    int min ; 
    int pos ; 
    cin >> n ; 
    long long arr [n] ; 
    for (int i = 0 ; i <  n ; i++)
    {
        cin >> arr[i];
    }
    min = arr[0]; 
    pos =  1 ;  
    for ( int i = 1 ; i < n  ; i++){
        if (arr[i] < min){
            min = arr[i]; 
            pos = i + 1 ; 
        }
    }

    
    cout << min << " " << pos << endl ; 

 
    return 0 ; 
}