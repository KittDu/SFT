#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_FACTORIALS 10000
#define NUM_FACTS 100
struct FactorialResults
{
	int results[MAX_FACTORIALS];
	int numResults;
};
int factorial(const int n)
{

	////updated code
	return (n <= 1) ? 1 : n * factorial(n - 1);

	/*
	// return (n <= n) ? n * factorial(n - 1) : 1;
	1.This condition would be always true and this will make no sense to our code.
	  To overcome this problem we can make some changes which can be:

		a.  assigning values like 1,2,3,4,..... so that our program will not have a problem of over stack..
			return (n <= 1) ? n * factorial(n - 1) : 1;
			this way we try to run our function by saying if n is smaller than or equal to 1.
			trying to print the value by call the function in the main and passing 2 parameter and then trying to print it

	2. I am replacing this return value from this return (n <= n) ? n * factorial(n - 1) : 1; to return (n <= 1) ? 1 : n factorial(n - 1); this will help to print the value on the console and thus we can see the 1 output on console.
	*/

}
int reduceFactorial(const int n)
{

	////updated code
	int result = 1;
	for (int i = 2; i <= n; i++)
	{
		result *= i;
	}
	return result;

	//return n / n;
	/*
	1. Formula we use for reducing factorial is ths (n+1)! = n! * (n+1), but we are using this which is not the correct formula n/n

	2. I am replacing the given formula with this in order to reduce our factorial and can be executed in more better manner.

	3. I will try to implement this by add a small for loop which will help to execute the above new mentioned formula properly since,
	   I cannot find any better idea to use so trying the for loop.

	4. I have added a new variable called result and assigned the value 1 by default to it, when it go in the for loop, it will be multiplied by i itself and
	   and at the end it will return the result overall at the end of the function.
	*/
}
void computeFactorials(struct FactorialResults results, int numFactorials)

{
	//updated code
	int i;
	int limit;
	if (numFactorials < MAX_FACTORIALS)
	{
		limit = numFactorials; 
	}
	else 
	{
		limit=MAX_FACTORIALS;
	}

	for (i = 0; i < numFactorials; i++)
	{
		results.results[i] = factorial(i);
	}

	results.numResults = numFactorials;

	/*
	// int i; for (i = 0; i < numFactorials; i++)
	// {
	// 	results.results[i] = factorial(i);
	// }
	// results.numResults = numFactorials;

	1. In this I have used ternary operator or short hand if-else we can say and I am removing the for loop to check if
	   now it works properly without the loop.

	2. Now what I am doing, firstly I tried to used ternary but it gave me some errors, to overcome I then tried to use if else statement and providing condition which were if numFactiorial<Max_factorial which is defined in the begining, then limit would be equal to numfactorial else it will Max_factorial. 

	3. As we can see I have kept the i variable same, but add a new variable called limit and then applying condition to set limit either numFactorial or Max_factorial.

	4. this will help to improve code's efficiency in somewhat manner plus it will run smoothly..

	5. Now i am trying to add the for loop again with the same conditions as what we were given, now this will more better way
	   of using it.
	*/

}
int main(void)
{
	printf("%d\n", factorial(6));
	// trying to pass the parameter and see if this runs accordingly to the changes I made in the code by calling and passing values

	printf("%d", reduceFactorial(3));
	// trying to pass the parameter and see if this runs accordingly to the changes I made in the code  by calling and passing values

	struct FactorialResults results;
	computeFactorials(results, NUM_FACTS);

	int i;
	for (i = 0; i < results.numResults; i++)
	{
		printf("%4d\t%10d\n", i, results.results[i]);
	}

	return 0;
	/*


	// struct FactorialResults results = { {0}, 0 };
	// int i;
	// computeFactorials(results, NUM_FACTS);
	// for (i = 0; i < NUM_FACTS; i++)
	// {
	// 	results.results[i] = reduceFactorial(results.results[i]);
	// 	printf("%5d %12f\n", i, results.results[i]);
	// }
	// return 0;
		*/
}