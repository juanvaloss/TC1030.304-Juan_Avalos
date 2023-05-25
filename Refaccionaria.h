#ifndef REFACCIONARIA_H
#define REFCCIONARIA_H

using namespace std;
#include <iostream>
#include <vector>

#include "Autoparte.h"

class Refaccionaria {

    private:
        vector<Autoparte> autopartes;
        int numAutopartes;
        float valorTotal;

    public:
        Refaccionaria() {}

        vector<Autoparte> get_autopartes() {
            return autopartes;
        }
        int get_numAutopartes(){ return numAutopartes;}
		float get_valorTotal(){ return valorTotal;}      
        
        void set_numAutopartes(int autop);
		void set_valorTotal(float val);

        void desplegarInventario();
        void buscarAutoparte(Autoparte autop);
        void agregarAutoparte(Autoparte autop);
        void eliminarAutoparte(Autoparte autop);

};

void Refaccionaria::set_numAutopartes(int autop){
	numAutopartes =  autop;
}
void Refaccionaria::set_valorTotal(float val){
	valorTotal =  val;
}

#endif