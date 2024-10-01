#include "revert_string.h"
#include <string.h>
void RevertString(char *str)
{
	int n=strlen(str)-1;
	for(int i=0;i<strlen(str)/2;i++){
		char new=str[i];
		str[i]=str[n-i];
		str[n-i]=new;
	}
	
	}

