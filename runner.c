#include <stdio.h>
#include <string.h>
#include "command.h"
#include "runner.h"
#include "state.h"

void run(char *cmd)
{
	for (Command *cp = cmds; cp->name != NULL; ++cp) {
		if (strcmp(cmd, cp->name) == 0) {
			if (cp->exe != NULL) {
				cp->exe();
			} else {
				puts(cp->help);
			}
			if (!cp->no_delta_t) {
				next();
			}
			return;
		}
	}
	printf("unknown command: %s\n", cmd); 
}
