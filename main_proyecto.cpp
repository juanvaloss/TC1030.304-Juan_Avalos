#include "Autoparte.h"

int main(){

	Motor hemi_57("Motor", "5.7 HEMI", 17500, 2015, "Usado", 6, "3/4");
	hemi_57.printData();
	
    Transmision tr_4050("Transmision", "TR-4050", 15000, 2010, "Reconstruida", 5, "Estandar");
	tr_4050.printData();

    Cabeza liberty_37("Cabeza", "Liberty 3.7", 7000, 2009, "Usada", 2, 12);
	liberty_37.printData();

}