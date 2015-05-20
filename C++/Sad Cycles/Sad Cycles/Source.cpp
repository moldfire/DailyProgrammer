	#include <iostream>

	using namespace std;
	int main()
	{
		unsigned long b, n, iterations, nBuffer, length, *buffer, output;

		while (true)
		{
			cout << "Base: ";
			cin >> b;
			cout << "Starting Number: ";
			cin >> n;
			cout << "Iterations: ";
			cin >> iterations;

			while (iterations > 0)
			{
				length = 0;
				output = 0;
				buffer = 0;

				nBuffer = n;
				while (nBuffer > 0)
				{
					nBuffer = nBuffer / 10;
					length++;
				}

				buffer = new unsigned long[length];
				nBuffer = n;
				for (int i = 0; i < length; i++)
				{
					int v = nBuffer % 10;
					nBuffer = nBuffer / 10;
					buffer[i] = v;

					for (int iB = 0; iB < b-1; iB++)
					{
						buffer[i] = buffer[i] * v;
					}
				}

				for (int i = 0; i < length; i++)
				{
					output = output + buffer[i];
				}

				if (iterations > 1)
				{
					cout << output << ", ";
				}
				else
				{
					cout << output << endl;
				}
				n = output;
				iterations--;
			}
			cout << "Done" << endl;
			char c;
			cin >> c;
			if (c == 'r')
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}