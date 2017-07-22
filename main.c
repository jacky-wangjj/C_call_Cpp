/*
 * This file write with C language, It will call middle layer,
 * The middle layer will call C++ function.
 * Auth: jacky-wangjj Email: iot_wangjunjie@126.com
 * Data: 1017/07/22
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "AppleWrapper.h"
 
int main()
{
	struct tagApple *pApple;

	pApple = GetInstance();
	SetColor(pApple, 1);

	int color = GetColor(pApple);
	printf("color = %d\n", color);

	ReleaseInstance(&pApple);
	assert(pApple == 0);

	return 0; 
}
