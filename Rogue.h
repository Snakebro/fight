#ifndef ROGUE_H
#define ROGUE_H

// File: Rogue.h
// Author: Kyle Janssen
// Contents: This file contains the sescription of a class that represents
// Rogue characters.

#include "Hero.h"

class Rogue : public Hero
{
    public:
        // Default Constructor
        Rogue();

	// This constructor tells the Rogue if it an enemy or not
	Rogue(bool isEnemyChar);

        // This function returns the status of a Character based on its HP
        string status();

        // This function returns the text for a player attacking an enemy
        string attackText(string enemyName);

        // This function is called when a Rogue evades an attack and
	// gives the Rogue a free attack of opportunity
        void onEvade(Character * target);

        // This function has the Rogue perform the action correspoinding to
        // actionNum
        void doAction (int actionNum, Character * target);

	// This action raises the Rogues evasiveness
	void sidestep ();
};

#endif
