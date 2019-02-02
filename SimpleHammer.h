/* 
 * File:   SimpleHammer.h
 * Author: Javier <jrescobara@gmail.com>
 * 
 * Created on September 25, 2017, 3:31 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a Simple hammer (hitpoint = 50, it does not ignore armor points)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer",25.0) //Calls Weapon(name, hitpoints) constructor with values Simple hammer and 50.0
    {
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SimpleHammer_H */

