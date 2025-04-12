void replace_character(char *str,char old_char,char new_char);
#include <stdio.h>
int main(){
	int size=20;
	char text[size];
	char old_char,new_char;
	printf("enter string");
	fgets(text,sizeof(text),stdin);
	for(int i=0;text[i];++i){
		if(text[i]=='\n'){	
			text[i]='\0';
			break;
		}
	}
      printf("enter old_char");
      scanf(" %c",&old_char);
	  printf("enter new_char");
	  scanf(" %c",&new_char);
	  
	  replace_character(text,old_char,new_char);
	  printf("result is: %s\n",text);
	
      return 0;
}
