//
//  Nodo.cpp
//  Arboles
//
//  Created by jonas on 01/05/13.
//  Copyright (c) 2013 jonas. All rights reserved.
//

#include "Nodo.h"

NODO::NODO(float clave, NODO& padre, int it){
    clave_ = clave;
    izquierda_ = NULL;
    derecha_ = NULL;
    padre_ = &padre;
    balanceo_ = 0;
    it_ = it;
}
NODO::NODO() : clave_(0), izquierda_(NULL), derecha_(NULL), padre_(NULL), balanceo_(0), it_(0){
    
}

void NODO::set_clave(float clave){
    clave_ = clave;
}
void NODO::set_izquierda(NODO* izquierda){
    izquierda_ = izquierda;
}
void NODO::set_derecha(NODO* derecha){
    derecha_ = derecha;
}
void NODO::set_padre(NODO* padre){
    padre_ = padre;
}
void NODO::set_balanceo(int balanceo){
    balanceo_ = balanceo;
}
void NODO::set_it(int it){
    it_ = it;
}

float NODO::get_clave(){
    return clave_;
}
NODO* NODO::get_izquierda(){
    return izquierda_;
}
NODO* NODO::get_derecha(){
    return derecha_;
}
NODO* NODO::get_padre(){
    return padre_;
}
int NODO::get_balanceo(){
    return balanceo_;
}
int NODO::get_it(){
    return it_;
}