

#include "pch.h"
#include "CppUnitTest.h"
#include "customerInfo_r.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CustomerInfoTests
{
    TEST_CLASS(CustomerInfoBlackBoxTests)
    {
    public:

        TEST_METHOD(ValidPostalCodeValid)
        {
            char validCode1[] = "G3K 69S";
            char validCode2[] = "P0M 9G5";

            Assert::IsTrue(validPostalCode(validCode1));
            Assert::IsTrue(validPostalCode(validCode2));
        }

        TEST_METHOD(ValidPostalCodeInvalid)
        {

            char invalidCode1[] = "987 345";
            char invalidCode2[] = "DFG SDF";
            char invalidCode3[] = "F0S4O7";

            Assert::IsFalse(validPostalCode(invalidCode1));
            Assert::IsFalse(validPostalCode(invalidCode2));
            Assert::IsFalse(validPostalCode(invalidCode3));
        }

        TEST_METHOD(FormatPostalCode)
        {
            char postalCode1[POSTAL_MAX_LENGTH] = "g1r2k3";
            char postalCode2[POSTAL_MAX_LENGTH] = "Njk aUl";
            char postalCode3[POSTAL_MAX_LENGTH] = "123 456";
            char postalCode4[POSTAL_MAX_LENGTH] = "ABcdEFghIJklMN";
            char postalCode5[POSTAL_MAX_LENGTH] = "1234567890";
            char postalCode6[POSTAL_MAX_LENGTH] = "b 7  e 0  r 8";
            char postalCode7[POSTAL_MAX_LENGTH] = "K9R             8S7";

            formatPostalCode(postalCode1);
            Assert::AreEqual("G1R 2K3", postalCode1);
            formatPostalCode(postalCode2);
            Assert::AreEqual("NJK AUL", postalCode2);
            formatPostalCode(postalCode3);
            Assert::AreEqual("123 456", postalCode3);
            formatPostalCode(postalCode4);
            Assert::AreEqual("ABC DEFGHIJKLMN", postalCode4);
            formatPostalCode(postalCode5);
            Assert::AreEqual("123 4567890", postalCode5);
            formatPostalCode(postalCode6);
            Assert::AreEqual("B7E 0R8", postalCode6);
            formatPostalCode(postalCode7);
            Assert::AreEqual("K9R 8S7", postalCode7);
        }
    };

    TEST_CLASS(CustomerInfoWhiteBoxTests)
    {
    public:

        TEST_METHOD(ValidPostalCode)
        {
            char validCode1[POSTAL_MAX_LENGTH] = "A1B 2C3";
            char validCode2[POSTAL_MAX_LENGTH] = "Z9Z 9Z9";
            char invalidCode1[POSTAL_MAX_LENGTH] = "A1B2C3";
            char invalidCode2[POSTAL_MAX_LENGTH] = "A1B 23C";
            char invalidCode3[POSTAL_MAX_LENGTH] = " ";
            char invalidCode4[POSTAL_MAX_LENGTH] = "\n";
            char invalidCode5[POSTAL_MAX_LENGTH] = "\t";
            char invalidCode6[POSTAL_MAX_LENGTH] = "";
            char invalidCode7[POSTAL_MAX_LENGTH] = "A1B2C3D4E5A1B2C3D4E5A1B2C3D4E5A1B2C3D4E5A1B2C3D4E";

            Assert::IsTrue(validPostalCode(validCode1));
            Assert::IsTrue(validPostalCode(validCode2));
            Assert::IsFalse(validPostalCode(invalidCode1));
            Assert::IsFalse(validPostalCode(invalidCode2));
            Assert::IsFalse(validPostalCode(invalidCode3));
            Assert::IsFalse(validPostalCode(invalidCode4));
            Assert::IsFalse(validPostalCode(invalidCode5));
            Assert::IsFalse(validPostalCode(invalidCode6));
            Assert::IsFalse(validPostalCode(invalidCode7));
        }

        TEST_METHOD(FormatPostalCode)
        {
            char postalCode1[POSTAL_MAX_LENGTH] = "a1b2c3";
            char postalCode2[POSTAL_MAX_LENGTH] = "a b 2 c3";
            char postalCode3[POSTAL_MAX_LENGTH] = "123 456";
            char postalCode4[POSTAL_MAX_LENGTH] = "ABcdEFghIJklMN";
            char postalCode5[POSTAL_MAX_LENGTH] = "1234567890";
            char postalCode6[POSTAL_MAX_LENGTH] = "a 1  b 2  c 3";
            char postalCode7[POSTAL_MAX_LENGTH] = "Z9Y             8X7";

            formatPostalCode(postalCode1);
            Assert::AreEqual("A1B 2C3", postalCode1);
            formatPostalCode(postalCode2);
            Assert::AreEqual("AB2 C3", postalCode2);
            formatPostalCode(postalCode3);
            Assert::AreEqual("123 456", postalCode3);
            formatPostalCode(postalCode4);
            Assert::AreEqual("ABC DEFGHIJKLMN", postalCode4);
            formatPostalCode(postalCode5);
            Assert::AreEqual("123 4567890", postalCode5);
            formatPostalCode(postalCode6);
            Assert::AreEqual("A1B 2C3", postalCode6);
            formatPostalCode(postalCode7);
            Assert::AreEqual("Z9Y 8X7", postalCode7);
        }
    };
}
