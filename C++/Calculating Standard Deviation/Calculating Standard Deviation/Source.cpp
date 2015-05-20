	#include <iostream>
	#include <math.h>

	using namespace std;

	int main()
	{
		int input, count, mean, *arr;
		mean = 0;
		float out = 0;

		//Get the inputs
		cout << "Number of vales: ";
		cin >> count;

		cout << endl << "Values(Add a zero value to the end): ";
		cin >> input;

		//create an array to store them
		arr = new int[count];

		for (int i = 0; i < count; i++)
		{
			//Put them into the array
			arr[i] = input;
			mean = mean + arr[i];
			cin >> input;
		}

		//Calculate the average/mean;
		mean = mean / count;

		//Calculate the difference and square it
		for (int i = 0; i < count; i++)
		{
			int v = 0;
			v = arr[i];
			v = v - mean;
			v = v*v;
			out += v;//The total
		}

		//calculate the variance
		out = out / count;

		//Get the square root of the variance
		float squareRoot = sqrt((float)out);

		cout <<"The standard deviataion for this range of values is: " << squareRoot;

		char c;
		cin >> c;
	}