#include <stdio.h>
void count_vowels_and_consonants(const char *str,int *vowels,int *consonants){
			*vowels=0;
			*consonants=0;
			while(*str){
				char ch=*str|32;
				if(ch>='a' && ch<='z'){
	                    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {				
									(*vowels)++;
				}else{
									(*consonants)++;
				}
			}str++;
}			
}
			
