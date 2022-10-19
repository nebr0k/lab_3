#include <iostream>
#include "Point.h"
using namespace std;





int main()
{
    Point a(6,5);
    a.Read();
    a.Display();
    a.reduced();
    cout << " product " << a.product() << endl;

    
}