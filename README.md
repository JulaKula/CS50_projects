# CS50_projects
Projects from CS50 course on edx.com

### Problem Set 1

##### Credit - Problem description:
In credit.c, write a program that prompts the user for a credit card number and then reports (via printf) whether it is a valid American Express, MasterCard, or Visa card number, per the definitions of each’s format herein. For simplicity, you may assume that the user’s input will be entirely numeric (i.e., devoid of hyphens, as might be printed on an actual card). But do not assume that the user’s input will fit in an int! Best to use get_long from CS50’s library to get users’ input.

##### Cash - Problem description:
Implement, in cash.c, a program that first asks the user how much change is owed and then prints the minimum number of coins with which that change can be made.
Use get_float to get the user’s input and printf to output your answer. Assume that the only coins available are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢). You need not try to check whether a user’s input is too large to fit in a float. If the user fails to provide a non-negative value, your program should re-prompt the user for a valid amount again and again until the user complies.

##### Mario - Problem description:
Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per the below. Let’s recreate those pyramids in C, albeit in text, using hashes (#) for bricks, a la the below. Let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

```
   #  #
  ##  ##
 ###  ###
####  ####
```
