#include "screen.h"
#include<stdio.h>

/*
function definition of clearScreen()
This function use VT100 escape sequence \ESC[2J to make the whole terminal screen being empty
*/
void clearScreen(void){
    printf("%c[2J",ESC);
    fflush(stdout);
}

/*
function definition of gotoxy()
This function use VT100 escape sequence \ESC[row;colH to set cursor to a specific location on the ter$
argument: row number, 1 is top row
          column number, 1 is left column
          */

void gotoxy(int row, int col){
    printf("%c[%d;%dH", ESC, row, col);
    fflush(stdout);
}

/*
function definition of setColor()
This function use VT100 escape sequence \ESC[1 to make the color
*/
void setColor(int color){
    if(color >= BLACK && color <= WHITE){
    	printf("%c[1;%dm",ESC,color);
    	fflush(stdout);
    }
}

/*
function definition of dispBar()
This function display vertical bars for the value dB, the value will be varied between 30 and 90,
so we need to render 3dB for one row,and 90dB will be displayed as bar. Moreover, each range will have the different color
*/
// we render 3dB for one row
void dispBar(int col, double dB){
	int i;
    for(i=0; i< dB/3; i++){
		gotoxy(30-i, col+1);
#ifndef UNICODE     //if unicode is not enabled
		printf("%c", '*');
#else
		if(i >17 && i<23)
            setColor(YELLOW);
        else if( i >= 23)
            setColor(RED);
        else
            setColor(WHITE);
        printf("%s",BAR);
#endif
	}	//end of for
}
