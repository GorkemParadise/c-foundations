#include <stdio.h>
#include <stdlib.h>

/* this program using the console pauser or add your own getch, system("pause") or input loop */

void enterGuess(char *s) {

	char input[10];
	int letter = 0;
	printf("Enter guess: "); scanf("%s", input);
	int a = 0;
	while (input[a] != '\0') {
		letter++;
		a++;
	} if (letter == 5) {
		for (int i = 0; i < 5; i++) {
			s[i] = input[i];
		}
	} else if (letter != 5) {
		printf("Must be exactly 5 letters!");
		enterGuess(s);
	} 
}	


void to_upper(char s[]) { // 32 fark
	int i = 0;
	printf("Valid: ");
	while (s[i] != '\0') {
		if (s[i] != ' ') {
			printf("%c", s[i] - 32);
			s[i] = s[i] - 32;
		}i++;
	} printf("\n");
}

int count_char (char word[], char c) {
	int count = 0;
	while (*word) {
		if (*word == c) count++;
		word++;
	} return count;
}

void check_exact(char guess[], char target[], int result[] ) {
	for (int i = 0; i < 5; i++) {
		printf("Position %d - ", i);
		if (target[i] == guess[i]) {
			printf(" GREEN\n");
			result[i] = 2;
		}
		else printf("no match\n");
	}
}

int is_win(int result[]) {
	for(int i = 0; i < 5; i++){
		if(result[i] == 0 || result[i] == 1) return 0;
	} return 1;
}


void matched(int result[], char target[], char guess[]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (result[i] == 2) continue;
			if (target[i] == guess[j]) result[i] = 1;
		}
	}
}


void print_row(char guess[], int result[]) {
	for (int i=0; i<5; i++) {
		char *tag = (result[i]==2) ? "[G]"
			: (result[i]==1) ? "[Y]" : "[_]";
		printf("%s%c ", tag, guess[i]);
	}
	printf("\n");
}




int main(int argc, char *argv[]) {
	
	char target[] = "APPLE";
	char s[5]; // input duplicate oldu buraya
	int result[5];
	char history[6][6];
	int colors[6][6];
	int tahmin = 1;
	
	while (1) {
		enterGuess(s);
		to_upper(s);
		printf("%d / 6\n", tahmin);
		check_exact(s, target, result);
		if (is_win(result) == 0) tahmin++;
		for (int i = 0; i < 6; i++) {
			history[tahmin][i] = s[i];
		}
		for (int k = 0; k < 6; k++) {
			colors[tahmin][k] = result[k];
		}
		matched(result, target, s);
		print_row(s, result);
		printf("\n\n");
		if (is_win(result) == 1) break;

	}

	return 0;
}
