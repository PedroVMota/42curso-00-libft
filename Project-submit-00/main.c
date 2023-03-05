#include "libft.h"

int main (void)
{
	system("clear");
	char *string = "Pedro Mota";
	char **stringplit = ft_split(string, ' ');
	int i = 0;
	while(*stringplit)
	{
		printf(" [ %i ] > %s" , stringplit[i]);
		i++;
	}
}