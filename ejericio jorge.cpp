#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void calcularArea(int a ,float *area1, float *resis);
void paracaidas(int peso, int tiempo);
int main(int argc, char** argv) {
	
	int a,peso, tiempo;
	float area1,resis;
	char resp1;
	printf("Por favor ingrese el diametro");
	scanf("%d",&a);
	calcularArea(a, &area1, &resis);
	printf("funcion principal\n");
	printf("area : %f \n",area1);
	printf("resis: %f\n",resis);
	
	printf("Segunda funcion\n");
	
		printf("Por favor  ingrese el peso");
		scanf("%d",&peso);
		printf("Por favor  ingrese el tiempo");
		scanf("%d",&tiempo);
		paracaidas(peso,tiempo);

	
	return 0;
}
void paracaidas(int peso, int tiempo){
	int masa1;
	float resu1, resu2,resu3,resu4,resu5,resu6,masa;
	masa1=peso/9.8;
	//Calculo de masa
	masa=masa1*9.8;
	//raiz cubica de tiempo
	resu1=pow(tiempo,0.33);
	//Masa sobre tiempo
	resu2=(masa)/resu1;
	//Masa por tiempo
	resu3=masa1*tiempo;
	// 1 entre la masa por le tiempo
	resu4=1/resu3;
	// 1 entre masa por tiempo por menos 1 para que quede negativo
	resu4=resu4*(-1);
	//euler elevaado al resu4
	resu5=pow(2.71,resu4);
	//le restamos uno a resu5
	resu5=1-resu5;
	//multiplicamos resu2 por resu5
	resu6=resu2*resu5;
	if(resu6>=15.5){
		printf("si supero la velocidad de 15,5 m/s el tiempo fue %d y la velocidad fue %f",tiempo,resu6);
	}
	else{
		printf("No supero la velocidad por de 15,5 m/s el peso fue %d y la velocidad fue %f",peso, resu6);

	}
	
}

void calcularArea(int a ,float *area1, float *resis){
	//int resu1;
	float x,resul1,area,resul2,resul3,resul4,resul5;
	//convierto mi diametro de centimentros a metros 
	if(a<100){
		x=a/10;
	}else{
		x=a/100;
	}
	resul1=(x/2);
	area=16*(3.1416)*pow(resul1,2);
	
	
	
	//La resistencia que soporta el tanque 
	resul2=area+(3.1416/2);
	
	resul3=pow(resul2,0.5);
	
	resul4=1-resul3;
	//valor absoluto
	
	if(resul4<0){
		resul4=resul4*(-1);
	}
	resul5=pow(2.7182,resul4);
	*area1=area;
	*resis=resul5;
	
}