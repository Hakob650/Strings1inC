#include <stdio.h>
void reverse_string(char *str){
		if(!str){
			return;
		}
	char *ptr=str;
	while(*ptr){
		ptr++;
	}
		ptr--;
	while(str<ptr){
		char temp=*str;
		*str++=*ptr;
		*ptr--=temp;
   }
}
