#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Customer_Info.h"
#include <ctype.h>

void setFirstName(struct CustomerInfo* cust, const char* firstName) {
    strncpy_s(cust->First_Name, sizeof(cust->First_Name), firstName, _TRUNCATE);
}

const char* getFirstName(const struct CustomerInfo* cust) {
    return cust->First_Name;
}

void setLastName(struct CustomerInfo* cust, const char* lastName) {
    strncpy_s(cust->Last_Name, sizeof(cust->Last_Name), lastName, _TRUNCATE);
}

const char* getLastName(const struct CustomerInfo* cust) {
    return cust->Last_Name;
}

void setAddress(struct CustomerInfo* cust, const char* address) {
    strncpy_s(cust->Address, sizeof(cust->Address), address, _TRUNCATE);
}

const char* getAddress(const struct CustomerInfo* cust) {
    return cust->Address;
}

void setPostalCode(struct CustomerInfo* cust, const char* postalCode) {
    strncpy_s(cust->Postal_Code, sizeof(cust->Postal_Code), postalCode, _TRUNCATE);
}

const char* getPostalCode(const struct CustomerInfo* cust) {
    return cust->Postal_Code;
}

void setProvince(struct CustomerInfo* cust, const char* province) {
    strncpy_s(cust->Province, sizeof(cust->Province), province, _TRUNCATE);
}

const char* getProvince(const struct CustomerInfo* cust) {
    return cust->Province;
}

void getCustomerData(struct CustomerInfo* customer) {
    printf("Enter your first name: ");
    fgets(customer->First_Name, sizeof(customer->First_Name), stdin);

    printf("Enter your last name: ");
    do {
        fgets(customer->Last_Name, sizeof(customer->Last_Name), stdin);
    } while (strlen(customer->Last_Name) <= 1);

    printf("Enter your street address: ");
    fgets(customer->Address, sizeof(customer->Address), stdin);

    printf("Enter your postal code: ");
    do {
        fgets(customer->Postal_Code, sizeof(customer->Postal_Code), stdin);
    } while (!isValidPostalCode(customer->Postal_Code));
}

int isValidPostalCode(const char* postalCode) {
    int count = 0;
    for (int i = 0; postalCode[i]; i++)
    {
        if (isdigit(postalCode[i]))
        {
            putchar(postalCode[i]);
            count++;
        }
    }
    if (count != 6) {
        return 0;
    }
    printf("\n");
    return 1;
}


int main()
{
    struct CustomerInfo customer;
    getCustomerData(&customer);
    return 0;
}