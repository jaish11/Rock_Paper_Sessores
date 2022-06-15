//solution exersige 9 tutorial 51
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int greater(char char1,char char2)
{
    if (char1==char2)
    {
        return -1;
    }
    else if ((char1=='r')&&(char2=='s'))
    {
        return 1;
    }
    else if ((char2=='r')&&(char1=='s'))
    {
        return 0;
    }
    else if ((char1=='p')&&(char2=='r'))
    {
        return 1;
    }    
     else if ((char2=='p')&&(char1=='r'))
    {
        return 0;
    }  
     else if ((char1=='s')&&(char2=='p'))
    {
        return 1;
    }  
     else if ((char2=='s')&&(char1=='p'))
    {
        return 0;
    }        
}
int main()
{
    int playerscore=0,compscore=0,temp;
    char playerchar,compchar;
    char dict[]={'r','p','s'};
    printf("Welcome to the rock paper scissors \n");
    for (int i = 0; i < 3; i++)
    {
        printf("player 1 turn:\n");
        printf("Choose 1 for rock,2 for paper ,and 3 for scissors\n");
        scanf("%d",&temp);
        getchar();
        playerchar=dict[temp-1];
        printf("You chose %c\n",playerchar);
        printf("Computer turn:\n");
        printf("Choose 1 for rock,2 for paper, 3 for scissors\n");
        temp=generaterandomnumber(3)+1;
        compchar=dict[temp-1];
       printf("cpu chose %c\n",compchar);
       if (greater(compchar,playerchar)==1)
       {
           compscore +=1;
           printf("CPU got it!\n");
       }
       else if (greater(compchar,playerchar)==-1)
       {
           compscore+=1;
           playerscore+=1;
           printf("Its a draw!\n");
       }
       else
       {
           playerscore+=1;
           printf("You got it!\n");
       }
       printf("you:%d\n cpu:%d\n",playerscore,compscore);      
    }
    if (playerscore>compscore)
    {
        printf("You win the game\n");
    }
    else if (playerscore<compscore)
    {
        printf("cpu win the game\n");
    }
    else
    {
        printf("It is a draw\n");
    }
    return 0;   
}