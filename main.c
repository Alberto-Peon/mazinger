#include <stdio.h>
#include "runner.h"
#include "state.h"

int main(void)
{
	init_state();
	run("status");
	int res;
	char s[10];
	puts("Enter a command (enter help for a list of commands):");
	while ((res = scanf("%s", s)) != EOF) {
		run(s);
	}
}
