//
//  Arbol.cpp
//  Arboles
//
//  Created by jonas on 01/05/13.
//  Copyright (c) 2013 jonas. All rights reserved.
//

#include "Arbol.h"
using namespace std;

ARBOL::ARBOL() : n_nodos_(0), n_enlaces_(0), iterador_(0){
    
}

void ARBOL::insertar_nodo(float clave){
    
}
void ARBOL::insertar(float clave){
    if (n_nodos_ == 0) {
        n_nodos_ = n_nodos_+1;
        cout << "HOLA" << endl;
        arbol_.resize(1);
        arbol_[iterador_].set_clave(clave);
        arbol_[iterador_].set_balanceo(0);
        arbol_[iterador_].set_derecha(NULL);
        arbol_[iterador_].set_izquierda(NULL);
        arbol_[iterador_].set_padre(NULL);
        arbol_[iterador_].set_it(0);
    } else {
        cout << 1 << endl;
        n_nodos_ = n_nodos_+1;
        cout << 2 << endl;
        arbol_.resize(n_nodos_+1);
        cout << 3 << endl;
        iterador_ = iterador_+1;
        cout << 4 << endl;
        NODO aux = *buscar_nodo(clave, &arbol_[0]);
        cout << 1 << endl;
        cout << "clave: " << clave << endl;
        cout << "AUX CLAVE: " << aux.get_clave() << endl;
        if (clave > aux.get_clave()) {
            arbol_[iterador_].set_it(iterador_);
            arbol_[iterador_].set_clave(clave);
            arbol_[iterador_].set_balanceo(0);
            arbol_[iterador_].set_derecha(NULL);
            arbol_[iterador_].set_izquierda(NULL);
            cout << "derecha" << endl;
            arbol_[aux.get_it()].set_derecha(&arbol_[iterador_]);
            arbol_[iterador_].set_padre(&aux);
        } else if (clave < aux.get_clave()) {
            arbol_[iterador_].set_it(iterador_);
            arbol_[iterador_].set_clave(clave);
            arbol_[iterador_].set_balanceo(0);
            arbol_[iterador_].set_derecha(NULL);
            arbol_[iterador_].set_izquierda(NULL);
            arbol_[aux.get_it()].set_izquierda(&arbol_[iterador_]);
            arbol_[iterador_].set_padre(&aux);
            cout << "izquierda" << endl;
        }
        
    }
}
NODO* ARBOL::buscar_nodo(float clave, NODO* nodo){
    if (nodo->get_clave() == clave) {
        return nodo;
    } else {
        if (nodo->get_derecha() == NULL && nodo->get_izquierda() == NULL) {
            return nodo;
        }
        cout << "11" << endl;
        if (nodo->get_clave() > clave) {
            cout << "12" << endl;
            return buscar_nodo(clave, nodo->get_izquierda());
        } else if (nodo->get_clave() < clave) {
            cout << "13" << endl;
            return buscar_nodo(clave, nodo->get_derecha());
        } 
    }
}

void ARBOL::buscar(float clave, NODO* nodo){
    if (buscar_nodo(clave, nodo)->get_clave() != clave) {
        cout << "No se ha encontrado el nodo: " << nodo->get_clave() << endl;
    } else {
        cout << "Se ha encontrado el nodo: " << nodo->get_clave() << endl;
        //poner todos los datos.
    }
    
}


void ARBOL::mostrar_arbol(){
    for (int i = 0; i < arbol_.size(); i++) {
        cout << /*arbol_[i].get_padre()->get_clave() << " ------> " <<*/ arbol_[i].get_clave() << endl;
        //cout << "    - IZQUIERDA: " << arbol_[i].get_izquierda()->get_clave() << endl;
        //cout << "    - DERECHA: " << arbol_[i].get_derecha()->get_clave() << endl;
    }
}