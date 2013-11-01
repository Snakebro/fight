#ifndef CHARACTER_H
#define CHARACTER_H

// File: Character.h
// Author: Kyle Janssen
// Contains: This file contains the description of a class called Character.

#include <iostream>
using namespace std;

class Character
{
    public:
        // This is the default constructor for the Character class. It sets
        // health to full and alive to true
        Character();

	// This constructor gives the Character a name
	Character(string newName);

	// This mutator function sets the name of the Character
	void setName(string newName);

	// This accessor function returns the name of the Character
	string getName();

	// This accessor returns the max health of the Character
	int getMaxHP ();

	// This accessor returns the max skill points of the Character
	int getMaxSP ();

	// This mutator function sets the health value of the Character
	// This may be broken up into heal() and damage() functions
	void setHP(int newHP);

	// This function decreases the Character's health by the passed value
	void damage(int damage);

	// This function increases the Character's health by the passed value
	void heal(int hitPoints);

	// This accessor function returns the current health of the Character
	int getHP();

	// This function sets alive to false
        void kill();

	// This function sets alive to true
	void revive();

	// This function returns true if the Character is alive.
	bool isAlive();

	// This function returns the status of a Character based on its health
	string status();

	// This function causes one Character to attack another Character
	void attack (Character * enemy);

    protected:
	string actions[4];
        string name;
	int maxHP;
	int maxSP;
	int HP;
	int SP;
	int att;
	int def;
	int eva;
	bool alive;
	
};

#endif
