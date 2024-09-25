#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define INFO_MAX_LENGTH 100
#define POSTAL_MAX_LENGTH 50

struct customer {
	char firstName[INFO_MAX_LENGTH];
	char lastName[INFO_MAX_LENGTH];
	char street[INFO_MAX_LENGTH];
	char city[INFO_MAX_LENGTH];
	char province[INFO_MAX_LENGTH];
	char postalCode[POSTAL_MAX_LENGTH];
};


void getCustomerInfo(const char* type, char* input);
void formatPostalCode(char* postalCode);
int validPostalCode(char* postalCode);
void getPostalCode(char* postalCode);
void displayCustomerInfo(struct customer* info);
