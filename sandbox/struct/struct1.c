struct Player
{
	char	name[10];
	int		score;
};

#include <stdio.h>

int main()
{
	struct Player p[10];
	p[0].name[0] = 'a';
	p[0].name[1] = 'b';
	p[0].name[2] = 'c';
	p[0].name[3] = '\0';

	printf("%s\n" , p[0].name);
}
