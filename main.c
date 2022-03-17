#include "k10.h"
#include <stdio.h>
#include <stdlib.h>


u_0 byte;
u_24 data;

int main(){
	byte.b[0] = 1;
	data.b[0xFFffFF] = 'A';
	putchar(data.b[0xFFffFF]);
}
