run: main.o CommonSpear.o CommonSword.o WeaponFactory.o Weapon.o SimpleHammer.o CrazyRandomSword.o Obliterator.o
	g++ -o run main.o CommonSpear.o CommonSword.o WeaponFactory.o Weapon.o SimpleHammer.o CrazyRandomSword.o Obliterator.o
main.o: main.cpp
	g++ -c main.cpp
Obliterator.o: Obliterator.cpp Obliterator.h
	g++ -c Obliterator.cpp Obliterator.h
CrazyRandomSword.o: CrazyRandomSword.cpp CrazyRandomSword.h
	g++ -c CrazyRandomSword.cpp CrazyRandomSword.h
SimpleHammer.o: SimpleHammer.cpp SimpleHammer.h
	g++ -c SimpleHammer.cpp SimpleHammer.h
CommonSpear.o: CommonSpear.cpp CommonSpear.h
	g++ -c CommonSpear.cpp CommonSpear.h
CommonSword.o: CommonSword.cpp CommonSword.h
	g++ -c CommonSword.cpp CommonSword.h
WeaponFactory.o: WeaponFactory.cpp WeaponFactory.h
	g++ -c WeaponFactory.cpp WeaponFactory.h
Weapon.o: Weapon.cpp Weapon.h
	g++ -c Weapon.cpp Weapon.h
clean:
	rm *.o
