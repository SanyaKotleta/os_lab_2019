#include "swap.h"

void Swap(char *left, char *right)
{
	char new=*left;
	*left=*right;
	*right=new;
}
