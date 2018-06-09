

#include<iostream>
#include<conio.h>
#include<string.h>
#include<cstring>


using namespace std;


int pow(int b, int e)
{
	//write your code here
	if (e == 0)
	{
		return 1;
	}
	return b* pow(b, e - 1);
}

int decimalToOcta(int n)
{
	//write your code here
	if (n < 8) {
		if (n >= 5)
		{
			return 1;
		}
		else
			return 0;
	}
	else
	{
		int temp = n % 8;
		n = n / 8;
		if (temp >= 5)
		{
			return 1 + decimalToOcta(n);
		}
		else
		{
			return 0 + decimalToOcta(n);
		}

	}

}

bool isPalindrome(char* str, int s, int l)
{
	//write your code here
	if (l == 0)
	{
		return 0;
	}
	isPalindrome(str, s + 1, l - 1);
	if (str[s] == str[l - 1])
	{
		return true;
	}
	else
		return false;
}

string Reverse(string s, int length)
{
	//write your code here
	string TempString = "";

	if (length == 0)
	{
		return TempString;
	}
	length--;
	TempString += s[length];
	return TempString += Reverse(s, length);

}

int fab(int n)
{
	//write your code here
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return fab(n - 1) + fab(n - 2);

}


void replace(char* s, char f, char t)
{
	//write your code here
	if (*s == '\0')
	{
		return;
	}
	if (*s == f)
	{
		*s = t;
	}
	cout << *s;
	return replace(s + 1, f, t);
}

int FindMaxWith3Args(int array[], int low, int high)
{
	//write your code here
	if (high == 0)
	{
		return low;
	}
		FindMaxWith3Args(array, low, high - 1);
		if (array[low]>array[low+1])
		{
			int temp = array[low];
			array[low] = array[low+1];
			temp = array[low+1];
		}
		return array[high];
}

int FindMaxWith2Args(int array[], int lastIndex)
{
	//write your code here
	return 0;
}

int product(int x, int y)
{
	//write your code here
	if (y == 0)
	{
		return 0 ;
	}	
	return  x + product( x,  y-1);	
}
void printChar(char ch, int t) {
	//write your code here
	if (t == 0)
	{
		return;
	}
	cout << ch;
	printChar(ch, t - 1);
}
void PrintPattern(int n, int k) {
	//write your code here
	if (n==k)
	{
		return;
	}
	cout << n;
	printChar( '+',  n);
	
	PrintPattern(n+1,k);
	cout << n;
	printChar('*', n);
	
}


void PrintScreen1(char ch, int lines) {
	//write your code here
	if (lines == 0)
	{
		return;
	}
	int temp = lines;
	printChar(ch, temp);
	cout << "\n";
	PrintScreen1(ch, temp - 1);
}
void PrintScreen2(char ch, int lines) {
	//write your code here
	if (lines == 0)
	{
		return;
	}
	int temp = lines;	
	PrintScreen2(ch, temp - 1);	
	printChar(ch, temp);
	cout << "\n";
}

void PrintScreen3(char ch, int lines, int start) {
	//write your code here
	if (lines==0)
	{
		return;
	}
	
	printChar('-', start);
	printChar(ch, lines);
	cout << "\n";
	
	PrintScreen3(ch, lines-1, start+1);
	
}
void PrintScreen4(char ch, int lines, int start) {
	//write your code here
	if (lines == 0)
	{
		return;
	}
	printChar('-', lines - 1);
	printChar(ch, start);

	cout << "\n";

	PrintScreen4(ch, lines - 1, start+1);
}
void PrintScreen5(char ch, int lines, int start) {
	//write your code here
	if (lines == 0)
	{
		return;
	}
	printChar('-', lines - 1);
	printChar(ch, start);

	cout << "\n";

	PrintScreen5(ch, lines - 1, start + 1);

	printChar('-', lines - 1);
	printChar(ch, start);

	cout << "\n";
}


int main()
{
	//char*s = new char[15];
	//strcpy(s, "steve");
	//cout<<pow( 2, 0);//q1
	//cout<<decimalToOcta(55);//q2
	//cout<<Reverse("hello",5);//q4
	//cout<<isPalindrome("usama",0,5);//q5
	//cout<<fab(6);//q6
	//replace(s, 'e', 'a');
	//int array[] = {1,2,3,4,5};
	//cout<<FindMaxWith3Args(array, 0, 5);
	//cout<<product(5,4);

	//printChar('+', 5);
	//PrintPattern(1,5);
	//PrintScreen2( '*',  5);
	//PrintScreen4('*', 5, 0);
	_getch();
}
