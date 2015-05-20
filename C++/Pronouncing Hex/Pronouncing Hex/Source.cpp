	#include <iostream>
	#include <string>

	using namespace std;

	int main()
	{	
		int length, x = 0;
		string hexString, buffer;
		buffer = "0x000000";

		//Get hex input
		cin >> hexString;
		length = hexString.length();

		//Remove prefix
		x = hexString.find_first_of('x')+1;

		//Seperate characters
		for (int i = 0; i < (hexString.length() - x); i++)
		{
			buffer[i] = hexString[i + x];
		}
		hexString = buffer;

		//Rebuild string
		int counter = 0;
		buffer = "";
		for (int i = 0; i < length-x; i++)
		{
			switch (hexString[i])
			{
			case 'A':
				if(counter == 0)
				{
					buffer += "atta-";
				}
				else{ buffer += "aa "; }
				break;
			case 'B':
				if (counter == 0)
				{
					buffer += "bibbity-";
				}
				else{ buffer += "bee "; }
				break;
			case 'C':
				if (counter == 0)
				{
					buffer += "city-";
				}
				else{ buffer += "cee "; }
				break;
			case 'D':
				if (counter == 0)
				{
					buffer += "dickety-";
				}
				else{ buffer += "dee "; }
				break;
			case 'E':
				if (counter == 0)
				{
					buffer += "ebbity-";
				}
				else{ buffer += "ee "; }
				break;
			case 'F':
				if (counter == 0)
				{
					buffer += "fleventy-";
				}
				else{ buffer += "eff "; }
				break;
			case '0':
				break;
			case '1':
				if (counter == 0)
				{
					buffer += "ten-";
				}
				else{ buffer += "one "; }
				break;
			case '2':
				if (counter == 0)
				{
					buffer += "twenty-";
				}
				else{ buffer += "two "; }
				break;
			case '3':
				if (counter == 0)
				{
					buffer += "thirty-";
				}
				else{ buffer += "three "; }
				break;
			case '4':
				if (counter == 0)
				{
					buffer += "fourty-";
				}
				else{ buffer += "four "; }
				break;
			case '5':
				if (counter == 0)
				{
					buffer += "fifty-";
				}
				else{ buffer += "five "; }
				break;
			case '6':
				if (counter == 0)
				{
					buffer += "sixty-";
				}
				else{ buffer += "six "; }
				break;
			case '7':
				if (counter == 0)
				{
					buffer += "seventy-";
				}
				else{ buffer += "seven "; }
				break;
			case '8':
				if (counter == 0)
				{
					buffer += "eighty-";
				}
				else{ buffer += "eight "; }
				break;
			case '9':
				if (counter == 0)
				{
					buffer += "ninety-";
				}
				else{ buffer += "nine "; }
				break;
			default:
				break;

			}
			counter++;
			if (counter > 1 && i < length - 3)
			{ 
				buffer += "bitey ";
				counter = 0;
			}
		}

		cout << buffer;

		char c;
		cin >> c;
	}