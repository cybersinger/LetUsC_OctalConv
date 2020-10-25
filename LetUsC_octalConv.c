#include <stdio.h>

int find_octal_eqivalent(int decimalNumber);
int main() {
	int decNumInMain, octalNumInMain;
	printf("Unesi broj: \n");
	scanf_s("%d", &decNumInMain, 4);

	octalNumInMain = find_octal_equivalent(decNumInMain);

	printf("Oktalni ekvivalent broju %d je %d\n", decNumInMain, octalNumInMain);
	return 0;
}

int find_octal_equivalent(int decimalNumber) {
	int i=1, octalNumber = 0;
	while (decimalNumber!=0){
		octalNumber += (decimalNumber % 8) * i;
		decimalNumber /= 8; // ova varijabla dobija vrednost nula cim padne ispod 8 - jer je integer! Ostatak pomnozen sa i*10^x se dodao u prethodnom koraku. Pametno...
		i *= 10;
	}
	return octalNumber;
}