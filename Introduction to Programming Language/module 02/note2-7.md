## Conditional statement - if else
Think like this, if you have 100BDT then you will eat burger. Now if you don't have 100BDT then you will not be able to eat the burger.  
we can write this like this:  
```
if i have 100BDT  
      i can eat burger  
or else  
      i will not  
```
to write condition we have to maintain this format:  
```c
if (condition) {
      // codes
}
else {
      // codes
}
```
example code: 
```c
#include <stdio.h>

int main() {
    int BDT;
    scanf("%d", &BDT);
    
    if(BDT >= 100) {
        printf("I will eat");
    } else {
        printf("I will not eat");
    }
    return 0;
}
```
we can input the money, if we input 100 or more than 100 we can eat burger, if we input lower than 100 we cant eat burger.  
For example, we are choosing 120 BDT as an input.  
Input: 120  
Output:  
```C
I will eat
```
