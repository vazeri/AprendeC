#include <iostream.h>
#include <dos.h>
#include <math.h>
#define L 10
#define H L
//VAZQUEZ GONZALEZ ERICK 

void GaussSeidel(void);
int main()
{
	GaussSeidel();
	return 1;
}
void GaussSeidel(void)
{
    float A[L][H],X[L],CX[L],C[L];
	float e,f;
	int i,n,x,y;
	
    cout<<"               Gauss Seidel"<<endl;
   
	
         cout<<"\n\nDe cuantas incognitas es el sistema?: ";
		cin>>n;
		for(x=0;x<n;x++)
		{
		      	CX[x]=0;
		    	X[x]=0;
		}
		for(y=0;y<n;y++)
		{
            cout<<"\nEcuacion "<<y+1<<":"<<endl;            
			for(x=0;x<n;x++)
			{
				cout<<"E["<<y+1<<"]["<<x+1<<"]= ";
                cin>>e;
				A[y][x]=e;
			}
			cout<<"C["<<y+1<<"]= ";
			cin>>f;
			C[y]=f;
			}
			
    for(i=0;i<20;i++)
	{
     	for(y=0;y<n;y++)
        {
		   for(x=0;x<n;x++)
		   {
              if(x!=y)
		      CX[y]-=(A[y][x]*X[x]);
           }
		   CX[y]+=C[y];
		   CX[y]=CX[y]/A[y][y];
		   X[y]=CX[y];
		   CX[y]=0;
	     }	
	  cout<<"\n\nIteracion "<<i+1<<":";
      for(x=0;x<n;x++)
      {
          cout<<"\n\nX["<<x+1<<"]= "<<X[x]<<endl;
      }
      cout<<endl;
      system("pause");
      system("cls");
	}
}
