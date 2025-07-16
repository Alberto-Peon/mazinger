#ifndef _COMMAND_H
#define _COMMAND_H

typedef struct {
	char *name;
	char *help;
	void (*exe)(void);
} Command;

extern Command cmds[];

extern void help(void);
extern void quit(void);
extern void status(void);
extern void punch(void);

#endif
