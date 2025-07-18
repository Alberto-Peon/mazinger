#ifndef _MECHA_H
#define _MECHA_H

#define MAX_ATTACKS 10

#include <stdbool.h>

typedef struct {
	char *id;
	char *info;
	int damage;
} Attack;

typedef struct {
	char *id;
	char *info;
	int initial_hp;
	bool is_friendly;
	void (*exe)(void);
	Attack attacks[MAX_ATTACKS];
} Mecha;

extern Mecha mechas[];

#endif
