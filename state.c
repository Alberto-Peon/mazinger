#include <stdio.h>
#include <stdlib.h>
#include "mecha.h"
#include "state.h"

State state;

void init_state()
{
	state.mazinger_hp = mechas[0].initial_hp;
	state.enemy_hp    = mechas[1].initial_hp;
}

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
	if (state.mazinger_hp <= 0) {
		puts("You have died at the hands of the enemy beast");
		exit(EXIT_SUCCESS);
	}
}
