
#include "LinearMath/btVector3.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
btVector3 a(0,0,0);
btVector3 b(1,1,1);
btVector3 c;

c = a+b;
printf("c=%f,%f,%f\n", c[0],c[1],c[2]);
printf("hello\n");
}
