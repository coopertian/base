/*
 * =====================================================================================
 *
 *       Filename:  ex10.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2013年01月09日 17时41分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	//go through each string in argv
	//why am I asking argv[0]
	for (i = 1; i < argc; i++){
		printf("arg %d: %s\n", i, argv[i]);
	}

	//let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	int num_states = 4;

	for(i = 0; i < num_states; i++){
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}
