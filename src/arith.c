/* including all needed header file */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/pen.h"
#include <string.h>

void clr() /* clear screen */
{
        system("clear");
}

/* mod function definition */
void mod(void)
{
        /* Fancy calculator dialog box */
        printf("\t\t\t%s*********************%s\n", GRN_FG, NOR_FG);
        printf("\t\t\t%s*********************%s\n", GRN_FG, NOR_FG);
        printf("\t\t\t%s***               ***%s\n", GRN_FG, YEL_FG);
        printf("\t\t\t%s***   [ 1 ] ADD   ***%s\n", GRN_FG, NOR_FG);
        printf("\t\t\t%s***   [ 2 ] SUB   ***%s\n", GRN_FG, NOR_FG);
        printf("\t\t\t%s***   [ 3 ] MUl   ***%s\n", GRN_FG, NOR_FG);
        printf("\t\t\t%s***   [ 4 ] DIV   ***%s\n", GRN_FG, NOR_FG);
        printf("\t\t\t%s***   [ 0 ] EXIT  ***%s\n", GRN_FG, NOR_FG);
        printf("\t\t\t%s***               ***%s\n", GRN_FG, NOR_FG);
        printf("\t\t\t%s*********************%s\n", GRN_FG, NOR_FG);
        printf("\t\t\t%s*********************%s\n", GRN_FG, NOR_FG);
        printf("\n");
        printf("\t\t\t\t\t%sAUTHOR      : PRINCE EKENE NDIOZIRI%s\n", RED_FG, NOR_FG);
        printf("\t\t\t\t\t%sCOUNTRY     : NIGERIA%s\n", RED_FG, NOR_FG);
        printf("\t\t\t\t\t%sLICENCE     : GPL LICENCE%s\n", RED_FG, NOR_FG);
        printf("\t\t\t\t\t%sWHATSAPP NO : +234 9132165565%s\n", RED_FG, NOR_FG);
        printf("\t\t\t\t\t%sYT CHANNEL  : https://youtube.com/@princeekene2484%s\n", RED_FG, NOR_FG);
}

/* swt function definition */
void swt(void)
{
        int choice; /* variable of choice */

        printf("%sEnter you choice mode :%s  ", YEL_FG, NOR_FG); /* printf guide line */
        scanf("%d", &choice);           /* get choice */

        switch(choice)  /* switch into choice mode */
        {
                case 1 : add(); break; /* choice 1 mode */
                case 2 : sub(); break; /* choice 2 mode */
                case 3 : mul(); break; /* choice 3 mode */
                case 4 : divi(); break; /* choice 4 mode */
                case 0 : exit(EXIT_SUCCESS);    /* exit program */
                default : exit(1); /* redo for wrong typing */
        }
}

/* add function definition */
void add()
{
        struct node *tmp;  /* temporary struct */
        int sum, num1, num2;      /* variable */

        tmp=(struct node *)malloc(sizeof(struct node));

        write(1, "\033[1;32mstarting addition mode\033[0m\n", 35); /* setting mode */
        lod(); /* loading add setup */

        write(1, "\n\t\033[1;32mdone\033[0m\n\n", 20); /* done */

        printf("%sinput first number :%s  ", BLUE_FG, NOR_FG);  /* scaning first input  */
        scanf("%d", &num1);           /* into tmp.x struct variable */
        tmp->x=num1;

        printf("\n%sinput second number :%s  ", BLUE_FG, NOR_FG); /* scanning second input */
        scanf("%d", &num2);  /* into tmp.y struct variable */
        tmp->y=num2;

        sum=(tmp->x + tmp->y);  /* addition of tmp variables */
        printf("sum = %d \n\n", sum); /* print to screen result */
        free(tmp);
}

/* sub function definition */
void sub()
{
        struct node *tmp; /* temporary struct */
        int subtractend, num1, num2; /* variable */

        tmp=(struct node *)malloc(sizeof(struct node));

        write(1, "\033[1;32mstarting subtraction mode\033[0m\n", 38); /* setting mode */
        lod(); /* loading sub setup */

        write(1, "\n\t\033[1;32mdone\033[0m\n\n", 20); /* done */

        printf("%sinput first number :%s  ", BLUE_FG, NOR_FG); /* scanning first input */
        scanf("%d", &num1);          /* into tmp.x variable */
        tmp->x=num1;

        printf("%sinput second number :%s  ", BLUE_FG, NOR_FG); /* scanning second input */
        scanf("%d", &num2);          /* into tmp.y variable */
        tmp->y=num2;

        subtractend=(tmp->x - tmp->y); /* subtracting tmp variables */
        printf("subtractend = %d \n\n", subtractend); /* print to screen result */
        free(tmp);
}

/* mul function definition */
void mul()
{
        struct node *tmp; /* temporary struct */
        int product, num1, num2; /* variable */

        tmp=(struct node *)malloc(sizeof(struct node));

        write(1, "\033[1;32mstarting multiplication mode\033[0m\n", 41); /* setting mode */
        lod(); /* loading mul setup */

        write(1, "\n\t\033[1;32mdone\033[0m\n\n", 20); /* done */

        printf("%sinput first number :%s  ", BLUE_FG, NOR_FG); /* scanning first input */
        scanf("%d", &num1);          /* into tmp.x variable */
        tmp->x=num1;

        printf("%sinput second number :%s  ", BLUE_FG, NOR_FG); /* scanning second input */
        scanf("%d", &num2);          /* into tmp.y variable */
        tmp->y=num2;

        product=(tmp->x * tmp->y); /* multipling tmp variables */
        printf("product = %d \n\n", product); /* print to screen result */
        free(tmp);
}

/* div function definition */
void divi()
{
        struct node *tmp;/* temporary struct */
        int quotient, reminder, num1, num2; /* variable */

        tmp=(struct node *)malloc(sizeof(struct node));

        write(1, "\033[1;32mstarting division mode\033[0m\n", 35); /* setting mode */
        lod(); /* loading div setup */

        write(1, "\n\t\033[1;32mdone\033[0m\n\n", 20); /* done */

        printf("%sinput first number :%s  ", BLUE_FG, NOR_FG); /* scanning first input */
        scanf("%d", &num1);          /* into tmp.x variable */
        tmp->x=num1;

        printf("%sinput second number :%s  ", BLUE_FG, NOR_FG); /* scanning second input */
        scanf("%d", &num2);     /* into tmp.y variable */
        tmp->y=num2;

        quotient=(tmp->x / tmp->y); /* dividing tmp variables, get quotient */
        reminder=(tmp->x % tmp->y); /* dividing tmp variable, get reminder */

        printf("quotient = %d \n", quotient); /* print out quotient */
        printf("reminder = %d \n", reminder); /* print out reminder */
        free(tmp);
}

void redo(void)
{
        char ch[2]; /* variable ch, char is 8bits = 1byte */
        int i,j;

        printf("\n");
        //write(1, "do you want to continue, press [y] for yes or [n] for no :  ", 50);
        //read(0, ch, 2);

        for(i=0; i<1024; i++)
        {
                for(j=0; j<i; j++)
                {
                        write(1, "\033[1;31m do you want to continue, press [y] for YES or [n] for NO :\033[0m  ", 70);
                        read(0, ch, 2);
                        if(ch[0] == 'y' || ch[0] == 'Y')
                        {
                                clr();
                                mod();
                                swt();
                        }
                        else if(ch[0] == 'n' || ch[0] == 'N')
                        {
                                write(1, "thank you for using terminal calculator\nbye bye\n", 49);
                                exit(0);
                        }
                }
        }

}

void lod(void)
{
        int count, n, i; /* integer variable */

        char c[]="***";
        n=5;
        write(1, "lodding  ", 10);

        for(count=0; count < n-1; count++)
        {
                write(1, &c[count], 3);
                for(i=0; i<1000000000; i++)
                        ;;
        }
}
