boolean data type: data type for it is **bool**  
bool only print true or false  
where true means 1  
      false means 0  
To use the bool data type specific header file needed; the header file for it **#include<stdbool.h>**  
bool datatype doesn't have any specific specifier, so as an integer %d is used to print bool.
sample:  
```c
#include <stdio.h>
#include <stdbool.h>
int main() {
    bool b = true;
    printf("%d\n", b);
    return 0;
}
```
output:
```
1
```
or
```c
#include <stdio.h>
#include <stdbool.h>
int main() {
    bool b = false;
    printf("%d\n", b);
    return 0;
}
```
output:
```
0
```
