#include <iostream>
#include "Clases.hpp"

using namespace std;

//===================================================================================METODOS
//--------------------------------------------CUADRADO
//Constructor de cuadrado
Cuadrado::Cuadrado(int _x, int _y)
{
    x = _x;
    y = _y;
}
int Cuadrado::getX()//Condiciones coord x
{
    if(x<0)
	{
        x = 0;
    }
    else if(x > 30)
	{
        x = 30;
    }
     return x;
}
int Cuadrado::getY()//condiciones coord y
{
    if(y < 0)
	{
        y = 0;
    }
     else if(y > 30)
	{
    	y = 30;
    }
     return y;
}
void Cuadrado::setFilas(int rows)
{ 
    filas = rows;
}
int Cuadrado::getFilas()
{
    if(filas < 2)
    {        	
        filas = 2;
    }
    return filas;
}
void Cuadrado::setColumnas(int columns)
{
    columnas = columns;
}
 int Cuadrado::getColumnas()
{
    if(columnas<2)
    {
        columnas=2;
    }
    return columnas;
}
void Cuadrado::setTipo_cu(int _tipo_cu)
{
    tipo_cu = _tipo_cu;
}
int Cuadrado::getTipo_cu(){
    if(tipo_cu <1 || tipo_cu > 2)
    {
         tipo_cu = 1;
    }
    return tipo_cu;
}
void Cuadrado::dibujar()
{ //Movimiento de la figura
    char movimiento;
    while((movimiento=cin.get())!='q')
    { //Obtendrá la tecla cuando la presionemos
        system("cls");//limpia la pantalla
        cout<<"Tus coordenadas son: "<<endl;
        cout<<"X: "<<getX()<<endl;
        cout<<"Y: "<<getY()<<endl;
        if(x >= 30)
        {
            cout<<"Limite alcanzado"<<endl;
        }
        //Acciones de las coordenadas
        switch(movimiento)
        {
            case 'w': //Arriba
                y--;
            break;
            case 's': //Abajo
                y++;
            break;
            case 'a': //Izquierda
                x--;
            break;
            case 'd': //Derecha
                x++;
            break;      
        }
        // Control coordenadas:
        for (int i = 0; i < getY(); i++)
        { // Movimiento Y
            cout << endl;
        }
        for (int f = 0; f < getFilas(); f++)
        {
            for (int i = 0; i < getX(); i++)
            { // Movimiento X
                cout << " ";
            }
            for (int c = 0; c < getColumnas(); c++)
            {
                if (getTipo_cu() == 1)
                {
                    cout << "*";
                }
                else if (getTipo_cu() == 2)
                {
                    if (f == 0 || c == 0 || f == (filas - 1) || c == (columnas - 1))
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                else
                {
                    cout << "\nOpcion no encontrada" << endl;
                }
            }
            cout << endl;
        }
    }
}
//-------------------------------------------------------------TRIANGULO
//Constructor
Triangulo::Triangulo(int _x, int _y)
{
    x = _x;
    y = _y;
}
void Triangulo::setFilas(int rows)
{
    filas = rows;
}
int Triangulo::getFilas()
{
    if(filas<2)
    {
        filas = 2;
    }
    return filas;
}
int Triangulo::getX()//Condiciones coord x
{//Condiciones coord x
    if(x<0)
	{
        x = 0;
    }
    else if(x > 30)
	{
        x = 30;
    }
    return x;
}
int Triangulo::getY()
{//condiciones coord y
    if(y < 0)
	{
        y = 0;
    }
    else if(y > 30)
	{
        y = 30;
    }
    return y;
}
void Triangulo::dibujar()
{
    char movimiento;
    while ((movimiento=cin.get())!='q')
    {
        system("cls");//limpia la pantalla
        cout<<"Tus coordenadas son: "<<endl;
        cout<<"X: "<<getX()<<endl;
        cout<<"Y: "<<getY()<<endl;
        if(x >= 30)
        {
            cout<<"Limite alcanzado"<<endl;
        }
        //Acciones de las coordenadas
        switch(movimiento){
            case 'w': //Arriba
                y--;
            break;
            case 's': //Abajo
                y++;
            break;
            case 'a': //Izquierda
                x--;
            break;
            case 'd': //Derecha
                x++;
            break;
        }
        //Movimientos de las coordenadas
        for(int i=0; i<getY(); i++) //Movimiento de Y
        {
            cout<<endl;
        }
        for(int i=0; i<getFilas(); i++)
        {
            for(int i2=0; i2<getX(); i2++)//Movimiento de X
            {
                cout<<" ";
            }
            for(int j=0; j<(filas-1)-i; j++)
			{
				cout<<" ";
			}
			for(int j=0; j<(i*2)+1; j++)
			{
			    cout<<"*";
			}
			cout<<endl;
        }
    }
}
//-----------------------------------------------CIRCULO:
//Constructor
Circulo::Circulo(int _x, int _y)
{
    x = _x;
    y = _y;
}
void Circulo::setFilas(int rows)
{
    filas = rows; 
}
int Circulo::getFilas()
{
    if(filas<2)
    {
       filas=2;
    }
}
int Circulo::getX()
{
    if(x<0)
    {
        x=0;
    }
    else if(x>30)
    {
        x=30;
    }
}
int Circulo::getY()
{
    if(y<0)
    {
        y=0;
    }
    else if(y>30)
    {
        y=30;
    }
}
void Circulo::dibujar()
{
    char movimiento;
    while ((movimiento=cin.get())!='q')
    {
        system("cls");//limpia la pantalla
        cout<<"Tus coordenadas son: "<<endl;
        cout<<"X: "<<getX()<<endl;
        cout<<"Y: "<<getY()<<endl;
        if(x >= 30)
        {
            cout<<"Limite alcanzado"<<endl;
        }
        //Acciones de las coordenadas
        switch(movimiento)
        {
            case 'w': //Arriba
                y--;
            break;
            case 's': //Abajo
                y++;
            break;
            case 'a': //Izquierda
                x--;
            break;
            case 'd': //Derecha
                x++;
            break;
        }
        for(int i=0; i<getY(); i++)//Movimiento Y
        {
            cout<<endl;
        }
        //FOR para hacerlo en sentido bien
        for(int f=0; f<getFilas(); f++)
        {
            for(int i=0; i<getX(); i++)//MOvimiento X
            {
                cout<<" ";
            }
            //for para los espacios a la izquierda
            for(int c=0; c<(filas-1)-f;  c++) 
			{
				cout<<" ";
			}
            //for para imprimir los * 
			for(int c=0; c<(f*2)+1; c++)
			{
			    cout<<"*";
			}
			cout<<endl;
        }
        for(int f=filas-1; f>-1; f--)
		{
            for(int i=0; i<getX(); i++)//MOvimiento X
            {
                cout<<" ";
            }
			//for para los espacios a la izquierda
			for(int c=(filas-1)-f; c>-1;  c--)
			{
			    cout<<" ";
			}
			//for para imprimir los nasteriscos
			for(int c=((f-1)*2); c>-1; c--)
			{   
			    cout<<"*";
			}
			cout<<endl;
		}
    }      
}
//---------------------------------Lienzo
void lienzo(Figura *figura){
    figura->dibujar();
}
//---------------------------------MENÚ
InputManager::InputManager()
{
    int x = 0;
    int y = 0;
}
void InputManager::run()
{
    do{
        int filas, columnas;
        system("cls");
        // Mostrar-preguntar figuras
        cout << "Figuras: " << endl;
        cout << "1- Cuadrado / Rectangulo" << endl;
        cout << "   *** " << endl;
        cout << "   *** " << endl;
        cout << "   *** " << endl;
        cout << "2- triangulo" << endl;
        cout << "     * " << endl;
        cout << "    *** " << endl;
        cout << "   ***** " << endl;
        cout << "3- circulo/rombo" << endl;
        cout << "     * " << endl;
        cout << "    *** " << endl;
        cout << "   ***** " << endl;
        cout << "    *** " << endl;
        cout << "     * " << endl;
        cout << "\nQue figura desea: ";
        cin >> tipo_f;

        // Preguntar coordenadas
        system("cls");
        cout << "Coloque las coordenadas:" << endl;
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;

        // Ejecutar las opciones
        if (tipo_f == 1)
        {
            system("cls");
            cout << "Seleccione el tipo de cuadrado: " << endl;
            cout << "1- relleno | 2- hueco " << endl;
            cout << "   ***          ***" << endl;
            cout << "   ***          * *" << endl;
            cout << "   ***          ***" << endl;
            cin >> tipo_cu;
            // Medidas cuadrado
            system("cls");
            cout << "Coloque el numero de filas: " << endl;
            cin >> filas;
            cout << "Coloque el numero de columnas: " << endl;
            cin >> columnas;

            Cuadrado cuadrado1 = Cuadrado(x, y); // coordenadas
            cuadrado1.setFilas(filas);
            cuadrado1.setColumnas(columnas);
            cuadrado1.setTipo_cu(tipo_cu);
            lienzo(&cuadrado1);
        }
        else if (tipo_f == 2)
        {
            system("cls");
            cout << "Coloque el numero de filas(en impares): " << endl;
            cin >> filas;

            Triangulo triangulo1 = Triangulo(x, y); // coordenadas
            triangulo1.setFilas(filas);
            lienzo(&triangulo1);
        }
        else if (tipo_f == 3)
        {
            system("cls");
            cout << "Coloque el numero de filas(en impares): " << endl;
            cin >> filas;

            Circulo circulo1 = Circulo(x, y); // coordenadas
            circulo1.setFilas(filas);
            lienzo(&circulo1);
        }

        // Repeticion del programa
        cout << "Repetir programa? " << endl;
        cout << "1- si | 2- No ";
        cin >> opc;
    } while (opc == 1);
}