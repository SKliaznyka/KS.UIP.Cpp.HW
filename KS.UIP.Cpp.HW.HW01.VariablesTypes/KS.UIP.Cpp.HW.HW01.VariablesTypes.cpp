// KS.UIP.Cpp.HW.HW01.VariablesTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using std::cin;
using std::cout;
int nNumber(0),
nExponent(0),
nHundreds(0), nDecimals(0), nDigit(0),
nDay(0), nMonth(0), nYear(0);
char cExponent('0'),
cSymbol('0');
double dXcoord(0.0), dYcoord(0.0), dRadius(12.0);

int main()
{
	if (false)
	{
		/*Task 01.
	User input the number (int). 
	Determine: is the number Positive or Negative.
	Check if the Number is NULL.
	*/
		cout << "HW01. Task01:\n";
		cout << "\n Enter an integer Number: \t";
		cin >> nNumber;
		if (nNumber == 0)
		{
			cout << "\n Input Number is NULL \n";
		}
		else if (nNumber > 0)
		{
			cout << "\n Input Number is POSITIVE \n";
		}
		else
		{
			cout << "\n Input Number is NEGATIVE \n";
		}
		cout << "================================= \n";
	
}

	if (false)
	{
		/*
		HW01. Task 02-1:
		User input the Number (int). 
		User input the Exponential number (0...3), 
		Do the calculation. 
		*/
		cout << "HW01. Task 02-1 (exponentiation 0...3): \n";
		cout << "Enter the Number, please: \t";
		cin >> nNumber;
		cout << "Enter the Exponentiation value in range 0...3: \t";
		cin >> nExponent;
		switch (nExponent)
		{
		case (0):
			cout << nNumber << "^" << nExponent << "=\t 1 \n";
			break;
		case (1):
			cout << nNumber << "^" << nExponent << "=\t" << nNumber << "\n";
			break;
		case (2):
			cout << nNumber << "^" << nExponent << "=\t" << nNumber * nNumber << "\n";
			break;
		case (3):
			cout << nNumber << "^" << nExponent << "=\t" << nNumber * nNumber * nNumber << "\n";
			break;
		default:
			cout << "\n ERROR! Wrong exponentiation entering! Try Next time. \n";
			break;
		}
		cout << "================================= \n";
	}

	if (false)
	{
		/*
		HW01. Task 02-2:
		User input the Number (int).
		User choose the Type of Exponential operation:
		1. Square
		2. Cube
		Do calculation.
		*/
		cout << "HW01. Task 02-2 (exponentiation 0...3): \n";
		cout << "Enter the Number, please: \t";
		cin >> nNumber;
		cout << "Choose the Type of operation (You might choose the NUMBER) \n";
		cout << " 1 - Square exponentiation; 2 - Cube exponentiation: \t";
		cin >> cExponent;
		switch (cExponent)
		{
		case ('1'):
			cout << nNumber << "\t DSquared \t" << "=\t" << nNumber * nNumber << "\n";
			break;
		case ('2'):
			cout << nNumber << "\t Cubed \t" << "=\t" << nNumber * nNumber * nNumber << "\n";
			break;
		default:
			cout << "\n ERROR! Wrong exponentiation Type entering! Try Next time. \n";
			break;
		}
		cout << "================================= \n";
	}

	if (false)
	{
		/*
		HW01. Task 03:
		User input the Number (int).
		Determine, IF the end of the number is equal to "0".
		*/
		cout << "HW01. Task 03 (If the last DIGIT is '0'?): \n";
		cout << "\n Enter the Number, please: \t";
		cin >> nNumber;
		if (nNumber % 10 == 0)
		{
			cout << "The last DIGIT of the number IS:  '0' \n";
		}
		else
		{
			cout << "The last DIGIT of the number IS NOT:  '0' \n";
		}
		cout << "================================= \n";
	}
	
	if (false)
	{
		/*
		HW01. Task 04:
		User input the 3-DIGIT Number (int).
		Show this number in column (each digit in separate row).
		*/
		cout << "HW01. Task 04 (Number in column): \n";
		cout << "\n Enter the 3-Digit Number, please: \t";
		cin >> nNumber;
		if ((nNumber / 100) < 1)
		{
			cout << "\n ERROR! The input Number IS NOT 3-DIGIT. Please try again. \n";
		}
		else if ((nNumber / 100) >= 10)
		{
			cout << "\n ERROR! The input Number IS NOT 3-DIGIT. Please try again. \n";
		}
		else
		{
			nHundreds = nNumber / 100;
			nDecimals = (nNumber - nHundreds * 100) / 10;
			nDigit = (nNumber - nHundreds * 100) % 10;
			cout << "\n Your 3-DIGIT number in column: \n";
			cout << nHundreds << "\n";
			cout << nDecimals << "\n";
			cout << nDigit << "\n";
		}
		cout << "================================= \n";
	}

	if (false)
	{
		/*
		HW01. Task 05:
		User input the Character (char).
		Determine: is it regular Letter? / Is it Capital Letter? / Is it NOT a Letter?.
		*/
		cout << "HW01. Task 05 (If the symbol Capital or Regular): \n";
		cout << "\n Enter the Letter, please: \t";
		cin >> cSymbol;
		if ((int)cSymbol >= 65 && (int)cSymbol <= 90)
		{
			cout << "\n The Letter is CAPITAL \n";
		}
		else if ((int)cSymbol >= 97 && (int)cSymbol <= 122)
		{
			cout << "\n The Letter is REGULAR \n";
		}
		else
		{
			cout << "\n The Symbol is NOT a LETTER \n";
		}
		cout << "================================= \n";
	}

	if (false)
	{
		/*
		HW01. Task 06:
		Circle-Target has center with coordinate (0,0).
		Radius = 12.
		User input the Point Coordinates  (x, y)
		
		Does this Point belong to Target?
		*/
		cout << "HW01. Task 06 (CIRCLE. R=12): \n";
		cout << "\n Enter the X-coordinate, please: \t";
		cin >> dXcoord;
		cout << "\n Enter the Y-coordinate, please: \t";
		cin >> dYcoord;
		if (sqrt(dXcoord*dXcoord + dYcoord * dYcoord) < 12)
		{
			cout << "\n You shoot the Target\n";
		}
		else
		{
			cout << "\n You MISSed the Target\n";
		}
		cout << "================================= \n";
	}

	if (true)
	{
		/*
		HW01. Task 07-1 (without "Fall-Through"):
		User input the Numbers (int):
		- Day
		- Month
		- Year.
		Calculate the Total number of days since 1st of January of the Year till the specified date.
		Try to use "fall-through"(w/o Break) in the Switch-Case operator.
		*/
		cout << "HW01. Task 07 (The SUMM of days before specified Date): \n";
		cout << "\n Enter the Day, please: \t";
		cin >> nDay;
		cout << "\n Enter the Month, please: \t";
		cin >> nMonth;
		cout << "\n Enter the Year, please: \t";
		cin >> nYear;
		if (nDay > 0 && nDay <=31 && nMonth > 0 && nYear >= 0)
		{
			if (nYear % 4 != 0)
			{
				switch (nMonth)
				{
				case (1):
					cout << "\n From 01 Januar till the Specified Date: \t" << nDay << "days\n";
					break;
				case (2):
					cout << "\n From 01 Januar till the Specified Date: \t" << 31 + nDay << "days\n";
					break;
				case (3):
				case (4):
				case (5):
				case (6):
				case (7):
				case (8):
				case (10):
				case (12):
					cout << "\n From 01 Januar till the Specified Date: \t" <<
						30 * (nMonth - 1) + nMonth / 2 - 2 + nDay << "days\n";
					break;
				case (9):
				case (11):
					cout << "\n From 01 Januar till the Specified Date: \t" <<
						30 * (nMonth - 1) + (nMonth + 1) / 2 - 2 + nDay << "days\n";
					break;
				default:
					cout << "\n ERROR! You entered wrong Number(s). Try again. \n";
					break;
				}
			}
			else
			{
				switch (nMonth)
				{
				case (1):
					cout << "\n From 01 Januar till the Specified Date: \t" << nDay << "days\n";
					break;
				case (2):
					cout << "\n From 01 Januar till the Specified Date: \t" << 31 + nDay << "days\n";
					break;
				case (3):
				case (4):
				case (5):
				case (6):
				case (7):
				case (8):
				case (10):
				case (12):
					cout << "\n From 01 Januar till the Specified Date: \t" <<
						30 * (nMonth - 1) + nMonth / 2 - 1 + nDay << "days\n";
					break;
				case (9):
				case (11):
					cout << "\n From 01 Januar till the Specified Date: \t" <<
						30 * (nMonth - 1) + (nMonth + 1) / 2 - 1 + nDay << "days\n";
					break;
				default:
					cout << "\n ERROR! You entered wrong Number(s). Try again. \n";
					break;
				}
			}
		}
		else
		{
			cout << "\n ERROR! You entered wrong Number(s). Try again. \n";
		}
		cout << "================================= \n";
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
