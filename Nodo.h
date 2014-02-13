//
//  Nodo.h
//  Arboles
//
//  Created by jonas on 01/05/13.
//  Copyright (c) 2013 jonas. All rights reserved.
//

#ifndef __Arboles__Nodo__
#define __Arboles__Nodo__

#include <iostream>

class NODO {
    float clave_;
    NODO* izquierda_;
    NODO* derecha_;
    NODO* padre_;
    int balanceo_;
    int it_;
public:
    NODO(float clave, NODO& padre, int it);
    NODO();
    
    void set_clave(float clave);
    void set_izquierda(NODO* izquierda);
    void set_derecha(NODO* derecha);
    void set_padre(NODO* padre);
    void set_balanceo(int balanceo);
    void set_it(int it);
    
    float get_clave();
    NODO* get_izquierda();
    NODO* get_derecha();
    NODO* get_padre();
    int get_balanceo();
    int get_it();
};
#endif /* defined(__Arboles__Nodo__) */
