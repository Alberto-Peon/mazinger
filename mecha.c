#include <stdio.h>
#include <stdlib.h>
#include "command.h"
#include "mecha.h"
#include "state.h"

Mecha mechas[] = {
	{
		.id = "Mazinger Z",
		.info = "The awesome iron giant",
		.initial_hp = 100,
		.is_friendly = true,
		.attacks = {
			{
				.id = "punch",
				.info = "simple but effective",
				.damage = 10,
			},
			{
				.id = "photon beam",
				.info = "deadly double ray",
				.damage = 25,
			},
		},
	},
	{
		.id = "Doublas M2",
		.info = "Two heads",
		.initial_hp = 50,
		.attacks = {
			{
				.id = "punch",
				.info = "simple but effective",
				.damage =  8,
			},
			{
				.id = "mouth beam",
				.info = "deadly double ray",
				.damage = 25,
			},
		},
	},
	{ .id = NULL, },
};
