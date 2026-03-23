#include <iostream>
using namespace std;
#include <string>
#include <iomanip> /*para setw*/
#include <cmath> /*para potencia*/
#include <cstdlib>
#include <ctime>      /* para random*/

/*Declariones globales para que se pueda usar el cuadrado en varias funciones*/
int cuadrado[10][10];
int N_cuadrado = 0;


/*Menu principal*/
void MenuPrincipal(int);

/*Opcion 1--------------------------------------------------------------------------------------*/
/*Sistema Internacional de Unidades MENU*/
void MenuSi(int);
/*SI 1*/
void si1(string magnitud[], string unidad[], string simbolo[]);
string magnitud[7]={"Longitud", "Masa", "Tiempo", "Corriente Electrica","Temperatura termodinamica", "Cantidad de sustancia","Intensidad Luminosa"};
string unidad[7]={"Metro", "Kilogramo", "Segundo", "Amperio","Kelvin","mol","candela"};
string simbolo[7]={"m", "kg","s","A","K","mol","cd"};
/*SI 2*/
void si2(string constante[], string simbolo1[], string valor[], string unidades[]);
string constante[6]={"Velocidad de la Luz", "Constante gravitacional","Carga del electron","Constante de Planck","Constante de Avogrado","Constante de Boltzmann"};
string simbolo1[6]={ "c","G","e","h","Na","k"};
string valor[6]={"3.00 x 10^8", "6.67 x 10^-11", "1.60 x 10^-19","6.63 x 10^-34","6.022 x 10^23","1.38 x 10^-23"}; 
string unidades[6]={"m/s","N*m^2/kg^2","C","J*s","1/mol","J/K"};
/*SI 3*/
void si3(string magnitud1[], string nombre[], string simbolo2[], string expresion[], string magnitud2[], string simbolo3[], string expresion1[]);
string magnitud1[6]={"Angulo Plano", "Angulo Solido","Frecuencia","Fuerza","Presion","Energia,Trabajo,Cantidad de calor"};
string nombre[6]= {"radian^2","estereorradian^2","hercio","newton","pascal","julio"};
string simbolo2[6]={ "rad","sr","Hz", "N","Pa","J"};
string expresion[6]={ "-","-","1/s","kg*m/s^2","kg/(ms^2)","kg*m^2/s^2"};

string magnitud2[5]={"Area","Volumen","Velocidad","Aceleracion","Densidad"};
string simbolo3[5]={"A","V","v","a","ρ"};
string expresion1[5]={ "m^2","m^3","m/s","m/s^2","kg/m^3"};
/*SI 4*/
void si4(string prefijo[], string simbolo4[], string factor[]);
string prefijo[24] ={ "deca", "hecto", "kilo", "mega", "giga", "tera", "peta", "exa", "zetta", "yotta", "ronna", "quetta","deci", "centi", "mili", "micro", "nano", "pico", "femto", "atto", "zepto", "yocto", "ronto", "quecto"};
string simbolo4[24]={ "da", "h", "k", "M", "G", "T", "P", "E", "Z", "Y", "R", "Q",
                      "d", "c", "m", "µ", "n", "p", "f", "a", "z", "y", "r", "q"};
string factor[24]{"10^1", "10^2", "10^3", "10^6", "10^9", "10^12", "10^15", "10^18", "10^21", "10^24", "10^27", "10^30",
                     "10^-1", "10^-2", "10^-3", "10^-6", "10^-9", "10^-12", "10^-15", "10^-18", "10^-21", "10^-24", "10^-27", "10^-30"};
/*SI 5*/
void si5();
/*SI 6*/
void si6();


/*Opcion 2---------------------------------------------------------*/
/*Menu*/
void menu2(int);
/*Decimal*/
string decimal(string numero1);
char deci[10]={'0','1','2','3','4','5','6','7','8','9'};
/*Binario*/
string binario(string numero1);
/*Octal*/
string octal(string numero1);
char oc[8]={'0','1','2','3','4','5','6','7'};
/*Hexadecimal*/
string hexadecimal(string numero1);
char hexa[22]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F'};
/*Menu Convertir*/
void menuconvertir(int);
/*Convertir decimal*/
void convertirdecimal(string, int);
/*Convertir a Binario*/
void convertirbinario(string, int);
/*Convertir a Octal*/
void convertiroctal(string , int);
/*Covertir a Hexadecimal*/
void convertirhexa(string, int);

/*Opcion 3-------------------------------------------------------------------*/
/*Menu Dados*/
void simulacionDados();
/*Mostrar los lanzamientos*/
void mostrarLanzamientos(int[], int[], int[], int, int, int);
/*La distribucion de los lanzamientos*/
void distribucionResultados(int[], int);
/*Calcular la media de resultados*/
float mediaResultados(int[], int);
/*Calcular Mediana de resultados*/
float medianaResultados(int[], int);
/*Calcular Moda de los lanzamientos*/
int modaResultados(int[], int);


/* Opcion 4 -------------------------------------------------------------------*/

/*Cuadrados Magicos */
void generarCuadrado(int matriz[][10], int n);
/*Imprimir Cuadrados*/
void imprimirCuadrado(int matriz[][10], int n);
/*Verificar Suma de los cuadrados*/
void verificarSuma(int matriz[][10], int n);
/*constante de los cuadrados magicos */
int constanteMagica(int n);
/*menus de los cuadrados */
void moduloCuadradoMagico();







int main()
{
    int opcion;
    int opcion10;
    string escribir;
    int opcion20;
    string numero1;
    int convertir1;
    int base=0;
    string numero2;

    
    
    do {
    MenuPrincipal(opcion);
    cin>>opcion;
    if(opcion<1 || opcion >6){
        cout<<"Error, Seleccione una opcion valida"<<endl;
    }
        /*Sistema Internacional de Unidades MENU*/
        else if(opcion==1){
            while(opcion10!=7){
                MenuSi(opcion10);
                cin>>opcion10;
                /*Switch Sistema Internacional de Unidades*/
                    switch (opcion10){
                        case 1:
                        si1(magnitud, unidad, simbolo);
                        break;
                        case 2:
                        si2(constante, simbolo1, valor, unidades);
                        break;
                        case 3:
                        si3(magnitud,nombre, simbolo2, expresion, magnitud2, simbolo3, expresion1);
                        break;
                        case 4:
                        si4(prefijo,simbolo4, factor);
                        break;
                        case 5:
                        si5();
                        break;
                        case 6:
                        si6();
                        break;
                        default:
                        cout<<"Opcion Invalida"<<endl;
                        break;
                    }
                
                
            }
        }
        else if(opcion==2){
            bool l;
            do{
                menu2(opcion20);
                cin>>opcion20;
                l=true;
                if(opcion20<1 || opcion20>5){
                    cout<<"Error, seleccione una opcion valida"<<endl;
                    l=false;
                }
                else {
                   switch(opcion20){
                       case 1:
                       numero2=decimal(numero1);
                       base=10;
                       break;
                       case 2:
                       numero2=binario(numero1);
                       base=2;
                       break;
                       case 3:
                       numero2=octal(numero1);
                       base=8;
                       break;
                       case 4:
                       numero2=hexadecimal(numero1);
                       base=16;
                       break;
                       
                   }    
                }
            }while(l!=true);
            
            
            /*convertir*/
            do{
                menuconvertir(convertir1);
                cin>>convertir1;
                
                if(convertir1<1 || convertir1>5){
                    cout<<"Error, ingrese una opcion valida"<<endl;
                    
                }
                
                else{
        switch(convertir1){
            case 1:
            if(base==10){
                cout<<"Su numero ya es Decimal, escoja otra opcion"<<endl;
                cout<<endl;
            }
            else{
            convertirdecimal(numero2, base);
            }
            break;
            
            case 2:
            if(base==2){
                cout<<"Su numero ya es Binario, escoja otra opcion"<<endl;
                cout<<endl;
            }
            else{
            convertirbinario(numero2,base);
            }
            break;
            case 3:
            if(base==8){
                cout<<"Su numero ya es Octal, escoja otra opcion"<<endl;
                cout<<endl;
            }
            else{
                convertiroctal(numero2,base);
            }
            break;
            case 4:
            if(base==16){
                cout<<"Su numero ya es Hexadecimal, escoja otra opcion"<<endl;
                cout<<endl;
            }
            else{
                convertirhexa(numero2,base);
            }
            break;
            
        }
    }
    }while(convertir1!=5);
    
 }/*opcion2 final*/
 else if(opcion==3){
     simulacionDados();
     
 }
 else if (opcion==4){
     moduloCuadradoMagico();
 }
 else if(opcion==5){
     cout<<"En Proceso de construccion, jajajjaaaja, sii profe un 5 no viene mal"<<endl;
 }
 else if(opcion==6){
     cout<<"Saliendo del Programa..........."<<endl;
 }
    
}while(opcion!=6);  /*final menu principal*/
    return 0;
}






/*Menu Principal*/
void MenuPrincipal(int opcion){
    
    cout<<"---------------Menu Principal----------------"<<endl;
    cout<<"1. Sistema internacional de unidades "<<endl;
    cout<<"2. Sistemas de numeracion "<<endl;
    cout<<"3. Simulacion lanzamiento de dados "<<endl;
    cout<<"4. Cuadrado magico "<< endl;
    cout<<"5. Archivos de texto"<<endl;
    cout<<"6. Salir"<<endl;
    cout<<"Seleccione una opcion: "; 
    
    
}


/*Opcion1*/
/*Sistema Internacional de Unidades MENU*/
void MenuSi(int opcion10){
     cout<<"*************Menu Sistema Internacional de Unidades**************"<<endl;
    cout<<"1. Unidades basicas del SI "<<endl;
    cout<<"2. Constantes fisicas del SI "<<endl;
    cout<<"3. Unidades derivadas del SI "<<endl;
    cout<<"4. Prefijos del SI"<< endl;
    cout<<"5. Uso correcto del SI"<<endl;
    cout<<"6. Conversiones"<<endl;
    cout<<"7. Salir"<<endl;
    cout<<"Seleccione una opcion: "; 
    
    
}
/*SI 1*/
void si1(string magnitud[], string unidad[], string simbolo[]){
    cout<< left;
    cout<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<< setw(27)<<"Magnitud"<<setw(15)<<"Unidad"<<"Simbolo"<<endl;
    cout<<"----------------------------------------------------------------------------------------------"<<endl;
    for(int i=0; i<7;i++){
    cout<<setw(27)<<magnitud[i]<<setw(15)<<unidad[i]<<simbolo[i]<<endl;
    }
     cout<<"--------------------------------------------------------------------------------------------"<<endl;
}
/*SI 2*/
void si2(string constante[], string simbolo1[], string valor[], string unidades[]){
    cout<<left;
    cout<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<setw(35)<<"Constante Fisica"<< setw(10)<<"Simbolo"<< setw(20)<<"Valor"<<"Unidades"<<endl;
    cout<<"----------------------------------------------------------------------------------------------"<<endl;
    for(int i =0; i<6; i++){
    cout<<setw(35)<<constante[i]<< setw(10)<<simbolo1[i]<<setw(20)<<valor[i]<<unidades[i]<<endl;
    }
     cout<<"---------------------------------------------------------------------------------------------"<<endl;
}
/*S1 3*/
void si3(string magnitud1[], string nombre[], string simbolo2[], string expresion[], string magnitud2[], string simbolo3[], string expresion1[]){
     cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<left;
    cout<<setw(35)<<"Magnitud Derivada"<<setw(30)<<"Nombre especial de la unidad"<<setw(15)<<"Simbolo"<<"Expresion en terminos de las unidades basicas"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    for(int i=0; i<6;i++){
    cout<<setw(35)<<magnitud1[i]<<setw(30)<<nombre[i]<<setw(15)<<simbolo2[i]<<expresion[i]<<endl;
    }
    cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    
    cout<<""<<endl;
    cout<<setw(35)<<"Magnitud Derivada"<<setw(30)<<"Simbolos"<<"Expresion en SI"<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    for(int i=0; i<5;i++){
    cout<<setw(35)<<magnitud2[i]<<setw(30)<<simbolo3[i]<<expresion1[i]<<endl;
    }
    
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
}
/*SI 4*/
void si4(string prefijo[], string simbolo4[], string factor[]){
    cout<<left;
     cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
     cout<<setw(15)<<"Prefijo"<<setw(10)<<"Simbolo"<<"Factor"<<endl;
      cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
      for(int i=0; i<24; i++){
      cout<<setw(15)<<prefijo[i]<<setw(10)<<simbolo4[i]<<factor[i]<<endl;
      }
     cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;  
      
}
/*SI 5*/
void si5(){
    string Medida;
    string Medida2;
    cout<<left;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"USO CORRECTO DEL SISTEMA INTERNACIONAL (SI)"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"1. Usar los simbolos sin punto ni plural. Ej: 10 kg (no 10 kgs.)"<<endl;
    cout<<"2. Dejar un espacio entre el valor numerico y la unidad. Ej: 25 °C"<<endl;
    cout<<"3. Las unidades no se escriben en cursiva, las variables si."<<endl;
    cout<<"4. No combinar prefijos del SI (como kmg o mμ)."<<endl;
    cout<<"5. No mezclar unidades del SI con otras (como pulgadas o libras)."<<endl;
    cout<<"6. Las unidades derivadas se escriben con punto medio o barra. Ej: m·s^-2 o m/s^2"<<endl;
    cout<<"7. Los simbolos son iguales en singular y plural. Ej: 1 m, 5 m."<<endl;
    cout<<"8. No usar nombres de unidades en mayuscula completa. Ej: Pa, no PASCAL."<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cin.ignore();
    cout<<"VERIFICACION DE MEDIDAS"<<endl;
    cout<<"Escriba 60 metros correctamente con los simbolos de unidades correctos: ";
    getline(cin, Medida);
    if(Medida == "60 m"){
        cout<<"Uso correcto"<<endl;
    }
    else{
        cout<<"Uso incorrecto, se escribe 60 m"<<endl;
    }
    
    
    cout<<"Escriba 25.9 porciento con los simbolos de unidades correctos: ";
    getline(cin, Medida2);
    if(Medida2 == "25.9 %"){
        cout<<"Uso correcto"<<endl;
    }
    else{
        cout<<"Uso incorrecto, se escribe 25.9 %"<<endl;
    }
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
}
/*SI 6*/
void si6(){
    int opcion;
    int opcion2;
    int opcion3;
    int tiempo;
    int longi;
    int superficie;
    double valor;
    double resultado;
    do{
    cout<<left;
    cout<<"//////////////CONVERSIONES DEL SISTEMA INTERNACIONAL//////////////////"<<endl;
    cout<<"1. Conversiones entre Sistema Ingles y Sistema Internacional"<<endl;
    cout<<"2. Conversiones entre unidades del SI (tiempo, longitud, area)"<<endl;;
    cout<<"3. Salir"<<endl;
    cout<<"Seleccione una opcion: ";
    cin>>opcion;
    
    switch(opcion){
        case 1:
        do{
        cout<<left;
        cout<<":::::::::::::::::Conversiones Sistema Ingles a SI::::::::::::::::::"<<endl;
        cout<<"1. Pulgadas a metros"<<endl;
        cout<<"2. Millas a kilometros"<<endl;
        cout<<"3. Libras a kilogramos"<<endl;
        cout<<"4. Galones a litros"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Seleccione una opcion :"<<endl;
        cin>>opcion2;
        
        if(opcion2== 1){
            cout<<"Ingrese el valor en pulgadas: ";
            cin>>valor;
            resultado= valor*0.0254;
            cout << valor << " pulgadas equivalen a " << resultado << " metros." << endl;
        }
        else if(opcion2==2){
            cout<<"Ingrese el valor en Millas: ";
            cin>>valor;
            resultado= valor*1.609;
            cout << valor << " millas equivalen a " << resultado << " kilometros." << endl;
            }
            else if( opcion2== 3){
                cout<<"Ingrese el valor en Libras: ";
                cin>>valor;
                resultado= valor*0.4536;
                cout<<valor<<" libras en kilogramos es "<<resultado<<" kilogramos."<<endl;
            }
            else if (opcion2==4){
                cout<<"Ingrese el valor en Galones: ";
                cin>>valor;
                resultado=valor*3.785;
                cout << valor << " galones equivalen a " << resultado << " litros." << endl;
            }
        
        }while(opcion2!=5);
        break;
        
        case 2:
        do{
            cout<<left;
            cout << "===================Conversiones dentro del SI======================" << endl;
            cout << "1. Tiempo (horas, minutos, segundos)" << endl;
            cout << "2. Longitud (km, m, cm)" << endl;
            cout << "3. Superficie (m^2, cm^2, km^2)" << endl;
            cout<<"4. SALIR "<<endl;
            cout << "Seleccione una opcion: ";
            cin >> opcion3;
            
            if(opcion3==1){
                do{
                cout<<left;
                cout<<"+++++++++++++++Tiempo+++++++++++++"<<endl;
                cout<<"1. Horas a Minutos"<<endl;
                cout<<"2. Horas a Segundos"<<endl;
                cout<<"3. Minutos a Horas"<<endl;
                cout<<"4. Minutos a Segundos"<<endl;
                cout<<"5. Segundos a Minutos"<<endl;
                cout<<"6. Segundos a Horas"<<endl;
                cout<<"7. SALIR"<<endl;
                cout<<"Seleccione una opcion: ";
                cin>>tiempo;
                
                if(tiempo==1){
                    cout<<"Ingrese las Horas; "<<endl;
                    cin>>valor;
                    resultado= valor*60;
                    cout << valor << " horas equivalen a "<<resultado<<" minutos." << endl;
                
                }
                else if(tiempo==2){
                    cout<<"Ingrese las Horas; "<<endl;
                    cin>>valor;
                    resultado= valor*3600;
                    cout << valor << " horas equivalen a "<<resultado<<" segundos." << endl;
                }
                else if(tiempo==3){ 
                    cout<<"Ingrese los Minutos: ";
                    cin>>valor;
                    resultado=valor/60;
                    cout<< valor << " minutos equivalen a "<<resultado<<" horas." << endl;
                }
                else if(tiempo==4){
                    cout<<"Ingrese los Minutos: ";
                    cin>>valor;
                    resultado=valor*60;
                    cout<< valor << " minutos equivalen a "<<resultado<<" segundos." << endl;
                }
                else if(tiempo==5){
                    cout<<"Ingrese los Segundos: ";
                    cin>>valor;
                    resultado= valor/60;
                    cout<< valor << " segundos equivalen a "<<resultado<<" minutos." << endl;
                }
                else if(tiempo==6){
                    cout<<"Ingrese los Segundos: ";
                    cin>>valor;
                    resultado=valor/3600;
                    cout<< valor << " segundos equivalen a "<<resultado<<" horas." << endl;
                }
                else if(tiempo>7|| tiempo<1){
                    cout<<"Opcion no valida"<<endl;
                }
            
            
                
            
            
            }while(tiempo!=7);
            }
            
            if(opcion3==2){
                do{
                   cout<<left;
                   cout<<"|||||||||||||||||Longitudes|||||||||||||||||||"<<endl;
                   cout<<"1. Kilometros a Metros"<<endl;
                   cout<<"2. Kilometros a Centimetros"<<endl;
                   cout<<"3. Metros a Kilometros"<<endl;
                   cout<<"4. Metros a Centimetros"<<endl;
                   cout<<"5. Centimetros a Kilometros"<<endl;
                   cout<<"6. Centimetros a Metros"<<endl;
                   cout<<"7. SALIR"<<endl;
                   cout<<"Seleccione una opcion: ";
                   cin>>longi;
                   if(longi==1){
                       cout<<"Ingrese los Kilometros: ";
                       cin>>valor;
                       resultado= valor*1000;
                       cout<<valor<<" kilometros en metros es "<<resultado<<" metros"<<endl;
                   }
                   else if(longi==2){
                       cout<<"Ingrese los Kilometros: ";
                       cin>>valor;
                       resultado= valor*100000;
                    cout<<valor<<" kilometros en centimetros es "<<resultado<<" centimetros"<<endl;
                   }
                   else if(longi==3){
                       cout<<"Ingrese los Metros: ";
                       cin>>valor;
                       resultado=valor/1000; 
                       cout<<valor<<" metros en kilometros es "<<resultado<<" kilometros"<<endl;
                   } 
                   else if(longi==4){ 
                       cout<<"Ingrese los Metros: ";
                       cin>>valor;
                       resultado= valor*100;
                       cout<<valor<<" metros en centimetros es "<<resultado<<" centimetros"<<endl;
                   }
                   else if(longi==5){
                       cout<<"Ingrese los Centimetros: ";
                       cin>>valor;
                       resultado==valor/100000;
                       cout<<valor<<" centimetros en kilometros es "<<resultado<<" kilometros"<<endl;
                   }
                   else if(longi==6){
                       cout<<"Ingrese los Centimetros: ";
                       cin>>valor;
                       resultado=valor/100;
                       cout<<valor<<" centimetros en metros es "<<resultado<<" metros"<<endl;
                   }
                   else if(longi<1||longi>7){
                       cout<<"Opcion invalida"<<endl;
                   }
                   
                }while(longi!=7);
            }
            if(opcion3==3){
                do{
                    cout<<left;
                    cout<<"------------Superficie-------------"<<endl;
                    cout << "1. Metros cuadrados a centimetros cuadrados" << endl;
                    cout << "2. Centimetros cuadrados a metros cuadrados" << endl;
                    cout << "3. Metros cuadrados a milimetros cuadrados" << endl;
                    cout << "4. Milimetros cuadrados a metros cuadrados" << endl;
                    cout << "5. Metros cuadrados a kilometros cuadrados" << endl;
                    cout << "6. Kilometros cuadrados a metros cuadrados" << endl;
                    cout<<"7. SALIR"<<endl;
                    cout << "Seleccione una opcion: ";
                    cin >> superficie;
                    
                    if(superficie==1){
                        cout<<"Ingrese los m^2: ";
                        cin>>valor;
                        resultado=valor*10000;
                        cout<<valor<<"m^2 en cm^2 es "<<resultado<<"cm^2"<<endl;
                    }
                    else if (superficie == 2) {
                   cout << "Ingrese el valor en cm^2: ";
                   cin >> valor;
                   resultado = valor / 10000;
           cout << valor << " cm^2 equivalen a " << resultado << " m^2" << endl;
    } 
    else if (superficie == 3) {
        cout << "Ingrese el valor en m^2: ";
        cin >> valor;
        resultado = valor * 1000000;
        cout << valor << " m^2 equivalen a " << resultado << " mm^2" << endl;
    } 
    else if (superficie == 4) {
        cout << "Ingrese el valor en mm^2: ";
        cin >> valor;
        resultado = valor / 1000000;
        cout << valor << " mm^2 equivalen a " << resultado << " m^2" << endl;
    } 
    else if (superficie == 5) {
        cout << "Ingrese el valor en m^2: ";
        cin >> valor;
        resultado = valor / 1000000;
        cout << valor << " m^2 equivalen a " << resultado << " km^2" << endl;
    } 
    else if (superficie == 6) {
        cout << "Ingrese el valor en km^2: ";
        cin >> valor;
        resultado = valor * 1000000;
        cout << valor << " km^2 equivalen a " << resultado << " m^2" << endl;
    }
    else if(superficie<1 || superficie>7){
        cout<<"Opcion no valida"<<endl;
    }
                    
                    
                }while(superficie!=7);
            }
            
            
            
        }while(opcion3!=4);
        
        }/*conversiones menu*/
        
        
    
    
    }while(opcion!=3);
}


/*Opcion 2*/
/*Menu*/
void menu2(int opcion20){
    cout<<left;
    cout<<"+++++++++++++++++++++++++BASES NUMERICAS++++++++++++++++++++++++++++++++"<<endl;
    cout<<"1. Decimal"<<endl;
    cout<<"2. Binario"<<endl;
    cout<<"3. Octal"<<endl;
    cout<<"4. Hexadecimal"<<endl;
    cout<<"Seleccione una opcion: ";
    
}
/*Decimal*/
string decimal(string numero1){
    bool ya;
    bool encontrado;
    do{
    cout<<"Ingrese el numero: ";
    cin>>numero1;
    ya=true;
    for(int i=0; i<numero1.length();i++){
     encontrado=false;
       for(int k=0; k<10; k++){
        if(numero1[i]==deci[k]){
            encontrado=true;
            break;
        
    }
       }
       if(encontrado==false){
           ya=false;
           break;
       
       }
       
    }
    
    if(ya==false){
    cout<<"Error,ingrese una opcion valida"<<endl;
    }
    
    }while(ya==false);
        cout<<"Numero Valido"<<endl;
    return numero1;
    
   
   
}
/*Binario*/
string binario(string numero1){
    bool ok;
    
    do{
    cout<<"Inserte el numero: ";
    cin>>numero1;
     ok=true;
    for(int i=0; i<numero1.length();i++){
        if(numero1[i]!='0' && numero1[i]!='1'){
            ok=false;
            break;
        
    }
    }
    
    if(ok==false);
    cout<<"Error,ingrese una opcion valida"<<endl;
    }while(ok==false);
    cout<<"Numero Valido"<<endl;
    
    return numero1;
    
    
    
    
    
}
/*Octal*/
string octal(string numero1){
   bool x;
    bool encontrado;
    do{
    cout<<"Inserte el numero: ";
    cin>>numero1;
     x=true;
    for(int i=0; i<numero1.length();i++){
     encontrado=false;
       for(int k=0; k<8; k++){
        if(numero1[i]==oc[k]){
            encontrado=true;;
            break;
        
    }
       }
       if(encontrado==false){
           x=false;
       
       }
       
    }
    
    if(x==false){
    cout<<"Error,ingrese una opcion valida"<<endl;
    }
    
    
    }while(x==false);
    cout<<"Numero Valido"<<endl;
   return numero1;
}
/*Hexadecimal*/
string hexadecimal(string numero1){
     bool y;
    bool encontrado;
    
    do{
    cout<<"Inserte el numero: ";
    cin>>numero1;
     y=true;
    for(int i=0; i<numero1.length();i++){
     encontrado=false;
       for(int k=0; k<22; k++){
        if(numero1[i]==hexa[k]){
            encontrado=true;;
            break;
        
    }
       }
       if(encontrado==false){
           y=false;
       
       }
       
    }
    
    if(y==false){
    cout<<"Error,ingrese una opcion valida"<<endl;
    }
    
    
    }while(y==false);
    cout<<"Numero Valido"<<endl;
    return numero1;
}
/*Menu Convertir*/
void menuconvertir(int convertir1){
    cout<<left;
    cout<<"===============CONVERTIR BASE=================="<<endl;
    cout<<"Elija a cual base desea convertir:"<<endl;
    cout<<"1. Decimal"<<endl;
    cout<<"2. Binario"<<endl;
    cout<<"3. Octal"<<endl;
    cout<<"4. Hexadecimal"<<endl;
    cout<<"5. SALIR"<<endl;
    cout<<"Seleccione una opcion: ";
    
    
}
/*Convertir a decimal*/
void convertirdecimal(string numero1, int base){
    int exponente;
    int nuevo=0;
    int digito;
    char c;
    bool v;
    
        for(int i= numero1.length()-1, exponente=0; i>=0; i--, exponente++){
            c=numero1[i];
            
            if (c >= '0' && c <= '9') {
            digito = c - '0'; 
        }
        else if (c >= 'A' && c <= 'F') {
            digito = 10 + (c - 'A'); 
        }
        else if (c >= 'a' && c <= 'f') {
            digito = 10 + (c - 'a'); 
            
             }
             nuevo += digito * pow(base,exponente);
        }
    cout<<left;
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"El numero "<<numero1<<" en base "<<base<<" convertido a decimal es: "<<endl;
    cout<<"Decimal: "<<nuevo<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<endl;
}
/*Convertir a Binaroo*/
void convertirbinario(string numero1, int base){
    double cociente;
    int residuo;
    int cambiar[200];
    int i=0;
    int aux; 
    
    if(base==10 || base==8){
        
       int help=stoi(numero1);
        
        while(help!=0){
            residuo=help%2;
            help=help/2;
            cambiar[i]=residuo;
            i++;
        }
        cout<<left;
        cout<<"------------------------------------------------------------------------"<<endl;
        cout<<"El numero "<<numero1<<" con base de "<<base<<" convertido a binario es: "<<endl;
        cout<<"Binario: ";
        for(int j=i-1;j>=0;j--){
            cout<<cambiar[j];
        }
        cout<<endl;
        cout<<"------------------------------------------------------------------------"<<endl;
        cout<<endl;
            
        }
        
        
        else if (base==16){
            int exponente;
            int nuevo=0;
            int digito;
            char c;
            bool v;
            int help;
    
        for(int i= numero1.length()-1, exponente=0; i>=0; i--, exponente++){
            c=numero1[i];
            
            if (c >= '0' && c <= '9') {
            digito = c - '0'; 
        }
        else if (c >= 'A' && c <= 'F') {
            digito = 10 + (c - 'A'); 
        }
        else if (c >= 'a' && c <= 'f') {
            digito = 10 + (c - 'a'); 
            
             }
             nuevo += digito *(int)pow(base,exponente);
        }
        
        help=nuevo;
        
        i=0;
        while(help!=0){
            residuo=help%2;
            help=help/2;
            cambiar[i]=residuo;
            i++;
        }
        cout<<left;
        cout<<"------------------------------------------------------------------------"<<endl;
        cout<<"El numero "<<numero1<<" con base de "<<base<<" convertido a binario es: "<<endl;
        cout<<"Binario: ";
        for(int j=i-1;j>=0;j--){
            cout<<cambiar[j];
        }
        cout<<endl;
        cout<<"------------------------------------------------------------------------"<<endl;
        cout<<endl;
    
        }
        
    }
/*Convertir a Octal*/
void convertiroctal(string numero1, int base){
    int help;
    int octopus[200];
    int aux;
    int i=0;
    if(base==10){
        help=stoi(numero1);
        while(help!=0){
            aux=help%8;
            octopus[i]=aux;
            help=help/8;
            i++;
        }
        cout<<left;
        cout<<"------------------------------------------------------------------------"<<endl;
        cout<<"El numero "<<numero1<<" con base de "<<base<<" convertido a octal es: "<<endl;
        cout<<"Octal: ";
        for(int j=i-1;j>=0;j--){
            cout<<octopus[j];
        }
        cout<<endl;
        cout<<"------------------------------------------------------------------------"<<endl;
        cout<<endl;
    }
    
    
    
    else if(base==2){
        bool encontrado = false;
int dec = 0;
int potencia = 1;
int digito;
int r = 0;
help = 0; 


for (int i = 0; i < numero1.length(); i++) {
    if (numero1[i] == '1') {
        encontrado = true;
        break;
    }
}

if (encontrado == false) {
    cout << left;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "El numero " << numero1 << " con base de " << base << " convertido a octal es: " << endl;
    cout << "Octal: 0 (ya que su numero binario no tiene ningun 1)" << endl;
    cout << "------------------------------------------------------------------------" << endl;
}
else if (encontrado == true) {
    
    for (int i = numero1.length() - 1; i >= 0; i--) {
        digito = numero1[i] - '0';  
        dec += digito * potencia;
        potencia *= 2;
    }

    
    while (dec != 0) {
        aux = dec % 8;
        octopus[r] = aux;
        dec = dec / 8;
        r++;
    }

    cout << left;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "El numero " << numero1 << " con base de " << base << " convertido a octal es: " << endl;
    cout << "Octal: ";
    for (int j = r - 1; j >= 0; j--) {
        cout << octopus[j];
    }
    cout << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << endl;
}

    }
    
    
    else if(base==16){
        int exponente;
            int nuevo=0;
            int digito;
            char c;
            bool v;
            int help;
    
        for(int i= numero1.length()-1, exponente=0; i>=0; i--, exponente++){
            c=numero1[i];
            
            if (c >= '0' && c <= '9') {
            digito = c - '0'; 
        }
        else if (c >= 'A' && c <= 'F') {
            digito = 10 + (c - 'A'); 
        }
        else if (c >= 'a' && c <= 'f') {
            digito = 10 + (c - 'a'); 
            
             }
             nuevo += digito *(int)pow(base,exponente);
        }
        
        int p=0;
        help=nuevo;
        
        while(help!=0){
            aux=help%8;
            octopus[p]=aux;
            help=help/8;
            p++;
        }
        cout<<left;
        cout<<"------------------------------------------------------------------------"<<endl;
        cout<<"El numero "<<numero1<<" con base de "<<base<<" convertido a octal es: "<<endl;
        cout<<"Octal: ";
        for(int j=p-1;j>=0;j--){
            cout<<octopus[j];
        }
        cout<<endl;
        cout<<"------------------------------------------------------------------------"<<endl;
        cout<<endl;
    }
}
/*Convertir a Hexadecimal*/
void convertirhexa(string numero1, int base){
    int residuos[100];
    int aux;
    int help;
    int i=0;
    if(base==10){
        help=stoi(numero1);
        
        while(help!=0){
        aux=help%16;
        residuos[i]=aux;
        help=help/16;
        i++;
        }
        
        cout<<left;
        cout<<"------------------------------------------------------------------------"<<endl;
        cout<<"El numero "<<numero1<<" con base de "<<base<<" convertido a Hexadecimal es: "<<endl;
        cout<<"Hexadecimal: ";
        for(int j=i-1; j>=0;j--){
            if(residuos[j] <10){
            cout<<residuos[j];
            }
            else{
                cout<<char('A'+(residuos[j]-10));
            }
        }
        cout<<endl;
        cout<<"------------------------------------------------------------------------"<<endl;
    }
    
    else if(base==2){
        int r=0;
        int potencia=1;
        int dec=0;
        help=stoi(numero1);
        int digito;
        
        if(help==0){
             cout << left;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "El numero " << numero1 << " con base de " << base << " convertido a Hexadecimal es: " << endl;
    cout << "Hexadecimal: 0 (ya que su numero binario no tiene ningun 1)" << endl;
    cout << "------------------------------------------------------------------------" << endl;
        }
        else{
        while (help> 0) {
    digito = help % 10;    
    dec += digito * potencia;
    potencia *= 2;  
    help/=10;
}
while(dec!=0){
            aux=dec%16;
           residuos[r]=aux;
            dec=dec/16;
            r++;
        }
        if (r == 0) cout << "0";

        cout<<left;
        cout<<"------------------------------------------------------------------------"<<endl;
        cout<<"El numero "<<numero1<<" con base de "<<base<<" convertido a Hexadecimal es: "<<endl;
        cout<<"Hexadecimal: ";
        for(int j=r-1; j>=0;j--){
            if(residuos[j] <10){
            cout<<residuos[j];
            }
            else{
                cout<<char('A'+(residuos[j]-10));
            }
        }
        cout<<endl;
        cout<<"------------------------------------------------------------------------"<<endl;
        }
    }
    
    else if(base==8){
    int decimal = 0;
    int exponente = 0;

   
    for (int i = numero1.length() - 1; i >= 0; i--) {
        int digito = numero1[i] - '0'; 
        decimal += digito * pow(8, exponente);
        exponente++;
    }

    
    char hex[100];
    int i = 0;
    int residuo;

    while (decimal > 0) {
        residuo = decimal % 16;

        if (residuo < 10)
            hex[i] = residuo + '0';   
        else
            hex[i] = residuo - 10 + 'A'; 

        decimal /= 16;
        i++;
    }

    
    cout << left;
    cout << "----------------------------------------------------------" << endl;
    cout << "El número " << numero1 << " en base 8 convertido a hexadecimal es:" << endl;
    cout << "Hexadecimal: ";

    for (int j = i - 1; j >= 0; j--) {
        cout << hex[j];
    }

    cout << endl;
    cout << "----------------------------------------------------------" << endl;
}

    }
    
/*Opcion 3*/
/*Menu Dados*/
void simulacionDados() {
    int dado1[1000], dado2[1000], suma[1000];
    int N = 0;                // cantidad de lanzamientos
    bool generados = false;   // verificacion para saber si ya se generaron lanzamientos
    int opcion;               // opción del submenú
    srand(time(0));           // inicializar aleatorios

    do {
        cout << "\n=== SIMULACION LANZAMIENTO DE 2 DADOS ===\n";
        cout << "1. Definir la cantidad de lanzamientos\n";
        cout << "2. Mostrar lanzamientos en un rango\n";
        cout << "3. DistribuciOn de los resultados\n";
        cout << "4. Media del conjunto de resultados\n";
        cout << "5. Mediana del conjunto de resultados\n";
        cout << "6. Moda del conjunto de resultados\n";
        cout << "7. Terminar\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "Ingrese la cantidad de lanzamientos (100 - 1000): ";
                cin >> N;
                if (N < 100 || N > 1000) {
                    cout << "Cantidad fuera de rango.\n";
                    generados = false;
                    break;
                }

                // Generar lanzamientos
                for (int i = 0; i < N; i++) {
                    dado1[i] = rand() % 6 + 1;
                    dado2[i] = rand() % 6 + 1;
                    suma[i]  = dado1[i] + dado2[i];
                }

                cout << "Lanzamientos generados correctamente.\n";
                generados = true;
                break;
            }

            case 2: {
                if (!generados) {
                    cout << "Primero debe definir la cantidad de lanzamientos (opción 1).\n";
                    break;
                }
                int cantidad, desde;
                cout << "Cantidad de lanzamientos a mostrar: ";
                cin >> cantidad;
                cout << "Desde el lanzamiento #: ";
                cin >> desde;
                mostrarLanzamientos(dado1, dado2, suma, cantidad, desde, N);
                break;
            }

            case 3: {
                if (!generados) {
                    cout << "Primero debe generar los lanzamientos (opción 1).\n";
                    break;
                }
                distribucionResultados(suma, N);
                break;
            }

            case 4: {
                if (!generados) {
                    cout << "Primero debe generar los lanzamientos (opción 1).\n";
                    break;
                }
                cout << "Media del conjunto: " << mediaResultados(suma, N) << endl;
                break;
            }

            case 5: {
                if (!generados) {
                    cout << "Primero debe generar los lanzamientos (opción 1).\n";
                    break;
                }
                cout << "Mediana del conjunto: " << medianaResultados(suma, N) << endl;
                break;
            }

            case 6: {
                if (!generados) {
                    cout << "Primero debe generar los lanzamientos (opción 1).\n";
                    break;
                }
                cout << "Moda del conjunto: " << modaResultados(suma, N) << endl;
                break;
            }

            case 7:
                cout << "Regresando al menú principal...\n";
                break;

            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }

    } while (opcion != 7);
}
/*Mostrar los lanzamientos*/
void mostrarLanzamientos(int d1[], int d2[], int s[], int cantidad, int desde, int N) {
    for (int i = desde - 1; i < desde - 1 + cantidad && i < N; i++) {
        cout << "Lanzamiento #" << i + 1 << ": {" << d1[i] << " + " << d2[i] << " = " << s[i] << "}\n";
    }
}
/*La distribucion de los lanzamientos*/
void distribucionResultados(int s[], int N) {
    int conteo[13] = {0};
    for (int i = 0; i < N; i++)
        conteo[s[i]]++;

    cout << "\nValor\tFrecuencia\tPorcentaje\n";
    for (int val = 2; val <= 12; val++) {
        float porcentaje = (float)conteo[val] / N * 100;
        cout << val << "\t" << conteo[val] << "\t\t" << porcentaje << "%\n";
    }
}
/*Calcular la media de resultados*/
float mediaResultados(int s[], int N) {
    float sumaTotal = 0;
    for (int i = 0; i < N; i++)
        sumaTotal += s[i];
    return sumaTotal / N;
}
/*Calcular Mediana de resultados*/
float medianaResultados(int s[], int N) {
    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    if (N % 2 == 0)
        return (s[N / 2 - 1] + s[N / 2]) / 2.0;
    else
        return s[N / 2];
}
/*Calcular Moda de los lanzamientos*/
int modaResultados(int s[], int N) {
    int conteo[13] = {0};
    for (int i = 0; i < N; i++)
        conteo[s[i]]++;
    int maxCount = 0, moda = 0;
    for (int val = 2; val <= 12; val++) {
        if (conteo[val] > maxCount) {
            maxCount = conteo[val];
            moda = val;
        }
    }
    return moda;
}

/*opcion 4*/
/*menu cuadrados magicos */
void moduloCuadradoMagico() {
    int opcion;
    

    do {
        cout << "\n===== MODULO CUADRADO MAGICO =====" << endl;
        cout << "1. Ingresar N y generar el cuadrado" << endl;
        cout << "2. Imprimir el cuadrado" << endl;
        cout << "3. Verificar sumas" << endl;
        cout << "4. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nIngrese el orden del cuadrado (4, 8...): ";
                cin >> N_cuadrado;
                if (N_cuadrado % 4 == 0 && N_cuadrado > 0) {
                    generarCuadrado(cuadrado, N_cuadrado);
                    cout << "\nCuadrado magico generado correctamente!\n";
                } else {
                    cout << "\nError: El orden debe ser par-par (multiplo de 4) y positivo.\n";
                    N_cuadrado = 0;
                }
                break;

            case 2:
                if (N_cuadrado > 0)
                    imprimirCuadrado(cuadrado, N_cuadrado);
                else
                    cout << "\nPrimero debe generar un cuadrado.\n";
                break;

            case 3:
                if (N_cuadrado > 0)
                    verificarSuma(cuadrado, N_cuadrado);
                else
                    cout << "\nPrimero debe generar un cuadrado.\n";
                break;

            case 4:
                cout << "\nRegresando al menu principal...\n";
                break;

            default:
                cout << "\nOpcion no valida.\n";
        }

    } while (opcion != 4);
}

// ---------------------- FUNCIONES DEL CUADRADO ----------------------

// Genera el cuadrado mágico (Método de Intercambio Diagonal)
void generarCuadrado(int matriz[][10], int n) {
    int num = 1;

    // Paso 1: llenar secuencialmente del 1 al N²
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = num++;
        }
    }

    // Paso 2: intercambio diagonal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i % 4 == j % 4) || ((i + j) % 4 == 3)) {
                matriz[i][j] = (n * n + 1) - matriz[i][j];
            }
        }
    }
}

// Imprime el cuadrado mágico
void imprimirCuadrado(int matriz[][10], int n) {
    cout << "\nCuadrado magico de orden " << n << ":\n\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(5) << matriz[i][j];
        }
        cout << endl;
    }
}

// Calcula la constante mágica
int constanteMagica(int n) {
    return n * (n * n + 1) / 2;
}

// Verifica sumas de filas, columnas y diagonales
void verificarSuma(int matriz[][10], int n) {
    int sumaFila, sumaCol, diag1 = 0, diag2 = 0;
    int S = constanteMagica(n);
    bool correcto = true;

    for (int i = 0; i < n; i++) {
        sumaFila = 0;
        sumaCol = 0;
        for (int j = 0; j < n; j++) {
            sumaFila += matriz[i][j];
            sumaCol += matriz[j][i];
        }
        if (sumaFila != S || sumaCol != S)
            correcto = false;
    }

    for (int i = 0; i < n; i++) {
        diag1 += matriz[i][i];
        diag2 += matriz[i][n - i - 1];
    }

    if (diag1 != S || diag2 != S)
        correcto = false;

    cout << "\nConstante magica esperada: " << S << endl;
    cout << "Diagonal 1: " << diag1 << " | Diagonal 2: " << diag2 << endl;
    cout << (correcto ? "\nVerificacion exitosa: Es un cuadrado magico!"
                      : "\nVerificacion fallida: No cumple las sumas magicas.")
         << endl;
}

