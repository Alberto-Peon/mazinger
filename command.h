#ifndef _COMMAND_H
#define _COMMAND_H

#include <stdbool.h>

typedef struct {
	char *id;
	char *help;
	bool no_delta_t;
	void (*exe)(void);
} Command;

extern Command cmds[];

extern void help(void);
extern void quit(void);
extern void status(void);
extern void punch(void);

#endif
