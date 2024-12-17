#include <stdio.h>
int main()
{
 int score;
 printf("Enter your score: ");
 scanf("%d", &score);
 int sum = 40 - score;
 if (score > 29)
 {
 if (score > 39)
 {
 printf("You pass\n");
 }
 else if (score >= 30 && score <= 39)
 {
 printf("You Can Test Again\n");
 printf("Got %d score to pass\n",sum);
 }
 }
 else
 {
 printf("You fail\n");
 printf("Got %d score to pass\n",sum);
 }
 return 0;
} 
