specifier for data types,  
int --> %d  
float --> %f  
char --> %c  

```c
#include <stdio.h>
int main() {
    int num1 = 10;
    float f = 4.56;
    char c = '8';

    printf("%d\n", num1);
    printf("%f\n", f);
    printf("%c", c);

    return 0;
}
```

Output:
```c
10
4.560000
8
```

But on float data type, we want to print 4.56, but the output gave 4.560000, where are four extra zeros. To print specifically
what we gave, we need to use %.2f specifier for float data type to print two numbers after a dot. 
```c
printf("%.2f\n", f);
```
output:
```
4.56
```
