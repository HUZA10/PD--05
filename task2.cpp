#include <iostream>
using namespace std;

float find(float p,float m,float n);
main()
{
           float p;
           cout << "Enter the_lenght_of_the_pyramid(im meters) :";
           cin>>p;
           float m;
           cout << "Enter the_width_of_the_pyramid(im meters) :";
           cin>>m;
           float n;
           cout << "Enter the_height_of_the_pyramid(im meters) :";
           cin>>n;
           string t;
           cout << "Enter the_desired_output_unit(millimeter,centimeter,meter,kilometer) :";
           cin>>t;
           float L = find(p,m,n);
           if (t == "meter")
           {
           cout << "The volume of the pyramid is " << L << " cubic meter";
           }
           if (t =="centimeter")
           {
           float x;
           x=L*100000;
           cout << "The volume of the pyramid is " << x << " cubic centimeter";
           }
           if (t =="millimeter")
           {
           float k;
           k=L*100000000;
           cout << "The volume of the pyramid is" << k << " cubic millimeter ";
           }
           if (t =="kilometer")
           {
           float e;
           e = L/1000000000;
           cout << "The volume of the pyramid is " << e << " cubic kilometer ";
           }
           
}
float find(float p,float m,float n)
{
  float L;
  L =(p*m*n)/3;
  return L;
}