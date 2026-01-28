#include<iostream> 
using namespace std; 

int main () {
  double area ; 
  double peri ; 

  double len ; 
  double br ; 

  cin >> len  >> br ; 
  area = len * br ; 
  peri = 2 * ( len + br); 
  
  cout << "Area = " << area << endl ; 
  cout << "Perimeter = " << peri << endl ; 

  return 0 ; 
}