# More_On_Recursion(PartII)
Q 1. Write a recursive function that computes the power of base b and exponent e, returns its com-
puted value as integer.
i:e Int pow(int b,int e)
Examples:
pow(2,3) will return 8
Q 2. Write a recursive function that receives an integer n as argument and returns the number of digits
greater or equal to 5 in the octal representation of n.
i:e Int DecimalToOcta(int n)
Examples are:
DecimalToOcta(55) will return 2 // (55)10 = (67)8
DecimalToOcta(92) will return 0 // (92)10 = (134)8
Q 3. A palindrome is a string that is spelled the same way forward and backward. Some examples of
palindromes are "radar and madam etc. Write a recursive function that input a string str and check whether
its palindrome or not.
Hint: function will receive three arguments, i.e. bool isPalindrome (char *str, int s, int l)
Example:
isPalindrome("MADAM",0,5) will return true
Q 4. Write the reverse function recursively that takes a string and the length of the string as arguments and
returns another string with its characters in the reverse order. Hint: String Reverse (string s,int length);
Example:
Reverse("HELLO",5) will return "OLLEH"
Q 5. The Fibonacci sequence is a series where the next term is the sum of previous two terms. The rst two
terms of the Fibonacci sequence is 0 followed by 1. The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21.
Write a function fab that takes a index of series as argument and returns value in Fibonacci series.
Examples are:
Fab(4) will return 3
Fab(6) will return 8
Q 6. Write a recursive function that changes all the occurrences of character 'f' in String 's' to character
't'. For example, if s was "steve", and f == 'e' and t == 'a', s would become "stava.
i:e void replace (char *s, char f, char t)
Q 7. Write a recursive function which takes 3 arguments: an array of type integer, int low, int high and
returns the maximum value of the array. low is the index 0,while high is the length of the array
i:e int ndMaxWithThreeArguments(int arr[],int low, int high)
Q 8. Write a recursive function which takes an array of type integer and its last index as as argument and
returns the maximum value of the array.
i:e int ndMaxWithTwoArguments(int arr[],int l)
Q 9. Write a recursive function product that receives two : (i) an integer x; and (ii) an integer y and returns
the results x  y without using '*' operator.
For example calling product(5,4) should return 20. However you are not allowed to use '*' operator.
Q 10. Write a recursive function to print pattern that takes two integer arguments n and k. n is the starting
number while k is the ending limit.
i:e PrintPattern(int n,int k)
Example:
PrintPattern(1, 5) would print following pattern on screen
1+2++3+++4++++5+++++4****3***2**1*
For printing a character inside PrintPattern() you are required to write another recursive function PrintChar,that
takes two arguments char ch and int t.This function would print a char ch at t times on screen.
i:e PrintChar(char ch,int t)
Example:
PrintChar('+',5) will print on screen +++++
Hint: In next Four questions you are required to use the previously dened PrintChar()
function.
Q 11. Write a recursive function that receives two arguments: (i) a character ch; (ii) number of lines
lines; and print the following pattern on screen.
i:e void PrintScreen1(char ch,int lines)
Example:
PrintScreen1('*',5) will print following pattern on screen
*****
****
***
**
*
Q 12. Write a recursive function that receives two arguments: (i) a character ch; (ii) number of lines lines;
and print the following pattern on screen.
i:e void PrintScreen2(char ch,int lines)
Example:
PrintScreen2('*',5) will print following pattern on screen
*
**
***
****
*****
Q 13. Write a recursive function that receives two arguments: (i) a character ch; (ii) number of lines lines
and (iii) a starting point; and print the following pattern on screen.
ie void PrintScreen3(char ch,int lines, int start)
Example:
PrintScreen3('*',5,0) will print following pattern on screen
*****
-****
--***
---**
----*
Q 14. Write a recursive function that receives two arguments: (i) a character ch; (ii) number of lines lines
and (iii) a starting point; and print the following pattern on screen.
ie void PrintScreen4(char ch,int lines,int start)
Example:
PrintScreen4('*',5,1) will print following pattern on screen
----*
---**
--***
-****
*****
Q 15. Write a recursive function that receives two arguments: (i) a character ch; (ii) number of lines lines
and (iii) a starting point; and print the following pattern on screen.
ie void PrintScreen5(char ch,int lines, int start)
Example:
PrintScreen5('*',5,1) will print following pattern on screen
----*
---**
--***
-****
*****
-****
--***
---**
----*