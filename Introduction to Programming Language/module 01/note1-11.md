## take input on C
To take input on C, there is a function **scanf()**  
Whatever we gave it as an input, it took it in and by using **printf()** it prints.

& this symbol is called ampersand. It is used to represent the word "and."

example:
```c
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    
    printf("%d", a);
    return 0;
}
```
on output you can enter any integer number, because we take the input as int datatype ``` int a; ```  

now we can take input any datatypes  
```c
#include <stdio.h>
int main() {
    int a;
    float f;
    char c;

    scanf("%d %f %c", &a, &f, &c);

    printf("%d %f %c", a, f, c);
}
```
output: 
```c
10 23.445000 v
```
