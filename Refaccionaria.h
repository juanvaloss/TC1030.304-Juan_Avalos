#ifndef REFACCIONARIA_H
#define REFCCIONARIA_H

using namespace std;
#include <iostream>
#include <vector>

#include "Autoparte.h"

class Refaccionaria {

    private:
        vector<Autoparte*> inventario;

    public:
        Refaccionaria() {}

        vector<Autoparte*> get_autopartes() {
            return inventario;
        }     

        void desplegarInventario();
        void agregarAutoparte(Autoparte* autop);

};

void Refaccionaria:: desplegarInventario() {          

            cout << " " << endl ;
            cout << "Inventario de la Refaccionaria:" << endl ;

            for(int i = 0; i < inventario.size(); i++) {
                inventario[i]->printData();
                cout << " " << endl;
                cout << " " << endl;
            }

        } 

void Refaccionaria::agregarAutoparte(Autoparte* autop) {  
    inventario.push_back(autop);
}

#endif
