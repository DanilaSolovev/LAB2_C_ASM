//#include <stdio.h>		/* Заголовочный файл объявляет несколько целочисленных типов и макросов */
//#include <stdint.h>		/* Заголовочный файл объявляет несколько целочисленных типов и макросов */
//int32_t array_originalB [] = {2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1};
//int8_t array_originalB_asm [] = {2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1,2,-9,8,7,-2,8,0,9,5,6,5,-1};