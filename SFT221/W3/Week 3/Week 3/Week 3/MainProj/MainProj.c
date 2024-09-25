#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "customerInfo.h"


void getCustomerInfo(const char* type, char* input) {
	int pass = 0;

	do {
		printf("Enter your %s: ", type);
		fgets(input, INFO_MAX_LENGTH, stdin);
		input[strcspn(input, "\n")] = '\0';
		if (strlen(input) == 0 || strlen(input) >= 99) {
			printf("Invalid Entry: ");
			pass = 1;
		}
		else pass = 0;

	} while (pass);
}

void formatPostalCode(char* postalCode) {
	char temp[POSTAL_MAX_LENGTH];
	int i, j = 0;

	for (i = 0; postalCode[i] != '\0'; i++) {
		if (postalCode[i] != ' ') {
			temp[j] = toupper(postalCode[i]);
			j++;
		}
	}
	temp[j] = '\0';
	strncpy(postalCode, temp, 3);
	postalCode[3] = ' ';
	strncpy(postalCode + 4, temp + 3, j - 3);
	postalCode[j + 1] = '\0';
}

int validPostalCode(char* postalCode) {
	if (strlen(postalCode) == 7 &&
		isalpha((unsigned char)postalCode[0]) &&
		isdigit((unsigned char)postalCode[1]) &&
		isalpha((unsigned char)postalCode[2]) &&
		postalCode[3] == ' ' &&
		isdigit((unsigned char)postalCode[4]) &&
		isalpha((unsigned char)postalCode[5]) &&
		isdigit((unsigned char)postalCode[6])) {

		return 1;
	}
	else return 0;
}

void getPostalCode(char* postalCode) {
	int pass = 0;

	do {
		printf("Enter your postal code: ");
		fgets(postalCode, POSTAL_MAX_LENGTH, stdin);
		postalCode[strcspn(postalCode, "\n")] = '\0';
		formatPostalCode(postalCode);
		if (validPostalCode(postalCode) == 0) {
			printf("Invalid Entry: ");
			pass = 1;
		}
		else pass = 0;
	} while (pass);
}


void displayCustomerInfo(struct customer* info) {
	printf("\nYou entered:\n");
	printf("%s %s\n", info->firstName, info->lastName);
	printf("%s\n", info->street);
	printf("%s, %s\n", info->city, info->province);
	printf("%s\n", info->postalCode);
}

int main(void) {
	struct customer info;

	getCustomerInfo("first name", info.firstName);
	getCustomerInfo("last name", info.lastName);
	getCustomerInfo("street address", info.street);
	getCustomerInfo("city", info.city);
	getCustomerInfo("province", info.province);
	getPostalCode(info.postalCode);

	putchar('\n');

	displayCustomerInfo(&info);
}
