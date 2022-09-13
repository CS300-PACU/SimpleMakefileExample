/**********************************************************************
 File name:  	main.c
 Author:     	Chadd Williams
 Date:       	9/11/22
 Class:      	CS300
 Assignment: 	In Class Example
 Purpose:    	Simple makefile example
 *********************************************************************/
#include <stdio.h>
#include "../include/fun.h"

/**********************************************************************
 Function:    main

 Description: Print two added ints
 
 Parameters:  None
 
 Returned:    int, exit status
 *********************************************************************/
int main()
{
  printf(" hi %d\n", add(3,7));

  return 0;
}
