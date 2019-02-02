/* 
 * File:   CrazyRandomSword.h
 * Author: andy lile ajl16f@my.fsu.edu
 * 
 * Created on September 25, 2017, 3:31 PM
 */

 #include<iostream>
#include <string>
#include "Weapon.h"
#include<time.h>
#include<stdio.h>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword",10) //Calls Weapon(name, hitpoints) constructor with values Crazy Random Sword and a random number
    {
	}

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CrazyRandomSword_H */ 

