//  _____                           _       
// |_   _|                         | |      
//   | | _ __ ___  _ __   __ _  ___| |_ ___ 
//   | || '_ ` _ \| '_ \ / _` |/ __| __/ __|
//  _| || | | | | | |_) | (_| | (__| |_\__ \
//  \___/_| |_| |_| .__/ \__,_|\___|\__|___/
//                | |                       
//                |_|                       
//                      Multi-physics
//
//  Main authors:       Yago Trias
//

//Include
#include <iostream>

#include "ImpactsMultiphysics.h"

using namespace std;

ImpactsMultiphysics::ImpactsMultiphysics()
    : msg("Main class ImpactsMultiphysics") {}

void ImpactsMultiphysics::SendMessage() const {
    cout << msg << endl;

}