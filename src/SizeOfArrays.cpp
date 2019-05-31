/*
 * SizeOfArrays.cpp
 *
 *  Created on: 29 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	int values[] = {4, 7, 8, 1};


	/*
	 * To calculate the size of an array, i.e. its length (num of elements)
	 * We first find out how many bytes the entire array is using
	 * Then we find out how many bytes each of the data types uses
	 * Then we divide the total bytes by the data type bytes to get the number of elements
	 *
	 * In this case we can see that the total bytes for this array is 16
	 * and the number of bytes for the data type 'int' is 4
	 * Therefore if we divide 16 by 4 we get the number of elements in the array
	 * 16/4 = 4 elements.
	 */

	cout << sizeof(values) << endl;		// 16 bytes
	cout << sizeof(int) << endl;		// 4 bytes

	int arrayLength = sizeof(values)/sizeof(int);		// 16/4 = 4

	for(int i = 0; i < arrayLength; i ++)
	{
		cout << "Value at element " << i << " is " << values[i] << endl;;
	}



	return 0;
}

