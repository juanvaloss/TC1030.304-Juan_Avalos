# include "Refaccionaria.h"                    // incluimos todas las clases que conforman nuestro programa y nuestro diagrama de clases
# include "Autoparte.h"


using namespace std;

int main() {

    Refaccionaria refaccionaria;       // generamos una instancia de tipo Refaccionaria en donde se guardara todo el proceso del main

    int numAutopartes = 0;          // Se crea 1 contador que nos servira para poder saber el numero total de autopartes en general dentro del inventario de la refaccionaria
    int numMotores;                 // Se crea 1 contador que nos servira para poder saber el numero total de motores dentro del inventario de la refaccionaria
    int numTransmisiones;           // Se crea 1 contador que nos servira para poder saber el numero total de transmisiones dentro del inventario de la refaccionaria
    int numCabezas;                 // Se crea 1 contador que nos servira para poder saber el numero total de cabezas dentro del inventario de la refaccionaria

    int valorTotal = 0;             // Se crea 1 acumulador para calcular el valor neto en piezas que hay dentro de la refaccionaria.
    
    int inicio = 1;                     // Creamos una variable que va a condicionar el ciclo del programa. Ese ciclo siempre va a continuar mientras la variable
                                       // "inicio" sea igual a 0. Esto nos permitira facilmente  terminar el ciclo dentro de este con solo un cambio de variable.
    do {

        int menu ;                     // Aqui empezamos creando una variable llamada "menu" donde se guardara la opcion que elija el usuario

        cout << " " << endl ;          
        cout << "¿Que tipo de Autoparte se desea agregar al inventario de la Refaccionaria?" << endl ;
        cout << "1. Motor" << endl ;              // Preguntamos al usuario cual es el tipo de autoparte que desea agregar en el inventario de la refaccionaria y guardamos su 
        cout << "2. Transmision" << endl ;       // respuesta en la variable "menu"
        cout << "3. Cabeza" << endl ;
        cout << " " << endl ;
        cin >> menu ; 
 
        switch (menu) {                // Usamos el estatuto switch para que dependiendo de lo que ingrese el usuario, el programa haga los pasos necesarios para 
                                      // agregar el objeto de la clase deseada en el vector contenido por el objeto "refaccionaria".
            case 1 : {
                
                string nombreM;
                float precioM;
                int modeloM;
                string condicionM;
                int numCil;
                string estado;

                Motor* motor = new Motor(" ", " ", 0.0, 0, " ", 0,"");            // Aqui estamos creando un objeto de tipo "Motor" que despues va a ser guardado en
                                                                                 // "refaccionaria" usando apuntadores y "new"

                    cout << "¿Cual es el nombre del motor?" << endl;       // Pedimos la informacion necesaria del motor
                    cin >> nombreM ;

                    cout << "¿Cual es el precio del motor?" << endl;
                    cin >> precioM ;

                    cout << "¿Cual es el modelo del motor" << endl;
                    cin >> modeloM ;

                    cout << "¿Cual es la condicion del motor?" << endl;
                    cin >> condicionM ;

                    cout << "¿Cuantos cilindros tiene el motor?" << endl;
                    cin >> numCil ;
                    
                    cout << "¿Cual es el estado del motor" << endl;
                    cin >> estado ;

                    motor -> set_tipoAutoparte("Motor");                       // Ingresamos la los atributos del motor al objeto creado en la linea 41, esto con ayuda de los setters
                    motor -> set_nombre (nombreM);                            // desarrollados previamente en la clase "Motor"
                    motor -> set_precio (precioM);
                    motor -> set_modelo (modeloM);
                    motor -> set_condicion (condicionM);
                    motor -> set_numCilindros (numCil);
                    motor -> set_estado (estado);

                    refaccionaria.agregarAutoparte (motor);                          // Despues de agregar los atributos al objeto de clase motor, agregamos este al vector "refaccionaria", esto con ayuda  
                                                                                    // del metodo "agregarAutoparte" creado previamente en la clase "Refaccionaria"
                    
                    numAutopartes += 1;                        // Al contador "numAutopartes" le sumamos 1 debido a que ya se agrego una autoparte a al inventario de la refaccionaria
                    numMotores += 1;                           // Al contador "numMotores" le sumamos 1 debido a que ya se agrego un motor al inventario de la refaccionaria
                    valorTotal += motor-> get_precio();        // Al acumulador "valorTotal" le sumamos el precio del motor creado para despues saber el precion neto acumulado en el inventario de la refaccionaria
                                                            
                    break;
                }

            case 2 : {
                
                string nombreT;
                float precioT;
                int modeloT;
                string condicionT;
                int numVel;
                string tipo;

                Transmision* transmision = new Transmision(" ", " ", 0.0, 0, " ", 0,"");     // Aqui estamos creando un objeto de tipo "Transmision" que despues va a ser guardado en
                                                                                            // "refaccionaria" usando apuntadores y "new"

                    cout << "¿Cual es el nombre de la transmision?" << endl;       // Pedimos la informacion necesaria de la transmision
                    cin >> nombreT;

                    cout << "¿Cual es el precio de la transmision?" << endl;
                    cin >> precioT;

                    cout << "¿Cual es el modelo de la transmision" << endl;
                    cin >> modeloT;

                    cout << "¿Cual es la condicion de la transmision?" << endl;
                    cin >> condicionT;

                    cout << "¿Cuantas velocidades tiene la transmision?" << endl;
                    cin >> numVel;
                    
                    cout << "¿Cual es tipo de transmision (automatico/estandar)?" << endl;
                    cin >> tipo;

                    transmision -> set_tipoAutoparte("Transmision");                 // Ingresamos los atributos de la transmision al objeto creado en la linea 91, esto con ayuda de los setters
                    transmision -> set_nombre (nombreT);                            // desarrollados previamente en la clase "Transmision"
                    transmision -> set_precio (precioT);
                    transmision -> set_modelo (modeloT);
                    transmision -> set_condicion (condicionT);
                    transmision -> set_numVelocidades (numVel);
                    transmision -> set_tipoTransmision (tipo);

                    refaccionaria.agregarAutoparte (transmision);                          // Despues de agregar los atributos al objeto de clase transmision, agregamos este al vector "refaccionaria", esto con ayuda  
                                                                                          // del metodo "agregarAutoparte" creado previamente en la clase "Refaccionaria"
                    
                    numAutopartes += 1;                            // Al contador de "numAutopartes" le sumamos 1 debido a que ya se agrego una autoparte al inventario de la refaccionaria
                    numTransmisiones += 1;                         // Al contador de "numTransmisiones" le sumamos 1 debido a que ya se agrego una transmision al inventario de la refaccionaria
                    valorTotal += transmision-> get_precio();      // Al acumulador "valorTotal" le sumamos el precio de la transmision creada para despues saber el precio neto acumulado en el inventario de la refaccionaria
                                          
                    break;
                }
            

            case 3 : {
                
                string nombreC;
                float precioC;
                int modeloC;
                string condicionC;
                int numAr;
                int numVal;

                Cabeza* cabeza = new Cabeza(" ", " ", 0.0, 0, " ", 0,0);     // Aqui estamos creando un objeto de tipo "Cabeza" que despues va a ser guardado en
                                                                            // "refaccionaria" usando apuntadores y "new"

                    cout << "¿Cual es el nombre de la transmision?" << endl;       // Pedimos la informacion necesaria de la cabeza
                    cin >> nombreC ;

                    cout << "¿Cual es el precio de la transmision?" << endl;
                    cin >> precioC ;

                    cout << "¿Cual es el modelo de la transmision" << endl;
                    cin >> modeloC ;

                    cout << "¿Cual es la condicion de la transmision?" << endl;
                    cin >> condicionC ;

                    cout << "¿Cuantas velocidades tiene la transmision?" << endl;
                    cin >> numAr ;
                    
                    cout << "¿Cual es tipo de transmision (automatico/estandar)?" << endl;
                    cin >> numVal ;

                    cabeza -> set_tipoAutoparte("Cabeza");                 // Ingresamos los atributos de la cabeza al objeto creado en la linea 141, esto con ayuda de los setters
                    cabeza -> set_nombre("nombreC");                      // desarrollados previamente en la clase "Cabeza"
                    cabeza -> set_precio (precioC);
                    cabeza -> set_modelo (modeloC);
                    cabeza -> set_condicion (condicionC);
                    cabeza -> set_numArboles (numAr);
                    cabeza -> set_numArboles (numVal);

                    refaccionaria.agregarAutoparte (cabeza);                          // Despues de agregar los atributos al objeto de clase cabeza, agregamos este al vector "refaccionaria", esto con ayuda  
                                                                                     // del metodo "agregarAutoparte" creado previamente en la clase "Refaccionaria"
                    
                    numAutopartes += 1;                            // Al contador de "numAutopartes" le sumamos 1 debido a que ya se agrego una autoparte al inventario de la refaccionaria
                    numCabezas += 1;                               // Al contador de "numCabezas" le sumamos 1 debido a que ya se agrego una cabeza al inventario de la refaccionaria
                    valorTotal += cabeza-> get_precio();           // Al acumulador "valorTotal" le sumamos el precio de la cabeza creada para despues saber el precio neto acumulado en el inventario de la refaccionaria
                                          
                    break;
            }

            default :              // El default nos sirve para que si el usuario ingresa otra cosa que no es alguna de las opciones anteriores, se cierre el ciclo
                break ;
        }

/*
Aqui ya concluimos las opciones que va a tener el ciclo cada vez que de una vuelta, y se usa un break en cada una de estas para que el ciclo no sea infinito y acabe
cada que una autoparte de cualquier tipo sea agregado al inventario "refaccionaria". Despues de esto se ocupa otro menu y un switch que apareceran cada que se acabe de agregar una autoparte.
Esto va a servir para que el usuario decida si quiere seguir agregando productos al inventario o ya quiere pasar a checar el inventario y los movimientos
hechos en el programa.
*/
        int continuar_inv ;         // Aqui empezamos creando una variable llamada "continuar_inv" donde se guardara la opcion que elija el usuario

        cout << " " << endl ;
        cout << "¿Continuar agregando autopartes al inventario?" << endl ;
        cout <<"1. Sí" << endl ;  // Preguntamos al usuario si desea continuar inventariando y guardamosesto en la variable  "continuar_inv"
        cout <<"2. No" << endl ; 
        
        cout << " " << endl ;
        cin >> continuar_inv; 

        switch (continuar_inv) {
                
            case 1 : {          // En el caso de que el usuario ingrese el numero 1, el ciclo de agregar autopartes al inventario se renaduara
                continue ;      
            }

            case 2 : {         // En el caso de que el usuario ingrese el numero 2, el ciclo de agregar autopates al inventario se parara esto simplemente cambiando
                inicio = 0 ;   // el valor de inicio, al cambiarla , la condicion del ciclo ya no se cumple, por lo que se para de manera completa el while
                break ;
            }
        }

    } 
    
    while (inicio == 1) ;
    
    return 0 ;

}
