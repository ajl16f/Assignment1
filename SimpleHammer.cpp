/* 
 * File:   SimpleHammer.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */

#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){
	if(armor < 30)
		return hitPoints;
    double damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}