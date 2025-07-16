#ifndef _STATE_H
#define _STATE_H

typedef struct {
	int enemy_hp;
	int mazinger_hp;
} State; 

extern State state;
extern void status(void);
extern void next(void);

#endif
