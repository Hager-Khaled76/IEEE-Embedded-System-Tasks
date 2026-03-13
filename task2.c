#include <stdio.h>


 int toggleBit(int num,int position)
 {
    int val;
    val=num ^(1<<position);
    return (val);
 
 }

 int main()
 {
    int num=10;
	int position = 2;
	printf(" the number before toggle %d",num);
	printf(" the number after toggle %d",toggleBit(num,position));
    return 0;
 
 }