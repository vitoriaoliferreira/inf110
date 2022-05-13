#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    double delta, x1,x2;
    
    cin>> a;
    cin>> b;
    cin>> c;

    delta= pow(b,2)-4*a*c;
    x1= (-b + sqrt(delta))/(2*a);
    x2= (-b - sqrt(delta))/(2*a);
   
    cout <<  fixed << setprecision(4) << x1<< " "<<x2 << endl;

    return 0;
    }