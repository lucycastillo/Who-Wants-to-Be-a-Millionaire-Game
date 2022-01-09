/************************castilllA1.c**************
 Student Name: Luciana Castillo
Date: October 6th 
I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:.
I assert that this work is my own. I have appropriately acknowledged any and all
material that I have used, whether directly quoted or paraphrased. 
 ********************************************************/


#include <stdio.h>
#include <math.h>

int main()
{
    /*Variable declaration*/

    int birthYear;
    int luckyNumber;
    int firstDigit;
    int secondDigit;
    int thirdDigit;
    int fourthDigit;
    int randomGreeting;
    int questionTwo;
    questionTwo = 500;
    int questionThree;
    questionThree = 1000;
    int questionFour;
    questionFour = 5000;
    int questionFive;
    questionFive = 10000;
    int questionSix;
    questionSix = 50000;
    int questionSeven;
    questionSeven = 100000;
    char playerAnswer;
    char finalAnswer;


printf("Please enter your birth year (yyyy):\n");   /*Takes user input, calculates and prints luckyNumber*/
scanf("%d", &birthYear);

firstDigit = birthYear % 10;


secondDigit = (birthYear / 10) % 10;


thirdDigit = (birthYear / 100) % 10;


fourthDigit = birthYear / 1000;


luckyNumber = firstDigit + secondDigit + thirdDigit + fourthDigit; /*luckyNumber is equalt to each individual digit of input added together.*/


printf("**************************************************\nWelcome - Let's play millionEh!\nYour lucky number is %d\n***************************************************\n\n", luckyNumber);

printf("Question 1: Here is the $100 question:\nWhich of the following programming languages is taught in CIS1300 at the University of Guelph?\nA. Python\nB. Cobra\nC. C\nD. Java\n\n");

printf("Would you like to use a lifeline(50-50)?\nEnter Y or y, N or n:\n");
scanf(" %c", &playerAnswer);

switch(playerAnswer)                                 /*Switch cases for lifeline in question 1*/
{

    case 'Y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("Which of the following programming languages is taught in CIS1300 at the University of Guelph?\nB. Cobra\nC. C\n\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("Which of the following programming languages is taught in CIS1300 at the University of Guelph?\nB. Cobra\nC. C\n\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'n':
    printf("Which of the following programming languages is taught in CIS1300 at the University of Guelph?\nA. Python\nB. Cobra\nC. C\nD. Java\n\n");
    printf("Ok, please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    case 'N':
    printf("Which of the following programming languages is taught in CIS1300 at the University of Guelph?\nA. Python\nB. Cobra\nC. C\nD. Java\n\n");
    printf("Ok, please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    default:                                                /*Quits game in case of invalid input*/
        printf("Invalid input. Nice playing with you.\n");
        return 1;

}
if (finalAnswer == 'C')                                     /*Determines if player's final answer is correct.*/
    {
    randomGreeting = rand() % 7;  /*Generate random number and print random greeting*/
        if (randomGreeting == 1)
            {
            printf("Bravo!\n\n");
            }
        else if (randomGreeting == 2)
            {
            printf("Congrats!\n\n");
            }
        else if (randomGreeting == 3)
            {
            printf("Well done!\n\n");
            }
        else if(randomGreeting == 4)
            {
            printf("Very nice!\n\n");
            }
        else
            {
            printf("Proud of you!\n\n");
            }

}
else
{
    printf("Oops - that was incorrect. You won zero dollars, but it was fun playing with you. Better luck next time.\n");

    return 1;           /*Quits game if answer is incorrect*/
}



printf("\nQuestion 2: Here is the $500 question:\nWhich Canadian chain first opened in Hamilton in 1964?\nA. McDonalds\nB. Tim Hortons\nC. Wendys\nD. Mr. Sub\n\n");

printf("\nWould you like to use a lifeline(50-50)?\nEnter Y or y, N or n:\n");
scanf(" %c", &playerAnswer);

switch(playerAnswer)                                     /*Switch cases for lifeline in question 2*/
{
    case 'Y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("Which Canadian chain first opened in Hamilton in 1964?\nB. Tim Hortons\nD. Mr. Sub\n\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("Which Canadian chain first opened in Hamilton in 1964?\nB. Tim Hortons\nD. Mr. Sub\n\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'n':
    printf("Ok please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    case 'N':
    printf("Ok, please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    default:                                         /*Quits game in case of invalid input*/
        printf("Invalid input. Nice playing with you.\n");
        return 1;
}
if (finalAnswer == 'B')                         /*Determines if player's final answer is correct.*/
{
      randomGreeting = rand() % 7;
        if (randomGreeting == 1)
            {
            printf("Bravo!\n\n");
            }
        else if (randomGreeting == 2)
            {
            printf("Congrats!\n\n");
            }
        else if (randomGreeting == 3)
            {
            printf("Well done!\n\n");
            }
        else if(randomGreeting == 4)
            {
            printf("Very nice!\n\n");
            }
        else
            {
            printf("Proud of you!\n\n");
            }

}
else
{
    printf("Oops - that was incorrect. You still won %d dollars. It was fun playing with you.\n", questionTwo*1/5);

    return 1;                               /*Award money is equal to current award money(500) times 1/5 for even numbered questions*/
}


printf("Question 3: Here is the $1000 question:\nWhat is Canada's national sport?\nA. Hockey\nB. Lacrosse\nC. Hockey and Lacrosse\nD. Baseball\n\n");

printf("Would you like to use a lifeline(50-50)?\nEnter Y or y, N or n:\n");
scanf(" %c", &playerAnswer);

switch(playerAnswer)                                    /*Switch cases for lifeline in question 3*/
{
    case 'Y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("What is Canada's national sport?\nB. Lacrosse\nC. Hockey and Lacrosse\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("What is Canada's national sport?\nB. Lacrosse\nC. Hockey and Lacrosse\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'n':
    printf("Ok please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    case 'N':
    printf("Ok, please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    default:                                                /*Quits game in case of invalid input*/
        printf("Invalid input. Nice playing with you.\n");
        return 1;
}
if (finalAnswer == 'C')                                     /*Determines if player's answer is correct.*/
{
       randomGreeting = rand() % 7;
        if (randomGreeting == 1)
            {
            printf("Bravo!\n\n");
            }
        else if (randomGreeting == 2)
            {
            printf("Congrats!\n\n");
            }
        else if (randomGreeting == 3)
            {
            printf("Well done!\n\n");
            }
        else if(randomGreeting == 4)
            {
            printf("Very nice!\n\n");
            }
        else
            {
            printf("Proud of you!\n\n");
            }

}
else
{
    printf("Oops - that was incorrect. You still won %d dollars. It was fun playing with you.\n",questionThree*1/2);

    return 1;       /*Award money for question 3 is equal to current award money(1000) times 1/2 for odd numbered questions*/
}

printf("Question 4: Here is the $5000 question:\nWhich Canadian city ranks as the most educated in the country?\nA. Montreal\nB. Ottawa\nC. Vancouver\nD. Toronto\n\n");

printf("Would you like to use a lifeline(50-50)?\nEnter Y or y, N or n:\n");
scanf(" %c", &playerAnswer);

switch(playerAnswer)                                    /*Switch cases for lifeline in question 4*/
{
    case 'Y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("Which Canadian city ranks as the most educated in the country?\nB. Ottawa\nD. Toronto\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("Which Canadian city ranks as the most educated in the country?\nB. Ottawa\nD. Toronto\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'n':
    printf("Ok please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    case 'N':
    printf("Ok, please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    default:                                                /*Quits game in case of invalid input*/
        printf("Invalid input. Nice playing with you.\n");
        return 1;
}

if (finalAnswer == 'B')                                     /*Determines if player's answer is correct.*/
{
       randomGreeting = rand() % 7;
        if (randomGreeting == 1)
            {
            printf("Bravo!\n\n");
            }
        else if (randomGreeting == 2)
            {
            printf("Congrats!\n\n");
            }
        else if (randomGreeting == 3)
            {
            printf("Well done!\n\n");
            }
        else if(randomGreeting == 4)
            {
            printf("Very nice!\n\n");
            }
        else
            {
            printf("Proud of you!\n\n");
            }
}
else
    {
    printf("Oops - that was incorrect. You still won %d dollars. It was fun playing with you.\n",questionFour*1/5);
    return 1;
    }

printf("Question 5: Here is the $10 000 question:\nWhat is Canada's highest mountain?\nA. Mount Logan, Yukon\nB. Whistler Mountain, BC\nC. Mont Tremblant, Quebec\nD. Tip Top Mountain, Ontario\n\n");

printf("Would you like to use a lifeline(50-50)?\nEnter Y or y, N or n:\n");
scanf(" %c", &playerAnswer);

switch(playerAnswer)                                     /*Switch cases for lifeline in question 5*/
{
    case 'Y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("What is Canada's highest mountain?\nA. Mount Logan, Yukon\nC. Mont Tremblant, Quebec\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("What is Canada's highest mountain?\nA. Mount Logan, Yukon\nC. Mont Tremblant, Quebec\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'n':
    printf("Ok please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    case 'N':
    printf("Ok, please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    default:                                                    /*Quits game in case of invalid input*/
        printf("Invalid input. Nice playing with you.\n");
        return 1;
}

if (finalAnswer == 'A')                                         /*Determines if player's answer is correct.*/
{
       randomGreeting = rand() % 7;
        if (randomGreeting == 1)
            {
            printf("Bravo!\n\n");
            }
        else if (randomGreeting == 2)
            {
            printf("Congrats!\n\n");
            }
        else if (randomGreeting == 3)
            {
            printf("Well done!\n\n");
            }
        else if(randomGreeting == 4)
            {
            printf("Very nice!\n\n");
            }
        else
            {
            printf("Proud of you!\n\n");
            }

}
else
{
    printf("Oops - that was incorrect. You still won %d dollars. It was fun playing with you.\n",questionFive*1/2);
    return 1;
}

printf("Question 6: Here is the $50 000 question:\nWhat is the easternmost province of Canada?\nA. Ontario\nB. Prince Edward Island\nC. Newfoundland\nD. Nova Scotia\n\n");

printf("Would you like to use a lifeline(50-50)?\nEnter Y or y, N or n:\n");
scanf(" %c", &playerAnswer);

switch(playerAnswer)                      /*Switch cases for lifeline in question 6*/
{
    case 'Y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("What is the easternmost province of Canada?\nB. Prince Edward Island\nC. Newfoundland\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("What is the easternmost province of Canada?\nB. Prince Edward Island\nC. Newfoundland\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'n':
    printf("Ok please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    case 'N':
    printf("Ok, please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    default:                                                 /*Quits game in case of invalid input*/
        printf("Invalid input. Nice playing with you.\n");
        return 1;
}

if (finalAnswer == 'C')                                     /*Determines if player's answer is correct.*/
{
        randomGreeting = rand() % 7;

        if (randomGreeting == 1)
            {
            printf("Bravo!\n\n");
            }
        else if (randomGreeting == 2)
            {
            printf("Congrats!\n\n");
            }
        else if (randomGreeting == 3)
            {
            printf("Well done!\n\n");
            }
        else if(randomGreeting == 4)
            {
            printf("Very nice!\n\n");
            }
        else
            {
            printf("Proud of you!\n\n");
            }
}
else
{
    printf("Oops - that was incorrect. You still won %d dollars. It was fun playing with you. Better luck next time.\n",questionSix*1/5);
    return 1;
}

    printf("Question 7: Here is the $100 000:\nThe southernmost point of mainland Canada is called Point Pelee. Which province is it located in?\nA. Ontario\nB. Quebec\nC. Newfoundland\nD. Nova Scotia\n\n");

    printf("Would you like to use a lifeline(50-50)?\nEnter Y or y, N or n:\n");
    scanf(" %c", &playerAnswer);

switch(playerAnswer)                    /*Switch cases for lifeline in question 7*/
{
    case 'Y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("The southernmost point of mainland Canada is called Point Pelee. Which province is it located in?\nA. Ontario\nC. Newfoundland\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'y':
    printf("Ok I will eliminate two wrong answers.\n");
    printf("The southernmost point of mainland Canada is called Point Pelee. Which province is it located in?\nA. Ontario\nC. Newfoundland\n");
    printf("Please enter your FINAL answer: \n");
    scanf(" %c", &finalAnswer);
    break;

    case 'n':
    printf("Ok please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    case 'N':
    printf("Ok, please enter your FINAL answer:\n");
    scanf(" %c", &finalAnswer);
    break;

    default:                                                /*Quits game in case of invalid input*/
        printf("Invalid input. Nice playing with you.\n");
        return 1;
}

if (finalAnswer == 'A')                              /*Determines if player's answer is correct.*/
{
        randomGreeting = rand() % 7;

        if (randomGreeting == 1)
            {
            printf("Bravo!\n\n");
            }
        else if (randomGreeting == 2)
            {
            printf("Congrats!\n\n");
            }
        else if (randomGreeting == 3)
            {
            printf("Well done!\n\n");
            }
        else if(randomGreeting == 4)
            {
            printf("Very nice!\n\n");
            }
        else
            {
            printf("Proud of you!\n\n");
            }
}
else
 {
    printf("Oops - that was incorrect. You still won %d dollars. It was fun playing with you.\n",questionSeven*1/2);
    return 1;
}

return 0;
 }
