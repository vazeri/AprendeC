#include <iostream>
#include <string>

using namespace std;

class cPoligono{

protected:
    int base;
    int altura;  
                     
public:

      void FijarValor(int a ,int b){
           base=b;
           altura=a;    };
      void Area(int a ,int b);
      };

class cRectangulo:public cPoligono{
      public:int Area(){
          return base*altura;
          }
      };

class cTriangulo:public cPoligono{
      public:int Area(){
          return (base*altura)/2;
          }
      };

int main()
{
    cRectangulo R;
    cTriangulo T;
    cPoligono *apR=&R;
    cPoligono *apT=&T;
    apR->FijarValor(8,10);
    apR->FijarValor(8,10);
    cout<<"El Area del Rectangulo es:"<<R.Area()<<endl;
    cout<<"El Area del Rectangulo es:"<<T.Area()<<endl;
    system("pause");
    return 0;
    }

