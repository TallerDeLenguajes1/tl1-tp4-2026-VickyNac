// ejercicio 2
#include <stdio.h>

typedef struct Tarea{
    int TareaID;//numerico autoincremental comenzando en 1000
    char *descripcion;
    int Duracion;//entre 10-100
} Tarea;

typedef struct Nodo{
struct Tarea T;
Nodo *Siguiente;
}Nodo;

    Nodo *crearListaVacia();
    void CrearTarea(Tarea Tarea, int aux, char descri);




            int main(){
                int auxID=1000;

                Nodo *TareasPendientes = crearListaVacia;
                Nodo *TareasRealizadas = crearListaVacia;






            };
            //visualgo>ver la representacion grafica de los nodos
    

    Nodo *crearListaVacia(){
       return NULL;
    };

    void CrearTarea(Tarea Tarea,int aux, char descri){
        Nodo*Ntarea=(Nodo*) malloc (sizeof(Nodo));
        
        Ntarea->T.TareaID=aux;

        Ntarea->T.descripcion = descri;
      
        Ntarea->T.Duracion = rand() % 5, rand() % 5; 


        Ntarea->Siguiente=NULL;
    };
          