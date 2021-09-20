
#include <iostream>				// for cin, cout, endl
using namespace std;


class Triangle{
	public:
		int side1;
		int side2;
		int side3;
		
	int calc()
	{
		return side1 + side2 +side3;
	}
};

int main()						
{ 
    Triangle tri;
   	int perimeter;
    
    
    tri.side1 = 3;
    tri.side2 = 4;
    tri.side3 = 5;
    
    perimeter = tri.calc();
    
    cout << "Perimeter = " << perimeter << endl;

    return 0;
	           

}                               // end of main function

