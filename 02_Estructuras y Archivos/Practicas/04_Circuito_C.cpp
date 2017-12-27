#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#define pi 3.1416
 
using namespace std;

class cCircuito{
      protected:
       float E, F, L, C, R;
      public:             
       cCircuito(){                            //Constructor 
                E=250;//Volts
                F=60;//Ciclos por segundo
                L=.008;//mili Hertz
                C=.000006;//micro Faradios
                R=300;//Ohms
                }                
~cCircuito(){} //Destructor
      };
      
class cFormulas:public cCircuito{
      protected:
                double X,XL,XC;          
      public:
             cFormulas(){
                         X=0;
                         XL=0;
                         XC=0;
                         }
                         
float operaciones(){                     
      XL=2*pi*F*L;
      XC=(1)/(2*pi*F*L);

if (XC>XL)
   X=XC-XL;
if (XL>XC)
   X=XL-XC;}
   
};


class rTotal:public cFormulas{
      protected:
             double RT,I;
      public:
             rTotal(){
                      RT=0;
                      I=0;//Amperes}

float operaciones2(){                     
   RT=sqrt(R^2+X^2);//RT
   I=E/RT;}
float operaciones()::cFormulas
       }; 
                 
int main()
{
rTotal z;
z.operaciones2;
} }
