#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <time.h>


void menu();
void creararchivo();
void menunumeros();
void generar_1000();
void generar_2000();
void generar_3000();
void generar_4000();
void mostrar();
void ordenar();
void buscar();
void buscar_1000();
void buscar_2000();
void buscar_3000();
void buscar_4000();
void guardar_archivo();
void guardar_1000();
void guardar_2000();
void guardar_3000();
void guardar_4000();

int opcion,opcion2,opcion3,opcion4,opcion5,opcion6;
int aux;
int num[4000],num2[4000],num3[4000],num4[4000];

FILE *archivo;

int main(){

menu();
    return 0;
}
void menu (){

do{


     printf("\nMENU PRINCIPAL.\n");

	printf("1. generar numeros\n");

	printf("2. mostrar numeros\n");

	printf("3. ordenar numeros\n");

	printf("4. bucar numeros\n");

	printf("5. guardar archivo\n");

	printf("0. Salir\n");

	printf("Ingrese una opcion: ");

scanf("%d", &opcion);
    system("cls");
		switch(opcion){
			case 1:menunumeros();
				break;
			case 2:mostrar();
				break;
			case 3:ordenar();
				break;
            case 4:buscar();
                break;
            case 5:guardar_archivo();
                break;
			default: printf("Opcion invalida\n");
			}

	}while(opcion != 0);

}

void menunumeros(){
do{

     printf("CUANTOS NUMEROS DESEA CREAR?\n");

	printf("1. 1000\n");

	printf("2. 2000\n");

	printf("3. 3000\n");

	printf("4. 4000\n");

	printf("0. menu principal\n");

	printf("Ingrese una opcion: ");

scanf("%d", &opcion2);
    system("cls");
		switch(opcion2){
			case 1:generar_1000();
				break;
			case 2:generar_2000();
				break;
			case 3:generar_3000();
				break;
            case 4:generar_4000();
                break;
            case 0
            :menu();
                break;
			default: printf("Opcion invalida\n");
			}

	}while(opcion != 0);


}
void generar_1000(){
srand(time(0));
for(int i=0;i<1000;i++){
num[i]=rand()%1000;
}
printf("1000 numeros generedados\n");

}
void generar_2000(){
srand(time(0));
for(int i=0;i<2000;i++){
num2[i]=rand()%2000;
}
printf("2000 numeros generedados\n");

}
void generar_3000(){
srand(time(0));
for(int i=0;i<3000;i++){
num3[i]=rand()%3000;
}
printf("3000 numeros generedados\n");

}
void generar_4000(){
srand(time(0));
for(int i=0;i<4000;i++){
num4[i]=rand()%4000;
}
printf("4000 numeros generedados\n");

}
void mostrar(){
do{


     printf("\nque cantidad de numeros desea mostrar?\n");

	printf("1. 1000\n");

	printf("2. 2000\n");

	printf("3. 3000\n");

	printf("4. 4000\n");

	printf("0. menu principal\n");

	printf("Ingrese una opcion: ");

scanf("%d", &opcion3);
    system("cls");
		switch(opcion3){
			case 1:
			    for(int i=0;i<1000;i++){
			        printf("%d. %d\n",i,num[i]);
                    }
				break;
			case 2:
			     for(int i=0;i<2000;i++){
			         printf("%d. %d\n",i,num2[i]);
                    }
				break;
			case 3:   for(int i=0;i<3000;i++){
			        printf("%d. %d\n",i,num3[i]);
                    }
				break;
            case 4:
                 for(int i=0;i<3000;i++){
			         printf("%d. %d\n",i,num4[i]);
                 }
                break;
            case 0
            :menu();
                break;
			default: printf("Opcion invalida\n");
			}

	}while(opcion != 0);

}
void ordenar (){
do{


     printf("\nque cantidad de numeros desea ordenar?\n");

	printf("1. 1000\n");

	printf("2. 2000\n");

	printf("3. 3000\n");

	printf("4. 4000\n");

	printf("0. menu principal\n");

	printf("Ingrese una opcion: ");

scanf("%d", &opcion4);
    system("cls");
		switch(opcion4){
			case 1:
			    for(int i=0;i<1000;i++){
			        for(int j=0;j<1000;j++){
                        if(num[j]>num[j+1]){
                            aux=num[j];
                            num[j]=num[j+1];
                            num[j+1]=aux;
                        }
                    }
                 }
                 printf("1000 NUMEROS ORDENADOS");
				break;
			case 2:for(int i=0;i<2000;i++){
			        for(int j=0;j<2000;j++){
                        if(num2[j]>num2[j+1]){
                            aux=num2[j];
                            num2[j]=num2[j+1];
                            num2[j+1]=aux;
                        }
                    }
                 }
                   printf("2000 NUMEROS ORDENADOS");
				break;
			case 3:for(int i=0;i<3000;i++){
			        for(int j=0;j<3000;j++){
                        if(num3[j]>num3[j+1]){
                            aux=num3[j];
                            num3[j]=num3[j+1];
                            num3[j+1]=aux;
                        }
                    }
                 }
                   printf("3000 NUMEROS ORDENADOS");
				break;
            case 4:for(int i=0;i<4000;i++){
			        for(int j=0;j<4000;j++){
                        if(num4[j]>num4[j+1]){
                            aux=num4[j];
                            num4[j]=num4[j+1];
                            num4[j+1]=aux;
                        }
                    }
                 }
                   printf("4000 NUMEROS ORDENADOS");
                break;
            case 0
            :menu();
                break;
			default: printf("Opcion invalida\n");
			}

	}while(opcion != 0);
}

void buscar(){
do{


     printf("\nEN QUE CANTIDAD DE NUMEROS DESEA BUSCAR?.\n");


	printf("1. 1000\n");

	printf("2. 2000\n");

	printf("3. 3000\n");

	printf("4. 4000\n");

	printf("0. menu principal\n");

	printf("Ingrese una opcion: ");

scanf("%d", &opcion5);
    system("cls");
		switch(opcion5){
			case 1:buscar_1000();
				break;
			case 2:buscar_2000();
				break;
			case 3:buscar_3000();
				break;
            case 4:buscar_4000();
                break;
            case 0:menu();
			default: printf("Opcion invalida\n");
			}

	}while(opcion != 0);

}
void buscar_1000(){
int numbuscar;
char band='F';
int i=0;
printf("ingrese el numero que desea buscar: ");
scanf("%d",&numbuscar);
    while((band=='F')&&(i<1000)){
        if(num[i]==numbuscar){
            band='V';
        }
        i++;
    }
    if(band=='f'){
        printf("no fue encontrado");
    }else{
        if(band=='V'){
            printf("el numero se encontro en la posicion %d",i-1);
        }
    }

 }
 void buscar_2000(){
int numbuscar;
char band='F';
int i=0;
printf("ingrese el numero que desea buscar: ");
scanf("%d",&numbuscar);
    while((band=='F')&&(i<2000)){
        if(num2[i]==numbuscar){
            band='V';
        }
        i++;
    }
    if(band=='F'){
        printf("no fue encontrado");
    }else{
        if(band=='V'){
            printf("el numero se encontro en la posicion %d",i-1);
        }
    }

 }
  void buscar_3000(){
int numbuscar;
char band='F';
int i=0;
printf("ingrese el numero que desea buscar: ");
scanf("%d",&numbuscar);
    while((band=='F')&&(i<3000)){
        if(num3[i]==numbuscar){
            band='V';
        }
        i++;
    }
    if(band=='F'){
        printf("no fue encontrado");
    }else{
        if(band=='V'){
            printf("el numero se encontro en la posicion %d",i-1);
        }
    }

 }
   void buscar_4000(){
int numbuscar;
char band='F';
int i=0;
printf("ingrese el numero que desea buscar: ");
scanf("%d",&numbuscar);
    while((band=='F')&&(i<4000)){
        if(num4[i]==numbuscar){
            band='V';
        }
        i++;
    }
    if(band=='F'){
        printf("no fue encontrado");
    }else{
        if(band=='V'){
            printf("el numero se encontro en la posicion %d",i-1);
        }
    }

 }
 void guardar_archivo(){
 do{


     printf("\nQUE CANTIDAD DE NUMEROS DESEA GUARDAR?\n");

	printf("1. 1000\n");

	printf("2. 2000\n");

	printf("3. 3000\n");

	printf("4. 4000\n");

	printf("0. menu principal\n");

	printf("Ingrese una opcion: ");

scanf("%d", &opcion6);
    system("cls");
		switch(opcion6){
			case 1:guardar_1000();
				break;
			case 2:guardar_2000();
				break;
			case 3:guardar_3000();
				break;
            case 4:guardar_4000();
                break;
            case 0:menu();
                break;
			default: printf("Opcion invalida\n");
			}

	}while(opcion != 0);




 }

void guardar_1000(){
    char direccion[]="D:\\archivo\\1000.txt";
   archivo=fopen(direccion,"w");
   if(archivo==NULL){
    printf("no se pudo guardar el archivo");
   }else{
       printf("se guardo el archivo\n");
       printf("ubicacion: %s\n",direccion);
   }
   for(int i=0;i<1000;i++){
    fprintf(archivo,"%d. %d\n",i,num[i]);
   }
    fclose(archivo);


}
void guardar_2000(){
    char direccion[]="D:\\archivo\\2000.txt";
   archivo=fopen(direccion,"w");
   if(archivo==NULL){
    printf("no se pudo guardar el archivo");
   }else{
       printf("se guardo el archivo\n");
       printf("ubicacion: %s\n",direccion);
   }
   for(int i=0;i<2000;i++){
    fprintf(archivo,"%d. %d\n",i,num2[i]);
   }
    fclose(archivo);


}
void guardar_3000(){
    char direccion[]="D:\\archivo\\3000.txt";
   archivo=fopen(direccion,"w");
   if(archivo==NULL){
    printf("no se pudo guardar el archivo");
   }else{
       printf("se guardo el archivo\n");
       printf("ubicacion: %s\n",direccion);
   }
   for(int i=0;i<3000;i++){
    fprintf(archivo,"%d. %d\n",i,num3[i]);
   }
    fclose(archivo);


}
void guardar_4000(){
    char direccion[]="D:\\archivo\\4000.txt";
   archivo=fopen(direccion,"w");
   if(archivo==NULL){
    printf("no se pudo guardar el archivo");
   }else{
       printf("se guardo el archivo\n");
       printf("ubicacion: %s\n",direccion);
   }
   for(int i=0;i<4000;i++){
    fprintf(archivo,"%d. %d\n",i,num4[i]);
   }
    fclose(archivo);


}





