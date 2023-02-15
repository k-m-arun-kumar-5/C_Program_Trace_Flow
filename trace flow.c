#include "stdio.h"

#define TRACE_DBG_LVL1         1  /* display all trace level, to trace execution flow for debugging */
#define TRACE_DBG_LVL2         2  /* display least trace level ie from 2, to trace execution flow for debugging */
#define TRACE_OFF              0  /* disable global to trace execution flow for debugging */

int trace_flag = 2;

/* RUN TIME: Trace if enable display's data */
/* #define TRACE_DBG(trace_level, arg) {if (trace_flag >= (trace_level))   printf((arg));}

int main()
{
   int quit;
   do
   {
      printf("\n Enter trace level (1 ,2, 0): ");
      scanf("%c", &trace_flag);
      TRACE_DBG(TRACE_DBG_LVL2, ((char *)("Entered Trace level [%d]", trace_flag)));
      printf("\n 1 - Continue, 2 - Quit:  Enter: ");
      scanf("%d", &quit);
      TRACE_DBG(TRACE_DBG_LVL1,(char *)(" Quit_mode: %d", quit));
   } while(quit == 1);
   return 1;
} */


#define TRACE_DBG(trace_level, arg) {if (trace_flag >= (trace_level)) { printf("\n Trace_flag[%d], trace_level[%d] : ", trace_flag,(trace_level)); printf arg; }}

int main()
{
   int quit;
   do
   {
      printf("\n Enter trace level (1 ,2, 0): ");
      scanf("%d", &trace_flag);
      TRACE_DBG(TRACE_DBG_LVL2, ("Entered Trace level [%d]", trace_flag));
      printf("\n 1 - Continue, 2 - Quit:  Enter: ");
      scanf("%d", &quit);
      TRACE_DBG(TRACE_DBG_LVL1, ("Quit_mode: %d", quit));
   } while(quit == 1);
   return 1;
}




