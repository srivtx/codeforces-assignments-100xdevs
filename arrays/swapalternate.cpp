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

        for (int i = 0 ; i < num - 1 ; i = i + 2){
            swap(arr[i], arr[i+1]); 
        }

        for(int i = 0 ; i < num ; i++){
            cout << arr[i] << " "; 
        }
    cout << endl ; 
    }
    return 0 ; 
}