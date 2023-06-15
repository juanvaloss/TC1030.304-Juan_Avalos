#ifndef REFACCIONARIA_H
#define REFCCIONARIA_H

using namespace std;
#include <iostream>
#include <vector>

#include "Autoparte.h"

// Creamos la clase Refaccionaria
class Refaccionaria {

// Declaramos y desarrollamos los atributos de la clase
    private:
    // Como unico atributo será un vector de tipo Autoparte, este se llamara inventario ya que es la funcion que tomara ese atributo
        vector <Autoparte*> inventario;

    public:
    // Creamos un constructor vacio que va almacenar la informacion que se produzca en el main
        Refaccionaria () {}

    // Declaramos el getter 
        vector<Autoparte*> get_autopartes() {
            return inventario;
        }     

    // Declaramos el metodo desplegarInventario    
        void desplegarInventario();
    // Declaramos el metodo agregarAutoparte
        void agregarAutoparte(Autoparte* autop);
};

// Desarrollamos el metodo desplegarInventario, este servira para desplegar toda la informacion de las piezas existentes dentro del inventario de la refaccionaria
void Refaccionaria :: desplegarInventario() {          

            cout << " " << endl ;
            cout << "Inventario de la Refaccionaria:" << endl ;

            for(int i = 0; i < inventario.size(); i++) {
                inventario[i]->printData();
                cout << " " << endl;
                cout << " " << endl;
            }

} 

// Desarrollamos el metodo agregarAutoparte, este nos servira para poder agregar objetos de tipo Autoparte al vector inventario. 
void Refaccionaria :: agregarAutoparte(Autoparte* autop) {  
    inventario.push_back(autop);
}

#endif
#endif
