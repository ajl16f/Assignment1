/* 
 * File:   Obliterator.cpp
 * Author: Andy Lile ajl16f@my.fsu.edu
 *  
 */

#include "Obliterator.h"
#include<math.h>
#include"stdio.h"

double Obliterator::hit(double armor){
	int tempArmor = armor;
	
	if(tempArmor % 2 == 1) //if armor is an odd number then block all damage
		return 0;
    double damage = hitPoints;
    if(damage < 0){
        return 0;
    }
    return damage;
}