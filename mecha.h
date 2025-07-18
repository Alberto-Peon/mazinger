#ifndef _MECHA_H
#define _MECHA_H

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
	Attack attacks[];
} Mecha;

extern Mecha mechas[];

#endif
