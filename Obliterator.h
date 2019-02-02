/* 
 * File:   Obliterator.h
 * Author: Andy Lile ajl16f@my.fsu.edu
 * 
 * Created on September 25, 2017, 3:31 PM
 */

#include <string>
#include "Weapon.h"

#ifndef OBLITERATOR_H
#define OBLITERATOR_H

/**
 * Defines the behavior of a Obliterator (hitpoint = 50, it does not ignore armor points)
 */
class Obliterator : public Weapon {
public:

    Obliterator() : Weapon("Obliterator",999.0) //Calls Weapon(name, hitpoints) constructor with values Obliterator and 50.0
    {
    }

    virtual ~Obliterator() {};

    virtual double hit(double armor);

};

#endif /* Obliterator_H */

