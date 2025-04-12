void count_vowels_and_consonants(const char *str,int *vowels,int *consonants);
#include <stdio.h>
int main(){
    int vowels, consonants;
	int size=20;
    char text[size];
	printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
	for (int i = 0; text[i]; ++i) {
        if (text[i] == '\n') {
			text[i] = '\0';
			break;
		}
	}count_vowels_and_consonants(text, &vowels, &consonants);
	printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

