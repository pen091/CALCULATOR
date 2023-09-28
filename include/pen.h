/* ifndef PEN_H then define PEN_H */
#ifndef PEN_H
#define PEN_H

#define RED_FG  "\e[1;31m"
#define GRN_FG  "\e[1;32m"
#define YEL_FG  "\e[1;33m"
#define NOR_FG  "\e[0m"
#define BLUE_FG "\e[1;34m"
#define CLR_TC  "\e[2j"

struct node  /* structure of node */
{
        int x; /* variable x */
        int y; /* variable y */
};

void add(void); /* addition function declaration */

void sub(void); /* suvtraction function declaration */

void mul(void); /* multiplication function declaration */

void divi(void); /* divide function declaration*/

void mod(void); /* dialog box on the screen */

void swt(void); /* switches user choice */

void clr(void);  /* clear terminal function */

void redo(void); /* redo function declaration */

void lod();

void delay(int n);

#endif /* end if macro condition */
