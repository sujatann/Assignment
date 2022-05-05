
/**
 * @file name.h
 * @author RSujata Naikar(naikarsujata565.com)
 * @brief : To find Sum of Characters in a given name
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "name.h"
int main()
{ 
	union my_name name;
	int s;
	 scanf("%s",&name.ch);
     s=char_sum(name);
	 printf("sum=%x\n",s);
	 
	return 0;
}
