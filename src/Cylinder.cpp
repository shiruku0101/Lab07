# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <iomanip>
#include <cmath>
double Cylinder :: SurfaceArea(){
    
    return((M_PI*2*radius*height)+(M_PI*2*radius*radius)) ;
}

double Cylinder :: Volume(){

    return (M_PI*radius*radius*height) ;
}

double Cylinder :: Circumference(){

    return(M_PI*2*radius) ;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in ;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<fixed<<setprecision(3);
    out<<"Circumference: "<<cldr.Circumference()<<endl;
    out<<"SurfaceArea: "<<cldr.SurfaceArea()<<endl;
    out<<"Volume: "<<cldr.Volume();   
    return out;
}

# endif
