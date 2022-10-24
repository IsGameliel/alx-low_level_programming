0. 98 Battery st. mandatory
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
Prototype: void reset_to_98(int *n);
1. Don't swap horses in crossing a stream mandatory
Write a function that swaps the values of two integers.
Prototype: void swap_int(int *a, int *b);
2. This report, by its very length, defends itself against the risk of being read mandatory
Write a function that returns the length of a string.
Prototype: int _strlen(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
3. I do not fear computers. I fear the lack of them mandatory
Write a function that prints a string, followed by a new line, to stdout.
Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.
4. I can only go one way. I've not got a reverse gear mandatory
Write a function that prints a string, in reverse, followed by a new line.
Prototype: void print_rev(char *s);
5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes mandatory
Write a function that reverses a string.
Prototype: void rev_string(char *s);
6. Half the lies they tell about me aren't true mandatory
Write a function that prints one char out of 2 of a string, followed by a new line.
Prototype: void puts2(char *str);
The function should print only one character out of two, starting with the first one
7. Winning is only half of it. Having fun is the other half mandatory
Write a function that prints half of a string, followed by a new line.
Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the (length_of_the_string - 1) / 2 last characters of the string
8. Arrays are not pointers mandatory
Write a function that prints n elements of an array of integers, followed by a new line.
Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
9. strcpy mandatory
Prototype: char *_strcpy(char *dest, char *src);
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
Return value: the pointer to dest
FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers #advanced
Write a function that convert a string to an integer.
Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You do not need to check for overflow
FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.
11. Don't hate the hacker, hate the code #advanced
Create a program that generates random valid passwords for the program 101-crackme.
You are allowed to use the standard library
You don't have to pass the betty-style tests (you still need to pass the betty-doc tests)
man srand, rand, time
gdb and objdump can help