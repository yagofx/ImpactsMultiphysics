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
#include <string>

class ImpactsMultiphysics {
public:
    ImpactsMultiphysics();
    void SendMessage() const;

private:
    std::string msg;
};
