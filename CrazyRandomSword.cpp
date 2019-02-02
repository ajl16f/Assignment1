/* 
 * File:   CrazyRandomSword.cpp
 * Author: Andy Lile ajl16f@my.fsu.edu
 *  
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>
#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
	srand (time(NULL));
	hitPoints = rand() % 93 + 7; //found rand() usage on http://www.cplusplus.com/reference/cstdlib/rand/
	int tempArmor = armor;
	double armorToIgnore = rand() % ((tempArmor - 2) / 3) + 2;  //found fmod usages on cplusplus.com/reference/cmath/fmod
	
	armorToIgnore = 1 - (armorToIgnore / 100);
	double damage = hitPoints - (armor * armorToIgnore);
    if(damage < 0){
        return 0;
    }
    return damage;
}