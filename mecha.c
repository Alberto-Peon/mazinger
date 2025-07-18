#include <stdio.h>
#include <stdlib.h>
#include "command.h"
#include "mecha.h"
#include "state.h"

Mecha mechas[] = {
	{ .name = "Doublas M2", .info = "Two heads", .initial_hp = 50, },
	{ .name = NULL,         .info = NULL,                          },
};
