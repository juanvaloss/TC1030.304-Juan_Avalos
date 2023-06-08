#ifndef AUTOPARTE_H
#define AUTOPARTE_H

#include <iostream>
#include <string>

using namespace std;
 
// Creamos la clase padre "Autoparte"
class Autoparte{
	protected:
		string tipoAutoparte;    // Declaramos los atributos que los objetos de esta clase tendran, estos
		string nombre;          // estarán en "protected" para que puedan ser heredados por los hijos
		float precio;
		int modelo;
		string condicion;
		
	public:
		// Declaramos Constructores
		Autoparte(string tip, string nom, float pre, int mod, string con);
		Autoparte(string tip, string nom, float pre);
		
		// Declaramos y desarrollamos setters
		string get_tipoAutoparte(){ return tipoAutoparte;}
		string get_nombre(){ return nombre;}
		float get_precio(){return precio;};
		float get_modelo(){return precio;};
		float get_condicion(){return precio;};

		// Declaramos setters
		void set_tipoAutoparte(string tp);
		void set_nombre(string nm);
		void set_precio(float pr);
		void set_modelo(int md);
		void set_condicion(string cn);

		// Declaramos el metodo "PrintData", este será virtual ya que aplicaremos polimorfismo para esta misma funcion en las clases hijas
        virtual void printData() = 0;  // Hacemos que la clase padre sea abstracta para que en el main no se puedan crear objetos de esta clase, solo de las clases hijas
};

// Desarrollamos constructores de la clase padre
Autoparte::Autoparte(string tip, string nom, float pre, int mod, string con){
	tipoAutoparte = tip;
	nombre = nom;
	precio = pre;
	modelo = mod;
	condicion = con;
}

Autoparte::Autoparte(string tip, string nom, float pre){
	tipoAutoparte = tip;
	nombre = nom;
	precio = pre;
	modelo = 0;
	condicion = "condicion desconocida";
}


// Desarrollamos setters
void Autoparte::set_tipoAutoparte(string tp){
	tipoAutoparte =  tp;
}
void Autoparte::set_nombre(string nm){
	nombre =  nm;
}
void Autoparte::set_precio(float pr){
	precio =  pr;
}
void Autoparte::set_modelo(int md){
	modelo =  md;
}
void Autoparte::set_condicion(string cn){
	condicion =  cn;
}


// Desarrollamos el metodo "PrintData"
void Autoparte::printData (){
    cout << " " << endl;
    cout << "Tipo de autoparte:  " << tipoAutoparte << endl;
	cout << "Nombre:  " << nombre << endl;
    cout << "Precio:  " << precio << endl;
    cout << "Modelo:  " << modelo << endl;
    cout << "Condicion  " << condicion << endl;
}


// Creamos la clase hija "Motor" y le agregamos herencia de las clase Autoparte
class Motor : public Autoparte{
	
	private:
		// Declaramos los atributos que los objetos de la clase hija tendran aparte de los de la clase padre
		int numCilindros;
		string estado;
	
	public:
		// Declaramos y desarrollamos el constructor de la clase hija
		Motor(string tip, string nom, float pre, int mod, string con, int numCil, string est):Autoparte(tip, nom, pre, mod, con){
			numCilindros = numCil;
			estado = est;
		}

		// Declaramos y desarrollamos getters
		int get_numCilindros(){ return numCilindros;}
		string get_nombre(){ return estado;}

		// Declaramos setters
		void set_numCilindros(int nm);
		void set_estado(string est);
		
		// Declaramos el metodo "printData"
		void printData ();
};

// Desarrollamos setters
void Motor::set_numCilindros(int nm){
	numCilindros =  nm;
}
void Motor::set_estado(string est){
	estado =  est;
}

// Desarrollamos el metodo "printData" para la clase "Motor"
void Motor :: printData (){
    cout << " " << endl;
    cout << "Tipo de autoparte:  " << tipoAutoparte << endl;
	cout << "Nombre:  " << nombre << endl;
    cout << "Precio:  " << precio << endl;
    cout << "Modelo:  " << modelo << endl;
    cout << "Condicion  " << condicion << endl;
	cout << "Numero de cilindros:  " << numCilindros << endl;
	cout << "Estado:  " << estado << endl;
}


// Creamos la clase hija "Cabeza" y le agregamos herencia de las clase Autoparte
class Cabeza : public Autoparte{
	private:
		// Declaramos los atributos que los objetos de la clase hija tendran aparte de los de la clase padre
		int numArboles;
		int numValvulas;
	
	public:
		// Declaramos y desarrollamos el constructor de la clase hija
		Cabeza(string tip, string nom, float pre, int mod, string con, int numAr, int numVal):Autoparte(tip, nom, pre, mod, con){
			numArboles = numAr;
			numValvulas = numVal;
		}

		// Declaramos y desarrollamos getters
		int get_numArboles(){ return numArboles;}
		int get_numvalvulas(){ return numValvulas;}
		
		// Declaramos setters
		void set_numArboles(int nm);
		void set_numValvulas(int nm);
		
		// Declaramos el metodo "printData"
		void printData ();
};

// Desarrollamos setters
void Cabeza::set_numArboles(int nm){
	numArboles =  nm;
}
void Cabeza::set_numValvulas(int nm){
	numValvulas =  nm;
}

// Desarrollamos el metodo "printData" para la clase "Cabeza"
void Cabeza :: printData (){
    cout << " " << endl;
    cout << "Tipo de autoparte:  " << tipoAutoparte << endl;
	cout << "Nombre:  " << nombre << endl;
    cout << "Precio:  " << precio << endl;
    cout << "Modelo:  " << modelo << endl;
    cout << "Condicion  " << condicion << endl;
	cout << "Numero de arboles:  " << numArboles << endl;
	cout << "Numero de valvulas:  " << numValvulas << endl;
}


// Creamos la clase hija "Transmision" y le agregamos herencia de las clase Autoparte
class Transmision : public Autoparte{
	private:
		// Declaramos los atributos que los objetos de la clase hija tendran aparte de los de la clase padre
		int numVelocidades;
		string tipoTransmision;
	
	public:
		// Declaramos y desarrollamos el constructor de la clase hija
		Transmision(string tip, string nom, float pre, int mod, string con, int numVel, string tipT):Autoparte(tip, nom, pre, mod, con){
			numVelocidades = numVel;
			tipoTransmision = tipT;
		}

		// Declaramos y desarrollamos getters
		int get_numVelocidades(){ return numVelocidades;}
		string get_tipoTransmisio(){ return tipoTransmision;}

		// Declaramos setters
		void set_numVelocidades(int nm);
		void set_tipoTransmision(string tipT);
		
		// Declaramos el metodo "printData"
		void printData ();
};

// Desarrollamos setters
void Transmision::set_numVelocidades(int nm){
	numVelocidades =  nm;
}
void Transmision::set_tipoTransmision(string tipT){
	tipoTransmision =  tipT;
}

// Desarrollamos el metodo "printData" para la clase "Transmision"
void Transmision :: printData (){
    cout << " " << endl;
    cout << "Tipo de autoparte:  " << tipoAutoparte << endl;
	cout << "Nombre:  " << nombre << endl;
    cout << "Precio:  " << precio << endl;
    cout << "Modelo:  " << modelo << endl;
    cout << "Condicion  " << condicion << endl;
	cout << "Numero de Velocidades:  " << numVelocidades << endl;
	cout << "Tipo de transmision:  " << tipoTransmision << endl;
}
#endif
