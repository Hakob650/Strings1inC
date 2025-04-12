void reverse_string(char *str);
#include <stdio.h>
 int main(){
    int size=100;
	char input[size];
	printf("enter string");	
    fgets(input,sizeof(input),stdin);
	int i=0;
    while(input[i]!='\0'){
		if(input[i]=='\n'){
			input[i]='\0';
			break;
		}i++;
	}reverse_string(input);
	printf("reversed string: %s\n",input);
	return 0;
}
