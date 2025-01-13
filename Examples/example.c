#include <stdio.h> 

//This is my the entry point to my program.
int main(){
	int accountID = 5;
	double accountBalance = 100.53;
	char accountType = 'c';
	printf("AccountID is: %d\n", accountID);
	printf("AccountBal is: %f\n", accountBalance);
	printf("AccountTy is: %c\n", accountType);

	printf("sizeof(int): %d\n", sizeof(int));
	printf("sizeof(double): %d\n", sizeof(double));
	printf("sizeof(char): %d\n", sizeof(char));
	return 0;
}
