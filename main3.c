int compare_strings(const char *str1,const char *str2);
#include <stdio.h>
int main(){
	char s1[100],s2[100];
	printf("enter s1");
	fgets(s1,sizeof(s1),stdin);
	printf("enter s2");
	fgets(s2,sizeof(s2),stdin);
	for(int i=0;s1[i];++i){
		if(s1[i]=='\n'){
			s1[i]='\0';
		}
	}
	for(int i=0;s2[i];++i){
		if(s2[i]=='\n'){
			s2[i]='\0';
		}
	} 
		int result=compare_strings(s1,s2);
		
		if(result==0){
			printf("st1 and st2 are equal");
		}else if(result<0){
			printf("s1 is shorter than s2");
		}else{
			printf("s1 is longer than s2");
		}
			return 0;
}
