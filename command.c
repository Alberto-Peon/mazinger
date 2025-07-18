#include <stdio.h>
#include <stdlib.h>
#include "command.h"
#include "state.h"

Command cmds[] = {
	{ .id = "help",     .help = "shows available commands", .no_delta_t = true, .exe = &help,   },
	{ .id = "quit",     .help = "quits the battle",         .no_delta_t = true, .exe = &quit,   },
	{ .id = "status",   .help = "describes the situation",  .no_delta_t = true, .exe = &status, },
	{ .id = "punch",    .help = "simple but efective",                          .exe = &punch,  },
	{ .id = "scrander", .help = "recall jet scrander",                                          },
	{ .id = "pilder",   .help = "attach/detach hover pilder",                                   },
	{ .id = NULL,                                                                               },
};

void help(void)
{
	for (Command *cp = cmds; cp->id != NULL; ++cp) {
		printf("%s:\t%s\n", cp->id, cp->help);
	}
}

void quit(void)
{
	puts("Wise decision; live to fight another day.");
	exit(EXIT_SUCCESS);
}

void punch(void)
{
	state.enemy_hp -= 10;
	puts("Kapow!");
}
