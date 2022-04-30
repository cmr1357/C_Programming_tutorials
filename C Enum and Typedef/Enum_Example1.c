//enum is a user defined data type.
//enum assign name to integral constant.
//declaration:
/* enum color {red,blue,green,yellow};
enum=keyword
color=datatype
red,..state red is assigned state0
instantiation 
enum color x;
operation
x=blue store the state value
declared outside main
*/
#include<stdio.h>


int main()

{
	enum color{red,blue,green,yellow};
	enum color x;
	enum color y;
	y=yellow;
	x=red;
	printf("value x= %d\n",x);
	printf("value y= %d\n",y);
	return 0;
}
