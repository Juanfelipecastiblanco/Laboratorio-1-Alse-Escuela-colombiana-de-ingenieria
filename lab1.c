/* Laboratorio numero 1 Alse 2021
 * David Enrique Gantiva Cifuentes
 * Juan Felipe Castiblanco Hernandez
 * Diego Alejandro Gomez
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_TAM 100

void validador (char a[],int *resv );
void validador2 (char a[],int *resv2);
void conversor (char a[],char *istrArr[]);

int main ()
{
        unsigned int opcion;
        char conj1[MAX_TAM]="VACIO";
        char conj2[MAX_TAM]="VACIO";
        char *strArr[MAX_TAM] = {0};
        int resv=0, nums;
        int resv2=0;

        do
        {
                printf("\n\tEste programa realiza varias operaciones sobre uno o dos conjuntos\n\t"
                       "de datos ingresados por el usuario.\n\t"
                       "\n\tMenu\n\n"
                       "\t1. Ingresar un conjunto de datos.\n"
                       "\t2. Mostrar promedio.\n"
                       "\t3. Mostrar desviacion estandar.\n"
                       "\t4. Mostrar valores maxiomos y minimo.\n"
                       "\t5. Mostrar todo.\n"// faltan las dos opciones punto 2.
                       "\t9. Salir.\n");
                scanf("%d",&opcion);

        /*inicio anidamiento*/

                switch(opcion)
                {
                        case 1:
                                printf("Ingrese (maximo 5) numeros enteros separados por punto"
                                       " y coma (;). (Ejemplo: 1;2;3;4;5) :\n");
				scanf("%s", conj1);
                                break;
                        case 2:
                                validador (conj1, &resv );
                                if (resv==1){
                                        printf("Muy bien continuemos...\n");//el string pasa bien..
                                        conversor (conj1,strArr);
                                        printf("Esto es strArr[0]: %s\n", strArr[0]);//strArr sale
                                        printf("Esto es strArr[1]: %s\n", strArr[1]);//prueba
                                        printf("Esto es strArr[2]: %s\n", strArr[2]);//prueba
                                        printf("Esto es strArr[3]: %s\n", strArr[3]);//prueba


                                }
                                resv = 0;
                                break;
                        case 3:
                                validador (conj1, &resv );
                                if (resv==1){
                                        printf("Muy bien continuemos...\n");
                                }
                                resv = 0;

                                break;
                        case 4:
                                validador (conj1, &resv );
                                if (resv==1){
                                        printf("Muy bien continuemos...\n");
                                }
                                resv = 0;

                                break;
                        case 5:
                                validador (conj1, &resv );
                                if (resv==1){
                                        printf("Muy bien continuemos...\n");
                                }
                                resv = 0;



                                break;
                        case 6:
                                printf("Ingrese (maximo 5) numeros enteros separados por punto"
                                          " y coma (;). (Ejemplo: 1;2;3;4;5) :\n");
                                scanf("%s", conj2);


                                break;
                        case 7:
                                validador (conj1, &resv );
                                validador2 (conj2, &resv2 );
                                if (resv2 + resv  == 2){
                                        printf("Muy bien continuemos...\n");
                                printf("Oprimio el 7");
                                }
                                resv2 = 0;
                                resv = 0;
                                break;
                        case 8:
                                validador (conj1, &resv );
                                validador2 (conj2, &resv2 );
                                if (resv2 + resv == 2){
                                        printf("Muy bien continuemos...\n");
                                printf("Oprimio el 8");
                                }
                                resv2 = 0;
                                resv = 0;


                                break;
                }

                if (opcion > 9 || opcion ==0)
 
                              {
                        printf("Opcion invalida\n");
                }

        /*Fin del Anidamiento*/

        }while (opcion != 9);


        return 0;
}
/*----------Declaracion de funciones---------------*/

void validador (char a[],int *resv) //comprueba si el usuario ingreso o no valores, punto (2 a 5).
{
        if (strcmp(a,"VACIO" ) == 0 )
        {
                printf("El conjunto de numeros esta Vacio! (Dirijase a la opcion 1)\n");
        }else
        {
               *resv = 1;
        }
}

void validador2 (char a[],int *resv2) //comprueba si el usuario ingreso o no valores, punto (7 a 8).
{
        if (strcmp(a,"VACIO" ) == 0 )
        {
                printf("El conjunto de de numeros esta Vacio! (Dirijase a la opcion 6)\n ");
        }else
        {
               *resv2 = 1;
        }
}

void conversor ( char a[], char *strArr[])            //transforma el string a un arreglo de numeros
{
        char *token;
        int i=0;
        char *strSplit = a;

        while ((token = strtok_r(strSplit , ";", &strSplit)))
                {
                        strArr[i++] = token;                 //strArr guarda cada numero
                }

        printf("esto es i(cuantos numeros hay) : %i", i);

        for (int j=0; j<i; j++){
                printf("esto es strArr en %i : %d\n", j, (*strArr[j]));
        }

}

/*int mostrarMm(int h, int l, int max_tam){
        int i=0, mayor=0, menor=0;
        for (i=0;i<=max_tam,i++);{

                if h[i]< l[i]{
                        menor = h[i];
                        printf("Entre %d del conjunto 1, y %d del conjunto 2, es menor %d\n",menor);
                }
                if h[i]>l[i]{
                        mayor=h[i];
                        printf("Entre %d del conjunto 1, y %d del conjunto 2, es mayor %d\n",mayor);
                }
        return 0;
        }
int mostrarsuma(inte h, int l, int max_tam){
        int i=0; suma1=0,suma2=0;
  if suma1<suma2{
                print("La suma de numeros del conjunto 1 es menor a la suma de numeros del conjunto 2 \n");
        }
        if suma1==suma2{
                printf("La suma de los numeros de ambos conjuntos son iguales\n");

        }
        if suma>suma2{

                printf("La suma de los numeros del conjunto 1 es mayor a la suma de numeros del conjunto 2\n");

        }





        }




        return 0;

}




        return 0;
}








                                                    
int valoresMm(int h){
        int maximo=0, minimo=0, i=0;
        maximo=h[0];
        for (i=0;i<=max_tam;i++);{
                if h[i]>maximo{
                        maximo = h[i];

                }

        }
        printf("El número mayor del conjunto de datos que ingresó es:\n");
        printf("%d\n",maximo);
        minimo=h[0];
        for (i=0;i<=max_tam;i++);{
                if h[i]<minimo{
                        minimo=h[i]
                }


        }
        printf("El número menor del conjuntode datos que ingresó es: \n");
        printf("%d\n",minimo);


        return maximo, minimo;
}
int mostrar_todo(float prom, float resultado, int maximo, int minimo){

        printf("Estos son todas las posibles operaciones que el programa realiza con los números que usted ingresó\n");
        printf(" 1. Promedio: %.2f\n",prom);
        printf(" 2. Desviacion estandar: %.2f\n",resultado);
        printf(" 3. Valor maximo: %d\n",maximo);
        printf(" 4. Valor mínimo: %d\n",minimo);

        menu(max_tam);

        return 0;
}




                                                            
int promedio (int max_tam ){
        float prom=0;
        prom=(max_tam);
        printf("El promedio de todos los datos ingresados es: \n");
        printf("%f\n",prom);



        return prom;
}


int desviacion_estandar(int max_tam){//h, prom){

        int i=0;

        float sumatoria=0, division=0, resultado=0;


        for (i=0;i<=max_tam;i++);{

                [i]=(prom - h[i])*(prom - h[i]);
                sumatoria = sumatoria+h[i];
        }
        division=(sumatoria/max_tam);
        resultado = (sqrt(division));
        printf("La desviación estándar de sus datos es: \n");
        printf("%f\n",resultado);


        return resultado;
}


*/                                                          

		
		
		
		







