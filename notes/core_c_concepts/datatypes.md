# Variables and Data Types
## Integer Data Types
* int(Short for integer) is a data type used to store whole numbers (positive, negative, or zero) without decimal points.
* Size: Typically 4 bytes (32 bits) on most modern system.
* Range:
** Signed int (int): -2,147,483,648 to 2,147,483,647
**Unsigned int (unsigned): 0 to 4,294,967,295 (0 to 2^32-1)
````
#include <stdio.h>
int main() {
        int a = 10; //Positive integer
        int b = -25; //Negative integer
        unsigned int c = 50 //Only positive integer

        printf("a=%d\n", a);
        printf("b=%d\n", b);
        printf("c=%u\n", c);
    }
````

### Modifiers (Short, Long, Unsigned)
*short int (2 bytes): -32,768 to 32,767
*long int (4 or 8 bytes): -2^31 to 2^31 - 1 (on 32 bit) or -2^63 to 2^63 - 1 (on 64 bit)

Operations on int
````
int a = 10, b = 5;
int sum = a + b; //15
int diff = a - b; //5
int product = a * b; //50
int quotient = a / b; //2 (integer division, decimal part is discarded)
int remainder = a % b //0 (modulus operator)

````
### Integer Overflow
* If int exceeds its range, it wraps around (undefined behaviour)

````
#include
int main() {
        int max = 2147483647; //Maximum value of signed int
        prinft("Max: %d\n", max);
        max = max +1; //Overflow
        printf("After Overflow: %d\n", max); //Will print a negative value)

        return 0;
    }
````
1. Basics of Char
* Size: 1 byte (8 bits)
* Stores: Single characters ('A', 'B', '*')
* ASCII Range: 0 to 255 (Extended ASCII goes up to 127/255 depending on system)

Example: Declaring a char

````
#include <stdio.h>
int main() {
        char letter = 'A';
        printf("Character: %c\n", letter);
        return 0;
    }
````

2. Every character has a corresponding ASCII (American Standard Code for Information Interchange) value
````
#include <stdio.h>
int main() {
        char ch = 'A';
        printf("Character: %c, ASCII value: %d\n", ch, ch);
        return 0;
    }

````
3. Char as an Integer
Since char is stored as a number internally you can perform arithmetic operations on it.

Example: Incrementing characters

````
#include <stdio.h>
int main() {
        char letter = 'A;
        printf("Current Letter: %c\n", letter);
        letter = letter + 1;
        printf("Next Letter: %c\n, letter");
        return 0;
    }

````
4. Signed vs Unsigned char
By default, char can be signed (-128 to 127) or unsigned (0 to 255).

Example: Signed and Unsigned char

````
#include <stdio.h>
int main() {
        signed char s = -5;
        unsigned char u = 250;

        printf("Signed: %d\n", s);
        printf("Unsigned: %d\n", u);

        return 0;
    }

````

5. char Arrays (Strings)
A single char stores only one character
To store multiple characters (words or sentences), we use character arrays (strings).

Example: Declaring a String (char array)

````
#include <stdio.h>
int main() {
        char name[] = "Alice"; // Implicittly adds '\0' (null terminator)
        printf("Name: %s\n", name);
        return 0;
    }
