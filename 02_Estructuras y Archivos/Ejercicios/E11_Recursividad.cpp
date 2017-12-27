    //Construir una funcion recursiva para encontrar la suma de los primeros N-pares
    
    #include <string>
    #include <iostream>
    #include <exception>
    using namespace std;
    
    int sumaPar(int N);
    int sumaTotal(int N);
    
    int main()
    {   
        int X,N,Y;
        cout<<"Introdusca los valores de N "<<endl;
        cin>>N;
        X=sumaPar(N);
        cout<<"Resultado sumaPar: "<<X<<" "<<endl;
    
        Y=sumaTotal(N);
        cout<<"Resultado sumaTotal: "<<Y<<" "<<endl;
        system("Pause");
        }
    
    
    int sumaPar(int N) //Ejercicio 1
    { 
        int R;
        if(N==0)
                R=0;
        else if(N%2==0)
                R=N+sumaPar(N-1);
        return R;
        }
        
    //Suma de los primeros N numeros
    
    int sumaTotal(int N)
    {
        int suma;
            if(N==0)
                suma=0;
            else
                suma=N+sumaTotal(N-1);
                return suma;
    }
        
           
    
