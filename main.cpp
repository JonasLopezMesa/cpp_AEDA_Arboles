//
//  main.cpp
//  Arboles
//
//  Created by jonas on 01/05/13.
//  Copyright (c) 2013 jonas. All rights reserved.
//

#include <iostream>
#include "Arbol.h"

int main()
{
    ARBOL A;
    A.insertar(30);
    cout << "A" << endl;
    A.mostrar_arbol();
    cout << "B" << endl;
    A.insertar(20);
    A.mostrar_arbol();
    A.insertar(15);
    A.mostrar_arbol();
    A.insertar(40);
    A.mostrar_arbol();
    A.insertar(18);
    A.mostrar_arbol();
    A.insertar(78);
    A.mostrar_arbol();
    A.insertar(2);
    A.mostrar_arbol();
    A.insertar(1);
    A.mostrar_arbol();
    A.insertar(55);
    A.mostrar_arbol();
    return 0;
}

