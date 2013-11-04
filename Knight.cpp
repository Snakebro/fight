// File: Knight.cpp
// Author: Kyle Janssen
// Contents: This file contains the implementation of the Knight class

#include "Knight.h"

Knight::Knight ()
{
    actions[0] = "Attack";
    cost[0] = 0;
    actions[1] = "Dig In";
    cost[1] = 30;
    name = "Knight";
    maxHP = 130;
    maxSP = 70;
    HP = maxHP;
    SP = maxSP;
    att = 30;
    def = 70;
    eva = 5;
    alive = true;
    enemyChar = false;
}

Knight::Knight (bool isEnemyChar)
{
    actions[0] = "Attack";
    cost[0] = 0;
    actions[1] = "Dig In";
    cost[1] = 30;
    name = "Knight";
    maxHP = 130;
    maxSP = 70;
    HP = maxHP;
    SP = maxSP;
    att = 30;
    def = 70;
    eva = 5;
    alive = true;
    enemyChar = isEnemyChar;
}

string Knight::status ()
{
    if (HP <= 0) {
        return "\tHe finally collapses in a pile of crumpled steel.";
    } else if (HP < maxHP / 4)
        return "\tDark blood seeps out of the gaps in his armor.";
    else if (HP < maxHP / 2)
        return "\tHis once shiny armor is now visibly battered.";
    else if (HP < 3 * maxHP / 4)
        return "\tHe raises his sheild a little more readily now.";
    else
        return "\tHe stands tall in shining armor.";
}

string Knight::attackText (string enemyName)
{
    if (!isEnemy())
        return "\tYou swing your gleaming sword at the " + enemyName + ".";
    else 
        return "\tThe " + enemyName + " swings his gleaming sword at you.";
}

void Knight::doAction (int actionNum, Character * target)
{
    spendSP(cost[actionNum - 1]);

    if (actionNum == 1) {
        attack(target);
        if (target->isEnemy())
	    cout << target->status() << endl;

    } else if (actionNum == 2)
        digIn();

    cout << endl;
}

void Knight::digIn ()
{
    def += 10;

    if (!isEnemy())
      cout << "\tYou dig your heels into the ground, nothing is getting through you.\n";
    else
      cout << "\tThe Knight digs his heels into the ground and raises his shield.\n";
}
