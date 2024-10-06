#include <iostream>
#include <cmath>
using namespace std;

float projecttimecalculator(float p,float m,float n);
main()
{
           float p;
           cout << "Enter the_needed_hours :";
           cin>>p;
           float m;
           cout << "Enter the_days_the_film_has :";
           cin>>m;
           float n;
           cout << "Enter the_number_of_all_workers :";
           cin>>n;
           float T =  projecttimecalculator(p,m,n);
           if (T <= p)
           {
           float F;
           F = p - T;
           cout << "Not enough time ! " << F << " hours needed";
           }
           else
           {
           float M;
           M = T - p;
           cout << "Yes !" << M << " hours left";
           }
          
 }
           

float projecttimecalculator(float p,float m,float n)
{
  float L;
  L =n*m*10;
  float G;
  G =0.10*n*m*10;
  float T;
  T = L - G; 
  return T;
}