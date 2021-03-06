// C program to print all permutations with duplicates allowed
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
// Function to swap values at two pointers...
void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

// Function to print permutations of string
void permute(char *a, int l, int r)
{
int i;
if (l == r)
	{cout << ("%s\n", a) ;
	cout << endl;}
else
{
	for (i = l; i <= r; i++)
	{
	    // back-tracking
		swap((a+l), (a+i));
		permute(a, l+1, r);
		swap((a+l), (a+i));
	}
}
}

// main function to create and process the permute function..
int main()
{
    //creating array consists of ABC.....
	char str[] = "ABC";
	//passing string length into n......
	int n = strlen(str);
	//applying the permute function....
	permute(str, 0, n-1);
	return 0;
}
