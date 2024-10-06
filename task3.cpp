#include <iostream>
using namespace std;


main()
{
           char p;
           cout << "Enter the_vehicle_type_code(M,E,S,V,T) :";
           cin>>p;
           float m;
           cout << "Enter the_price_of_the_vehicle :";
           cin>>m;
           if (p == 'M')
           {
           float x;
           x = m*(0.06);
           float O;
           O = m+x;
           cout << "The final price of vehicle of type " << p << " is " << O;
           }
           if (p =='E')
           {
           float L;
           L= m+(m*0.08);
           cout << "The final price of vehicle of type " << p << " is " << L;
           }
           if (p =='S')
           {
           float K;
           K= m+(m*0.10);
           cout << "The final price of vehicle of type " << p << "is" << K;
           }
           if (p =='V')
           {
           float J;
           J= m+(m*0.12);
           cout << "The final price of vehicle of type " << p << " is " << J;
           }
           if (p =='T')
           {
           float U;
           U= m+(m*0.15);
           cout << "The final price of vehicle of type " << p << " is " << U;
           }
           
}
