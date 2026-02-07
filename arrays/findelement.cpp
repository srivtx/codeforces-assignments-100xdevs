#include<iostream> 

using namespace std; 

int main ( )
{ 
    int n ; 
    int ele ; 
    int pre ; 
    pre = false ; 

    cin >> n ; 
    cin >> ele ; 


    long long arr [n] ; 
    for (int i = 0 ; i <  n ; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i++)
    {
        if (arr[i] == ele){
            pre = true ; 
        }
    }

    if ( pre ){
        cout << "YES" << endl ; 
    }else {
        cout << "NO" << endl ; 
    }

 
    return 0 ; 
}