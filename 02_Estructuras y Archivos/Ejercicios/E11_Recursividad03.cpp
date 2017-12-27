//implementar procedimiento recursivo para encontrar X^n
    
    #include <string>
    #include <iostream>
    #include <exception>
    using namespace std;
    
    int Potencia(int X, int N);
    
    int main()
    {   
        int X,N;
        cout<<"El valor N "<<endl;
        cin>>N;
        X=Potencia(X,N);
        cout<<"Resultado Potencia: "<<X<<" "<<endl;
        system("Pause");
        }

int Potencia(int X, int N)
{ 
    int R;
    if(N==0)
            R=1;
    else if(N>0)
            R=N*Potencia(X,N-1);
    else 
         R=1/(X*Potencia(X,N));
    return R;
}
    
