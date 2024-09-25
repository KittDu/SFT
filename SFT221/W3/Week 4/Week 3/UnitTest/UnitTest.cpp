#include "pch.h"
#include "Customer_Info_r.h"
#include "CppUnitTest.h"
#include <string>
#include <Windows.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(CustomerTests) 
{

	TEST_METHOD(FirstNameTest)
	{
		CustomerInfo customer;
		setFirstName(&customer, "Aditya");
		Assert::AreEqual("Aditya", getFirstName(&customer));
	}
	
	TEST_METHOD(LastNameTest)
	{
		CustomerInfo customer;
		setLastName(&customer, "tambe");
		Assert::AreEqual("tambe", getLastName(&customer));
	}

	TEST_METHOD(AddressTest)
	{
		CustomerInfo customer;
		setAddress(&customer, "239 Apache Trail");
		Assert::AreEqual("239 Apache Trail", getAddress(&customer));
	}

	TEST_METHOD(PostalCodeTest)
	{
		CustomerInfo customer;
		setPostalCode(&customer, "M2H2W3");
		Assert::AreEqual("M2H2W3", getPostalCode(&customer));
	}

	TEST_METHOD(ProvinceTest)
	{
		CustomerInfo customer;
		setProvince(&customer, "ON");
		Assert::AreEqual("ON", getProvince(&customer));
	}

};

TEST_CLASS(CustomerTests1) {

	TEST_METHOD(FirstNameTest)
	{
		CustomerInfo customer;
		setFirstName(&customer, "");
		Assert::AreEqual("", getFirstName(&customer));
	}
	TEST_METHOD(LastNameTest)
	{
		CustomerInfo customer;
		setLastName(&customer, " ");
		Assert::AreEqual(" ", getLastName(&customer));
	}

	TEST_METHOD(AddressTest)
	{
		CustomerInfo customer;
		setAddress(&customer, "239 Apache Trail");
		Assert::AreEqual("239 Apache Trail", getAddress(&customer));
	}

	TEST_METHOD(PostalCodeTest)
	{
		CustomerInfo customer;
		setPostalCode(&customer, "M2H 2W3");
		Assert::AreEqual("M2H 2W3", getPostalCode(&customer));
	}

	TEST_METHOD(ProvinceTest)
	{
		CustomerInfo customer;
		setProvince(&customer, "ON");
		Assert::AreEqual("ON", getProvince(&customer));
	}

};

TEST_CLASS(CustomerTests2) {

	TEST_METHOD(FirstNameTest)
	{
		CustomerInfo customer;
		setFirstName(&customer, "Aditya");
		Assert::AreEqual("Aditya", getFirstName(&customer));
	}
	TEST_METHOD(LastNameTest)
	{
		CustomerInfo customer;
		setLastName(&customer, "Tambe");
		Assert::AreEqual("Tambe", getLastName(&customer));
	}

	TEST_METHOD(AddressTest)
	{
		CustomerInfo customer;
		setAddress(&customer, "239 Apache Trail");
		Assert::AreEqual("239 Apache Trail", getAddress(&customer));
	}

	TEST_METHOD(PostalCodeTest)
	{
		CustomerInfo customer;
		setPostalCode(&customer, "M2H 2W3");
		Assert::AreEqual("M2H 2W3", getPostalCode(&customer));
	}

	TEST_METHOD(ProvinceTest)
	{
		CustomerInfo customer;
		setProvince(&customer, "ON");
		Assert::AreEqual("ON", getProvince(&customer));
	}

};

TEST_CLASS(CustomerTests3) {

	TEST_METHOD(FirstNameTest)
	{
		CustomerInfo customer;
		setFirstName(&customer, "Rahul");
		Assert::AreEqual("Rahul", getFirstName(&customer));
	}
	TEST_METHOD(LastNameTest)
	{
		CustomerInfo customer;
		setLastName(&customer, "Mamania");
		Assert::AreEqual("Mamania", getLastName(&customer));
	}

	TEST_METHOD(AddressTest)
	{
		CustomerInfo customer;
		setAddress(&customer, "Seneca Hill Drive");
		Assert::AreEqual("Seneca Hill Drive", getAddress(&customer));
	}

	TEST_METHOD(PostalCodeTest)
	{
		CustomerInfo customer;
		setPostalCode(&customer, "M2J5A7");
		Assert::AreEqual("M2J5A7", getPostalCode(&customer));
	}

	TEST_METHOD(ProvinceTest)
	{
		CustomerInfo customer;
		setProvince(&customer, "BC");
		Assert::AreEqual("BC", getProvince(&customer));
	}

};

TEST_CLASS(CustomerTests4) {

	TEST_METHOD(FirstNameTest)
	{
		CustomerInfo customer;
		setFirstName(&customer, "Riya");
		Assert::AreEqual("Riya", getFirstName(&customer));
	}
	TEST_METHOD(LastNameTest)
	{
		CustomerInfo customer;
		setLastName(&customer, "Sawadekar");
		Assert::AreEqual("Sawadekar", getLastName(&customer));
	}

	TEST_METHOD(AddressTest)
	{
		CustomerInfo customer;
		setAddress(&customer, "Don Mills Station");
		Assert::AreEqual("Don Mills Station", getAddress(&customer));
	}

	TEST_METHOD(PostalCodeTest)
	{
		CustomerInfo customer;
		setPostalCode(&customer, "M2J 5A7");
		Assert::AreEqual("M2J 5A7", getPostalCode(&customer));
	}

	TEST_METHOD(ProvinceTest)
	{
		CustomerInfo customer;
		setProvince(&customer, "ON");
		Assert::AreEqual("ON", getProvince(&customer));
	}

};

TEST_CLASS(CustomerTests5) {

	TEST_METHOD(FirstNameTest)
	{
		CustomerInfo customer;
		setFirstName(&customer, "Riddhi");
		Assert::AreEqual("Riddhi", getFirstName(&customer));
	}
	TEST_METHOD(LastNameTest)
	{
		CustomerInfo customer;
		setLastName(&customer, "Sawant");
		Assert::AreEqual("Sawant", getLastName(&customer));
	}

	TEST_METHOD(AddressTest)
	{
		CustomerInfo customer;
		setAddress(&customer, "Fairview Mall");
		Assert::AreEqual("Fairview Mall", getAddress(&customer));
	}

	TEST_METHOD(PostalCodeTest)
	{
		CustomerInfo customer;
		setPostalCode(&customer, "M2J JJ4");
		Assert::AreEqual("M2J JJ4", getPostalCode(&customer));
	}

	TEST_METHOD(ProvinceTest)
	{
		CustomerInfo customer;
		setProvince(&customer, "QC");
		Assert::AreEqual("QC", getProvince(&customer));
	}

};

TEST_CLASS(CustomerTests6) {

	TEST_METHOD(FirstNameTest)
	{
		CustomerInfo customer;
		setFirstName(&customer, "Arya");
		Assert::AreEqual("Arya", getFirstName(&customer));
	}
	TEST_METHOD(LastNameTest)
	{
		CustomerInfo customer;
		setLastName(&customer, "Samanat");
		Assert::AreEqual("Samanat", getLastName(&customer));
	}

	TEST_METHOD(AddressTest)
	{
		CustomerInfo customer;
		setAddress(&customer, "Deepforest Rd");
		Assert::AreEqual("Deepforest Rd", getAddress(&customer));
	}

	TEST_METHOD(PostalCodeTest)
	{
		CustomerInfo customer;
		setPostalCode(&customer, "M2J JA6");
		Assert::AreEqual("M2J JA6", getPostalCode(&customer));
	}

	TEST_METHOD(ProvinceTest)
	{
		CustomerInfo customer;
		setProvince(&customer, "AB");
		Assert::AreEqual("AB", getProvince(&customer));
	}

};