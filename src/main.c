/*
 * main.c
 *
 *  Created on: 2021. 3. 6.
 *      Author: anton
 */


#include "main.h"



int main(void)
{
  hwInit();
  apInit();

  apMain();

  return 0;
}
