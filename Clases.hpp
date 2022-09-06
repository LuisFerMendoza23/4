#include <iostream>

using namespace std;

//===========================================CLASE PADRE:
class Figura{//-----------Clase padre
    public:
        virtual void dibujar(){ }
};

//===========================================CLASE CUADRADO:
class Cuadrado : public Figura{
	private: //Atributos
		int filas, columnas, tipo_cu, x, y;
	public: //Metodos
        Cuadrado(int, int);//P coordenadas
        int getX(); //Para condiciones coord x
        int getY(); //Para condiciones cood y
        void setFilas(int rows);
        int getFilas(); 
        void setColumnas(int columns);
        int getColumnas();
        void setTipo_cu(int _tipo_cu);
        int getTipo_cu();
		void dibujar();	
}; 

//===========================================CLASE TRIANGULO:
class Triangulo: public Figura {
	private://atributos
		int filas, x, y;
	public://metodos
        Triangulo(int, int); 
        void setFilas(int rows);
        int getFilas();
        int getX(); //Para condiciones coord x
        int getY(); //Para condiciones cood y
		void dibujar();
};

//===========================================CLASE CIRCULO:
class Circulo : public Figura{
    private://atributos
	    int filas, x, y;
    public://metodos
	    Circulo(int, int);
	    void setFilas(int rows);
	    int getFilas();
	    int getX(); //Para condiciones coord x
        int getY(); //Para condiciones cood y
	    void dibujar();
};

//============================================CLASE MENU
class InputManager{
    private: 
        int tipo_f, x, y, opc, tipo_cu;
    public:
        InputManager();
        void run(); //Para correr el menu
};