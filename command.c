#include <stdio.h>
#include <stdlib.h>
#include "command.h"
#include "state.h"

Command cmds[] = {
	{ .name = "help",     .help = "shows available commands", .no_delta_t = true, .exe = &help,   },
	{ .name = "quit",     .help = "quits the battle",         .no_delta_t = true, .exe = &quit,   },
	{ .name = "status",   .help = "describes the situation",  .no_delta_t = true, .exe = &status, },
	{ .name = "punch",    .help = "simple but efective",                          .exe = &punch,  },
	{ .name = "scrander", .help = "recall jet scrander",                                          },
	{ .name = "pilder",   .help = "attach/detach hover pilder",                                   },
	{ .name = NULL,       .help = NULL,                                           .exe = NULL,    },
};

void help(void)
{
	for (Command *cp = cmds; cp->name != NULL; ++cp) {
      		printf("%s:\t%s\n", cp->name, cp->help);
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
