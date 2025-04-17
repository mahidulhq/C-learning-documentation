## Mod operator -- modulus 
Modulus (%) is used to find the remainder. % This symbol is called the mod operator in the C language.
To find out the remainder of two numbers, we simply calculate a % b = remainder.  
For example, we can write a C program:  
```c
#include <stdio.h>

int main() {
    int a = 12, remainder, b = 5;
    remainder = 12 % 5;
    printf("%d", remainder);
    return 0;
}
```
output: 
```c
2
```
for understanding check the calculations:  
![Capture](https://github.com/user-attachments/assets/d57136aa-0698-4903-a331-8294614f9782)
