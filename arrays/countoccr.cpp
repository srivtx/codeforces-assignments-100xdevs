#include<iostream> 

using namespace std; 

int main ( )
{ 
    long n ; 
    int ele ; 
    int count = 0 ; 

    cin >> n ; 
    cin >> ele ; 


    long long arr [n] ; 
    for (int i = 0 ; i <  n ; i++)
    {
        cin >> arr[i];
    }

    for(int j = 0 ; j < n ; j++)
    {
        if (arr[j] == ele){
            count ++ ; 
        }
    }


    cout << count << endl ; 

   

 
    return 0 ; 
}