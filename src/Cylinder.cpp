# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include<iomanip>
#include<cmath>
double pi = M_PI;
//const double pi = 3.1415926535897932384626433; 

double Cylinder :: SurfaceArea(){
    double area = Cylinder::Circumference() * height +  pi * radius * radius * 2;
    return area;
}

double Cylinder :: Volume(){
    double area = pi * radius * radius;
    return area * height;
}

double Cylinder :: Circumference(){
    double area = pi *radius * 2;
    return area;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    cin >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{ 
    cout << "Circumference: ";
    cout << fixed << std::setprecision(3) << cldr.Circumference() << '\n';
    cout << "SurfaceArea: ";
    cout << fixed << std::setprecision(3) << cldr.SurfaceArea() << '\n';
    cout << "Volume: ";
    cout << fixed << std::setprecision(3) << cldr.Volume();
    return out;
}

# endif
