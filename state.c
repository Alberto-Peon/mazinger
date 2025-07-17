#include <stdio.h>
#include <stdlib.h>
#include "state.h"

State state = {
	.enemy_hp    =  50,
	.mazinger_hp = 100,
};

void status(void)
{
	printf("You are defending the lab from Doublas M2.\n"
	       "Your hp = %d and your enemy's hp = %d.\n",
		state.mazinger_hp,
		state.enemy_hp
	);
}

void next(void)
{
	if (state.enemy_hp <= 0) {
		puts("Congrats! You have defeated the enemy beast.");
		exit(EXIT_SUCCESS);
	} else {
		state.mazinger_hp -= 10;
		puts("Pang! The enemy beast has hit you.");
	}
}
