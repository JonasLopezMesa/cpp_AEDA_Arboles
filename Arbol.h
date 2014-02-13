//
//  Arbol.h
//  Arboles
//
//  Created by jonas on 01/05/13.
//  Copyright (c) 2013 jonas. All rights reserved.
//

#ifndef __Arboles__Arbol__
#define __Arboles__Arbol__

#include <iostream>
using namespace std;
#include <vector>
#include "Nodo.h"
class ARBOL{
    vector<NODO> arbol_;
    int n_nodos_;
    int n_enlaces_;
    int iterador_;
public:
    ARBOL();
    
    void insertar_nodo(float clave);
    NODO* buscar_nodo(float clave, NODO* nodo);
    void buscar(float clave, NODO* nodo);
    void insertar(float clave);
    
    void mostrar_arbol();
};
#endif /* defined(__Arboles__Arbol__) */
