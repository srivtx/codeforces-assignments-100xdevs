#include<iostream> 

using namespace std; 

int main ( )
{ 
    int n ; 
    int ele ; 
    int count ; 

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
            count ++ ; 
        }
    }


    cout << count << endl ; 

   

 
    return 0 ; 
}