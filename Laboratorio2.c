/************* Escuela colombiana de ingenieria Julio Garavito ***********************
 * Curso: Algoritmos en sistemas electronicos 2021-1.                                *
 * Tema: Ejercicio de estructuras.                                                   *
 * Estuduantes desarrolladores:                                                      *
 *       David Enrique Gantiva Cifuentes.                                            *
 *       Juan Felipe Castiblanco Hernandez.                                          *
 *       Diego Alejandro Gomez Moreno.                                               *
 * Descripcion: El programa costruye la ecuacion de la recta a partir de dos puntos  *
 *              que ingrese el usuario.                                              *
 *                                                                                   *
 ******** © Codigo bajo licencia CC Atribucion-Nocomercial4.0 Internacional***********/

#include<stdio.h>

struct puntos
{
        float x;
        float y;
};
//Prototipos de funciones.

void pedir_puntos(struct puntos *punt1,struct puntos *punt2);             //por referencia.
void pendiente(struct puntos *punt1,struct puntos *punt2, float *pend);   //por referencia.
void out_equa(struct puntos *punt1,struct puntos *punt2, float *pend);    //por referencia.

//Funcion principal.
void main()
{
        struct puntos p1,p2;
        float m;

        printf("\nEste programa calcula la recta a partir de dos puntos.\n");
        pedir_puntos(&p1,&p2);
        pendiente(&p1,&p2,&m);
        out_equa(&p1,&p2,&m);
}

// Definicion de Funciones //

void pedir_puntos(struct puntos *punt1,struct puntos *punt2)
{
        printf("Escriba las coordenadas del primer punto X y Y uno a la vez\n");
        scanf("%f%f", &(*punt1).x, &(*punt1).y);

        printf("Escriba las coordenadas del  segundo punto X y Y uno a la vez\n");
        scanf("%f%f", &(*punt2).x, &(*punt2).y);
}
void pendiente(struct puntos *punt1,struct puntos *punt2, float *pend)
{
        *pend = (((*punt2).y-(*punt1).y)/((*punt2).x-(*punt1).x));
}
void out_equa(struct puntos *punt1,struct puntos *punt2, float *pend)
{
        printf("y(x)=%.3fx + (%.3f)\n",*pend,-(*pend)*((*punt1).x) + ((*punt1).y) );

}

  
