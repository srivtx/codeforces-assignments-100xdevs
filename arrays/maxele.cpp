#include<iostream> 

using namespace std; 

int main ( )
{ 
    int n ; 
    int max ; 
    int pos ; 
    cin >> n ; 
    long long arr [n] ; 
    for (int i = 0 ; i <  n ; i++)
    {
        cin >> arr[i];
    }
    max = arr[0]; 
    pos =  1 ;  
    for ( int i = 1 ; i < n  ; i++){
        if (arr[i] > max){
            max = arr[i]; 
            pos = i + 1 ; 
        }
    }

    
    cout << max << " " << pos << endl ; 

 
    return 0 ; 
}