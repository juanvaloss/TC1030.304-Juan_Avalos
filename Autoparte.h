#ifndef AUTOPARTE_H
#define AUTOPARTE_H

#include <iostream>
#include <string>

using namespace std;
 
class Autoparte{
	protected:
		string tipoAutoparte;
		string nombre;
		float precio;
		int modelo;
		string condicion;
		
	public:
		Autoparte(string tip, string nom, float pre, int mod, string con);
		
		string get_tipoAutoparte(){ return tipoAutoparte;}
		string get_nombre(){ return nombre;}
		float get_precio(){return precio;};
		float get_modelo(){return precio;};
		float get_condicion(){return precio;};

		void set_tipoAutoparte(string tp);
		void set_nombre(string nm);
		void set_precio(float pr);
		void set_modelo(int md);
		void set_condicion(string cn);

        void printData();
};

Autoparte::Autoparte(string tip, string nom, float pre, int mod, string con){
	tipoAutoparte = tip;
	nombre = nom;
	precio = pre;
	modelo = mod;
	condicion = con;
}

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

void Autoparte::printData (){
    cout << " " << endl;
    cout << "Tipo de autoparte" << tipoAutoparte << endl;
	cout << "Nombre:  " << nombre << endl;
    cout << "Precio:  " << precio << endl;
    cout << "Modelo:  " << modelo << endl;
    cout << "Condicion  " << condicion << endl;
}



class Motor : public Autoparte{
	private:
		int numCilindros;
		string estado;
	
	public:
		Motor(string tip, string nom, float pre, int mod, string con, int numCil, string est):Autoparte(tip, nom, pre, mod, con){
			numCilindros = numCil;
			estado = est;
		}

		int get_numCilindros(){ return numCilindros;}
		string get_nombre(){ return estado;}

		void set_numCilindros(int nm);
		void set_estado(string est);
		void printData ();
};

void Motor::set_numCilindros(int nm){
	numCilindros =  nm;
}
void Motor::set_estado(string est){
	estado =  est;
}

void Motor :: printData (){
    cout << " " << endl;
    cout << "Tipo de autoparte" << tipoAutoparte << endl;
	cout << "Nombre:  " << nombre << endl;
    cout << "Precio:  " << precio << endl;
    cout << "Modelo:  " << modelo << endl;
    cout << "Condicion  " << condicion << endl;
	cout << "Numero de cilindros:  " << numCilindros << endl;
	cout << "Estado:  " << estado << endl;
}



class Cabeza : public Autoparte{
	private:
		int numArboles;
		int numValvulas;
	
	public:
		Cabeza(string tip, string nom, float pre, int mod, string con, int numAr, int numVal):Autoparte(tip, nom, pre, mod, con){
			numArboles = numAr;
			numValvulas = numVal;
		}

		int get_numArboles(){ return numArboles;}
		int get_numvalvulas(){ return numValvulas;}
		
		void set_numArboles(int nm);
		void set_numValvulas(int nm);
		
		void printData ();
};

void Cabeza::set_numArboles(int nm){
	numArboles =  nm;
}
void Cabeza::set_numValvulas(int nm){
	numValvulas =  nm;
}

void Cabeza :: printData (){
    cout << " " << endl;
    cout << "Tipo de autoparte" << tipoAutoparte << endl;
	cout << "Nombre:  " << nombre << endl;
    cout << "Precio:  " << precio << endl;
    cout << "Modelo:  " << modelo << endl;
    cout << "Condicion  " << condicion << endl;
	cout << "Numero de arboles:  " << numArboles << endl;
	cout << "Numero de valvulas:  " << numValvulas << endl;
}



class Transmision : public Autoparte{
	private:
		int numVelocidades;
		string tipoTransmision;
	
	public:
		Transmision(string tip, string nom, float pre, int mod, string con, int numVel, string tipT):Autoparte(tip, nom, pre, mod, con){
			numVelocidades = numVel;
			tipoTransmision = tipT;
		}

		int get_numVelocidades(){ return numVelocidades;}
		string get_tipoTransmisio(){ return tipoTransmision;}

		void set_numVelocidades(int nm);
		void set_tipoTransmision(string tipT);
		
		void printData ();
};

void Transmision::set_numVelocidades(int nm){
	numVelocidades =  nm;
}
void Transmision::set_tipoTransmision(string tipT){
	tipoTransmision =  tipT;
}

void Transmision :: printData (){
    cout << " " << endl;
    cout << "Tipo de autoparte" << tipoAutoparte << endl;
	cout << "Nombre:  " << nombre << endl;
    cout << "Precio:  " << precio << endl;
    cout << "Modelo:  " << modelo << endl;
    cout << "Condicion  " << condicion << endl;
	cout << "Numero de Velocidades:  " << numVelocidades << endl;
	cout << "Tipo de transmision:  " << tipoTransmision << endl;
}
#endif