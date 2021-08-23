#ifndef P7Ejercicio01
#define P7Ejercicio01

#include <stdbool.h>    //BIBLIOTECA DE BOOLEANOS

typedef int INFO;   //ALIAS DE LA INFORMACI�N DEL NODO
typedef struct _nodo nodo;  //ALIAS DE LA ESTRUCTURA DEL NODO

struct _nodo    //ESTRUCTURA DEL NODO
{
    INFO info;  //INFORMACI�N DEL NODO
    nodo *sig;  //APUNTADOR/ENLACE AL NODO SIGUIENTE
};

typedef struct _pila pila;  //ALIAS DE LA ESTRUCTURA DE LA PILA
struct _pila    //ESTRUCTURA DE LA PILA
{
    nodo* head; //APUNTADOR/ENLACE A LA CABEZA DE LA PILA
    nodo* tail; //APUNTADOR/ENLACE A LA COLA DE LA PILA
    int num;    //CONTADOR DE NODOS EN AL PILA
};

nodo* crear_nodo(INFO info);    //PROTOTIPO DE LA FUNCI�N PARA CREAR UN NODO; RETORNA UN APUNTADOR TIPO nodo
void liberar_nodo(nodo *n); //PROTOTIPO DE LA FUNCI�N PARA LIBERAR MEMORIA PARA UN NODO
pila* crear_pila(); //PROTOTIPO DE LA FUNCI�N PARA CREAR LA PILA; RETORNA UN APUNTADOR TIPO pila
void liberar_lista(pila *l);    //PROTOTIPO DE LA FUNCI�N PARA LIBERAR MEMORIA DE LA PILA

bool push(pila *l, INFO info);  //PROTOTIPO DE LA FUNCI�N PARA APILAR UN NODO; RETORNA true O false
void pop(pila *l);  //PROTOTIPO DE LA FUNCI�N PARA DESAPILAR UN NODO
int localizar(pila *l, INFO info); //PROTOTIPO DE LA FUNCI�N PARA LOCALIZAR UN ELEMENTO EN LA PILA, RETORNAR LA POSICI�N
bool comparar(INFO info1, INFO info2);  //PROTOTIPO DE LA FUNCI�N PARA COMPARAR LA INFORMACI�N DE DOS NODOS

bool es_vacia(pila *l); //PROTOTIPO DE LA FUNCI�N PARA DETERMINAR SI LA PILA EST� VAC�A; RETORNA true O false
bool vaciar(pila *l);   //PROTOTIPO DE LA FUNCI�N PARA VACIAR LA PILA; RETORNA true O false

void imprimir_pila(pila *l);    //PROTOTIPO DE LA FUNCI�N PARA IMPRIMIR LA PILA

#endif // P7Ejercicio01
