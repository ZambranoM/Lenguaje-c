#include <iostream>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Para poder trabahar con lenguaje c++ es necesario usar el using namespace std;
using namespace std;
/*
integrante

Astrid Katherine Kopp Guerra 31.098.436
Diego Alberto Zambrano Alviarez 30.092.244

*/

int main(int argc, char** argv) {
	int const n=2;
	//Defino mis arreglos unidimensionales y mis variables a usar 
	int piso5,dis=0,tot=0,mayor=-1,valor,pisosdispo;
	float ocupado;
	int pisoEsta[100],puestotal[100],puesDis[100],horaApertura[100],costo[100],cierre[100],cant;
	//Deinos mis arreglos y mis vraibles para poder trabajar
	int resp1,cedula[10],notas[n][6],compu=0,mate=0,dibu=0,intro=0,perso=0,lengua=0,acu,mayorprom=-1,ceduMayor;
	float compu1,mate1,dibu1,intro1,perso1,lengua1;
	char nombres[n][30],nomMayor[30],resp;
	
		//Recorro y lleno mis arreglos unidimensionales que osn cedula y nombres
		for(int i=0;i<n;i++){
		fflush(stdin);
		//Pido el nombre
		cout<<"Ingrese el nombre de la estudiantes "<<i+1<<"\n";
		gets(nombres[i]);
		//Pido la cedula 
		cout<<"Ingrese la cedula del estudiantes "<<i+1<<"\n";
		cin>>cedula[i];
			//Comiennzo a recorrer mi arreglo bidimensional llamado notas y comienzo a llenarlo 
			for(int j=0;j<6;j++){
				//Coloco condicionales para saber cual materia es y mostrar el mensaje correspondiente 
				if(j==0){
				cout<<"Por favor ingrese la nota de computacion 1 del estudiante "<<nombres[i]<<"\n";
				cin>>notas[i][j];
				//Creo un acumulador para ir guarndo los valores de compu
				compu=compu+notas[i][j];
				}
				if(j==1){
				cout<<"Por favor ingrese la nota de Matematica 1 del estudiante "<<nombres[i]<<"\n";
				cin>>notas[i][j];
				mate=mate+notas[i][j];
				}
				if(j==2){
				cout<<"Por favor ingrese la nota de Dibujo 1 del estudiante "<<nombres[i]<<"\n";
				cin>>notas[i][j];
				dibu=dibu+notas[i][j];
				}
				if(j==3){
				cout<<"Por favor ingrese la nota de Introduccion a la Ing.Mecanica del estudiante "<<nombres[i]<<"\n";
				cin>>notas[i][j];
				intro=intro+notas[i][j];
				}
				if(j==4){
				cout<<"Por favor ingrese la nota de Efectividad personal del estudiante "<<nombres[i]<<"\n";
				cin>>notas[i][j];
				perso=perso+notas[i][j];
				}
				if(j==5){
				cout<<"Por favor ingrese la nota de Lenguaje del estudiante "<<nombres[i]<<"\n";
				cin>>notas[i][j];
				lengua=lengua+notas[i][j];
				}
				
		}
		
	}

	//Saco el promedio de notas de las materias 
	compu1=compu/n;
	mate1=mate/n;
	dibu1=dibu/n;
	intro1=intro/n;
	perso1=perso/n;
	lengua1=lengua/n;
	
	//Hago las condiciones necesarias para indicar cual fue la materia con menor promedio
	if(compu1<dibu1 && compu1<intro1 && compu1<perso1 && compu1<lengua1 && compu1<mate1){
		cout<<"computacion fue la materia que tuvo el promedio mas bajo";	
	}
	if(dibu1<compu1 && dibu1<intro1 && dibu1<perso1 && dibu1<lengua1 && dibu1<mate1){
		cout<<"Dibujo fue la materia que tuvo el promedio mas bajo";
	}
	if(intro1<compu1 && intro1<dibu1 && intro1<perso1 && intro1<lengua1 && intro1<mate1){
		cout<<"Introducion a la Mecanica  fue la materia que tuvo el promedio mas bajo";
	}
	if(perso1<compu1 && perso1<dibu1 && perso1<intro1 && perso1<lengua1 && perso1<mate1){
		cout<<"Efectividad personal fue la materia que tuvo el promedio mas bajo";
	}
	if(lengua1<compu1 && lengua1<dibu1 && lengua1<intro1 && lengua1<perso1 && lengua1<mate1){
		cout<<"Lenguaje fue la materia que tuvo el promedio mas bajo";
	}
	if(mate1<compu1 &&mate1<dibu1 &&mate1<intro1&& mate1<lengua1&&mate1<perso1){
		cout<<"Matematica fue la materia que tuvo el promedio mas bajo";
	}
	
	//Determino el estudiante con mayor promedio
 	for(int i=0;i<n;i++){
 		//Creo un acumulador en donde cada iteracion del ciclo sera 0
 		acu=0;
 		for(int j=0;j<n;j++){
 			//Digo que mi acumulador va ser le resultado 
 			acu=acu+notas[i][j];
 			acu=acu/6;
		 }
		 //comparo mi acumiulador con mi promedio guardado
		 if(mayorprom<acu){
		 	//Si es menos qua acumuladro ahora mayorprom sera igual a acumulador
		 	mayorprom=acu;
		 	//Guardo el nombre del estudiante con mayor promedio
		 	strcpy(nomMayor,nombres[i]);
		 	//Guardo la cedula 
		 	ceduMayor=cedula[i];
		 }
	 }
	 //Muestro por pantalla
	 cout<<nomMayor<<" "<<ceduMayor;
	 
	//Comentario para ve si el usuario desea ver la segunda parte
	cout<<"Desea ver la segunda parte";
	cin>>resp;
	 
	 //Condicion para ver si la segunda parte del ejercicio se ejecuta
	 if(resp=='S' || resp=='s'){
			cout<<"ingrese cantidad de pisos";
			cin>>cant;
			pisoEsta[cant];
			puestotal[cant];
			puesDis[cant];
			horaApertura[cant];
			cierre[cant];
			costo[cant];
			for(int i=0;i<cant;i++){
				cout<<"ingrese le numero del piso\n";
				cin>>pisoEsta[i];
				cout<<"ingrese los puesto totates del piso\n";
				cin>>puestotal[i];
				cout<<"ingrese los puesto disponibles del piso\n";
				cin>>puesDis[i];
				cout<<"Ingrese la hora de apertura\n ";
				cin>>pisoEsta[i];
				cout<<"Ingrese la hora de cierre\n ";
				cin>>cierre[i];
				cout<<"Ingrese el costo por hora\n ";
				cin>>costo[i];
			}
			//Creo un ciclo for para poder recorrer los arreglo y extraer los valores que nesecito 
			for(int i=0;i<cant;i++){
				//Sumo los valores guardados en mi arreglo en variables apartes, para luego usarlas 
				dis=dis+puesDis[i];
				tot=tot+puestotal[i];
				//Recorro mi arreglo costo par encontrar el valor mas alto y por ende el mas costoso
				if(costo[i]>mayor){
					//Guardo el indice para poder usarlo luego
					mayor=costo[i];
					valor=i;
				}
				//Hago mi condicion para sumar los espacios disponibles entre los pisos 3 y 5
				if(i>=3 && i<=5){
					pisosdispo=pisosdispo+puesDis[i];
				}
			}
			ocupado=(tot-dis)/cant;
			cout<<"El promedio de puestos ocupados es "<<ocupado;
			if(cant>=5){
				cout<<"La cantidad de pisos disponibles entre los pisos 3 y 5 es ",pisosdispo;
			}
			cout<<"El piso que tiene el valor mas caro es el piso "<<valor+1;
	 }
	 
	return 0;
}
