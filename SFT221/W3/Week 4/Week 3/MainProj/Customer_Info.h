
#define CRT_NO_SECURE_WARNINGS
#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H

struct CustomerInfo {
    char First_Name[60];
    char Last_Name[60];
    char Address[120];
    char City[50];
    char Province[4];
    char Postal_Code[8];
};

void setFirstName(struct CustomerInfo* cust, const char* firstName);
const char* getFirstName(const struct CustomerInfo* cust);

void setLastName(struct CustomerInfo* cust, const char* lastName);
const char* getLastName(const struct CustomerInfo* cust);

void setAddress(struct CustomerInfo* cust, const char* address);
const char* getAddress(const struct CustomerInfo* cust);

void setPostalCode(struct CustomerInfo* cust, const char* postalCode);
const char* getPostalCode(const struct CustomerInfo* cust);

void setProvince(struct CustomerInfo* cust, const char* province);
const char* getProvince(const struct CustomerInfo* cust);

void getCustomerData(struct CustomerInfo* cust);

int isValidPostalCode(const char* postalCode);
void setPostalCode(struct CustomerInfo* cust, const char* postalCode);
const char* getPostalCode(const struct CustomerInfo* cust);

#endif