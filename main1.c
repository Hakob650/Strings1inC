int string_length(const char *str);
#include <stdio.h>
int main(){
	int size=100;
	char input[size];
	printf("enter string: ");
	fgets(input,sizeof(input),stdin);
	int i=0;
	while(input[i]!='\0'){
		if(input[i]=='\n'){
				input[i]='\0';
				break;
		}
			i++;
	}
    int len=string_length(input);
	printf("length of string is %d: \n",len);
	return 0;
}
