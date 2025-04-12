int find_character(const char *str,int c);
#include <stdio.h>
int main(){
	int size=100;
	char str[size];
	char target;
	printf("enter string: ");
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i];++i){
			if(str[i]=='\n'){
				str[i]='\0';
				break;
			}
	}printf("enter target character");
	scanf(" %c",&target);
	int index=find_character(str,target);
	if(index>=0){
		printf(" %c character is found in %d index",target,index);
	}else{
		printf("%c character is not found:\n",target);
		return 0;
   }
}
