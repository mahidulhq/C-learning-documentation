## Arithmetic Operators
An operator is a symbol that performs a fixed operation between two numbers. like **+**.  
Arithmetic operator:  
```
+ Addition
- Subtraction
* Multiplication
/ Division
% Modulus
```
example code:
```c
#include <stdio.h>
int main() {
    int a = 10, b = 5, sum, sub, mul, div;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    printf("%d\n%d\n%d\n%d", sum, sub, mul, div);
 return 0;
}
```
Output:
```c
15
5
50
2
```
// tricks: select specific text or codes, then press ctrl / to make it a comment.  //

If I try to do :
```c
#include <stdio.h>
int main() {
    int a = 7, b = 2, div;
    div = a / b;
    printf("%d\n", div);
 return 0;
}
```
Then the output will show: 
```c
3
```
But it's supposed to show 3.5. This happens because the ```a, b, div``` is an integer data type, which is why  
3.5 converts to the integer number 3.  
to print correctly:
```c
#include <stdio.h>
int main() {
    float a = 7, b = 2;
    float div;
    div = a / b; // Floating-point division
    printf("%f\n", div);
    return 0;
}
```
output:
```c
3.500000
```
