## Loop
In C programming there are 3 types of loops: ```for, while, do while``` loop.  
normally loop means doing the same thing again and again on repeat.  

for:  
```c
for (initialization; condition; increment/decrement;) {
    //starting       end         step
    // code
}
```

example code: write "sorry" 100 time.  
```c
#include <stdio.h>

int main() {

    for(int i = 1; i <= 100; i++) {
        printf("Sorry\n");
    }

}
```
example: writre 1-10 using for loop.
```c
#include <stdio.h>

int main() {

    for(int i = 1; i <= 10; i++) {
        printf("%d\n",i);
    }

}
```
