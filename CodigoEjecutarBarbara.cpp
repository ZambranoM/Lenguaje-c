#include <iostream>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
//Defino el prototipo de las dunciones que voy a usar dentro de mi funcion princiapl 
//Funcion que voy a usar para mostrar mi matriz
void mostrar(char matrix[][10], int nfilas, int ncol);
//Funcion que uso para crear mi primer barco con tamaño de 1x1
void barcoUno(char m[][10]);
//Funcion que uso para crear mi segundo barco con tamaño 2x1
void barcoDos(char m[][10]);
//Funcion que uso para crear mi tercer barco con tamaño 1x3
void barcoTres(char m[][10]);
//Funcion que valida si gano o perdio el usario, y al mismo tiempo muestra como va el juego 
void tiro(char m[][10]);
//Funcion que me genera numero aleatoreo
int numero();
//Funcion que me genera numero aleatoreo
int numero2();
//Funcion que me genera numero aleatoreo
int numero3();

//Funcion principal llamada main 
int main(int argc, char** argv){
	//Creo mis constantes de la matriz tanto de filas como de columnas 
	const int nfilas=10;
	const int ncol=10;
	
	//Defino mi varibales que usare dentro de los ciclos for 
	int n=10, i ,j;
	//Defino mi matriz que sera mi campo de batalla
	char matriz[10][10];
	//incializo mi variable con el caracter '0'
	for(i=0;i<n;i++){
		//Uso mi for para recorrer mi matriz por filas y uso fflush para limpiar el bufe de entrada 
		fflush(stdin);
			for(j=0;j<n;j++){
				//Uso dentro de mi ciclo for otro ciclo for para recorrer ahora las columas de mi matriz y de igual forma uso fflush 
				fflush(stdin);
				matriz[i][j]='0';
			}
	}
	//despues de tener inicializada mi matriz con los caracteres de 0 ahora creo mis barcos
	
	//Muestro el resultado de mi matrz, opcional 
	mostrar(matriz,nfilas, ncol);
	//Barco uno
	barcoUno(matriz);
	//barco dos 
	barcoDos(matriz);
	//Barco tres
	barcoTres(matriz);
	//Llamo a mi funcion que valida los aciertos y errores que de los comando de mi funcion
	tiro(matriz);
	
	//Termina mi funcion principal
}

//Cuando trabaje con arreglos bidimensionales y tenga que pasar como parametros debo poner como tamanio maximo el mismo que de columas si no me crea error;


//Funcion para validar los valores de entrada
int valor1(){
	int num=-1,i;
	char a;
	char letras[]={'A','B','C','E','F','G','H','I','J','K'};
	char letras2[]={'a','b','c','e','f','g','h','i','j','k'};
	do{
		printf("\nPor favor ingrese la primera coordenada: ");
		scanf("%c",&a);
		for(i=0;i<10;i++){
			if(a==letras[i] || a==letras2[i]){
				num=i;
			}
		}
		if(num<0){
			printf("\nPor favor ingrese bien la primera coordenada: ");
		}
	}while(num<0);

	return num;
	
}

//Funcion para validar mi segunda coordenada
int valor2(){
	int b,i;
	
	do{
		printf("\nPor favor ingrese la segunda coordenada: ");
		scanf("%d",&b);
		if( b>10 || b==0){
			printf("\nPor favor ingrese valores entre 1 y 10"); 
		}
		
	}while(b==0 || b>10);
	b=b-1;
	return b;
}
//Creo mi funcion tiro
void  tiro(char m[][10]){
	int a,b,cont=0,i;
	for(i=0;i<10;i++){
		//Creo una condicion para validar si gana o no
		if(cont==6){
			printf("Felicidades acabas de ganar\n");
			break;
		}
		//Uso fflush para poder limpiar el bufe de entrada 
		fflush(stdin);
		//muestro la cantidad de tiros restantes
		printf("\nLa cantida de tiros que le quedan son: %d",10-i);
		//Ya que contrui funciones que me sirven para poder validar coordenadas las uso 
		a=valor1();
		b=valor2();
		//Valido si las coordenada introducidas por el jugador son correctas y si es asi me marque un '*'
	if(m[a][b]=='1'||m[a][b]=='2'|| m[a][b]=='3'){
		m[a][b]='*';
		cont=cont+1;
	}
	if(m[a][b]=='*'||m[a][b]=='*'|| m[a][b]=='*'){
		printf("Esa coordenada ya fue usada por favor ingrese otra");
	}
	else{
		//Y si no son corrextas me marque una 'X'
		m[a][b]='X';
		}
		//Al terminar cada ciclo del mi for y evaluar muestro como va el progreso 
		printf("\n");
		mostrar(m, 10, 10);
		printf("\n");
	}
	//Termina mi funcion tiro	
}
int numero(){
	//Para poder hacer mi funcion que me arroje nmumero aleatoreos creo un arreglo con los valores de 0 a 9 de valores desordenada para así con el numero
	/* la sermilla que me de mi funcion srand() que es un funcion que esta dentro de la libreria stdlib.h elegir un valore que este dentro de mi
	arreglo con el intervalo de numeros de 0 a 9 elegirlo de manera completamente aleatorea*/
	int resul;
	int nume[10]={9,2,1,5,4,0,8,7,6,3};
	srand(time(NULL));
	resul=rand()%10;
	//Y al final devuelvo el numero que se encuentre en dicha posición de mi arreglo
	return nume[resul];
	//Termina mi funcion numero	
}
int numero2(){
	//En este caso solamente uso el valor alearorio que me da la semilla la libria stdlib 
	int resul;
	srand(time(NULL));
	resul=rand()%10;
	return resul;	
	//Termina mi funcion numero2
}
int numero3(){
	/*Aqui de igual forma uso la metodologia que use en mi funcion numero*/
	int resul;
	int nume[10]={6,7,9,2,3,1,4,8,0,5};
	srand(time(NULL));
	resul=rand()%10;
	return nume[resul];	
//Termina mi funcion numero3	
}
//Creo una funcion para crear mi barco uno de una sola posicion
void barcoUno(char m[][10]){
	int p1,p2;
	//Uso mi funcion numero aleatoreo para poder crear numero que  cambien
	p1=numero();
	p2=numero2();
	//Guardo la posicion de mi barco 1
	m[p1][p2]='1';
	//Como mi funcion solo cambia un valor dentro de mi matriz y no es necesario que me devuelva algo por eso es una funcion vacia o void
	//Termina mi funcion barcouno
}

void barcoDos(char m[][10]){
	int p1,p2;
	//Uso mi funcion numero aleatoreo para poder crear numero que cosntantemente cambien
	p1=numero2();
	p2=numero();	
	//Creo una condicion en mi p1 por que si esta en la posicion 9 es decir el limite de las filas, tome ese valor pero tambien el de atras, es decir que no avance 
	if(p1==9){
		m[p1][p2]='2';
		p1=p1-1;
		m[p1][p2]='2';
	}
	//Si mi p1 no es nueve entonces puede tomar el siguiente valor y asi crear mi barco de dos posiciones
	else{
		m[p1][p2]='2';
		p1=p1+1;
		m[p1][p2]='2';
	}
	//Como mi funcion solo cambia un valor dentro de mi matriz y no es necesario que me devuelva algo por eso es una funcion vacia o void
	//Termina mi funcion barcodos 
}
//Mi barco 3
void barcoTres(char m[][10]){
	int p1,p2;
	//Uso mi funcion numero aleatoreo para poder crear numero que cosntantemente cambie
	p1=numero3();
	//
	p2=numero2();
	//Creo una condicion para ver si mi p2 es 9 o 8, ya que si toma estos valores el barco tendra un error, si llega a tomar estos valores en vez de avanzar va a 
	//retroceder para asi crear mi barco de 3 de tamanio
	if(p2==9 ||p2==8 ){
		m[p1][p2]='3';
		p2=p2-1;
		m[p1][p2]='3';
		p2=p2-1;
		m[p1][p2]='3';
	}
	else{
		m[p1][p2]='3';
		p2=p2+1;
		m[p1][p2]='3';
		p2=p2+1;
		m[p1][p2]='3';
	}
	
	//Termina mi funcion barco3
}
//Funcion mostrar 
void mostrar(char m[][10], int nfilas, int ncol){
	//Definos mis varaibles a usar en la funcion
	int i,j,k,conta=0;
	//Creo mi arreglo num para mostrar por pantalla para que el usuario pueda ver la posicion de las filas 
	int nume[]={1,2,3,4,5,6,7,8,9,10};
	//Creo mi arreglo letras para mostralo por pantalla y asi el usuario se ubique 
	char letras[]={'A','B','C','E','F','G','H','I','J','k'};
	//Coloco un espacio para cuadrar mi arreglo numero centrado a las columas de mi matriz
	printf("  ");
	//Comienzo a recorrer mi arreglo nume y mostrarlo por pantalla
	for(k=0;k<10;k++){
		//Tiene tantos espacios para mostrar centrado los numero dentro de la matriz 
		printf("   %d",nume[k]);
	}
	//Ahora un salto de linea para que despues que termine de recorrer nume comience a mostrar mi matriz
	printf("\n");
	//Comienzo a recorrer mi matriz
	for(i=0;i<nfilas;i++){
		//Comienzo colocando un espacio para que no quede tan pegada y luego la letra que corresponda al indice "i" luego otro espacio para cuadrar bine la matriz 
		printf(" %c ",letras[i]);
		//Ahora recorro la columnas de mi matriz con este segundo for 
		for(j=0;j<ncol;j++){
			//muestro por pantalla lo que contenga mi matriz comenzando con una barra "|" luego por el valor guardado en mi matriz y despues un espacio
			printf("| %c ",m[i][j]);
			if(j==9){
				//Ya que solo estoy usando una barra nada mas, ya que si pongo las dos se va a ver desordenado 
				//Creo una condicion para que cuando se ejecute el segundo for, y mi indice, es decir "j" sea igual al ultimo valor es decir 9 me imprima 
				//la ultima barra y crear bien la matriz 
				printf("|");
			}
		}
		//Hago un  salto de linea al final de cada ciclo for para que cuando el primer for se vuelva a ejecutar comienze en otra linea
		printf("\n");
	}
}