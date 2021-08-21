#include<iostream>
#include<tuple> // for tuple
using namespace std;
int main()
{
    //  
    tuple <float, int, char, double> different_type;
  
    // Assigning values to tuple using make_tuple()
    different_type = make_tuple(9.6, 10, 'v', 3.7773784893);
  
    // tuple values 
   
    cout << get<0>(different_type) << " " << get<1>(different_type);
    cout << " " << get<2>(different_type) << " "<< get<3>(different_type)<< endl;
  
    //  to change values of tuple use of get() function 
    get<0>(different_type) = 6.4;
    get<2>(different_type) =  'y';
    cout << " "<< endl;

  
     // Tuple values modified
  
    cout << get<0>(different_type) <<" "<< get<1>(different_type);
    cout <<" "<< get<2>(different_type) <<" "<< get<3>(different_type) << endl;
}