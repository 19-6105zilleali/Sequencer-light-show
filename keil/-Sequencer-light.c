/* ```````````````````````````````````````````
   ` Auther Name : ZILL-E-ALI;               `
   `TITLE PROJECT: Sequencer-light-show;     `
   ` Date Created : December 25 , 2021.      `
   ````````````````````````````````````````````*/
/*-----------------------------------------------------------------------------------------------------
  | This project turns on the LEDs connected to port 1 in sequence, resulting in a chasing LED effect.|
  | The data is displayed with about 1 second delay between each output.                              |
  |                                                                                                   |
  |------------------------------------------------------------------------------------------------- */

#include <reg52.h>
/* Function to delay about a second */
void wait_a_second()
{
unsigned int x;
for(x=0;x<33000;x++);
}
/*Start of mainprogram */
main()
{
unsigned char LED=128; /*initialize to 128*/
for(;;) /*Start of loop*/
{
P1=~LED; /*Invert and output*/
LED=LED>>1; /*Shift to right*/
if(LED == 0)LED=128; /*Set to 128*/
wait_a_second(); /*Wait a second*/
}
}