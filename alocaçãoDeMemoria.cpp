#include <stdio.h>
#include <stdlib.h>

int main(){

int *a, b;

b = 10;
a = (int*) malloc(sizeof(int));
*a = 20;

free(a);

a = &b;

printf("Toma: %d\n%d\n", a, &b);


return 0;
}
