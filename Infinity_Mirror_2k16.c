#include <msp430g2553.h>


/*
 * main.c
 */
  main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
    P1DIR |= 0XFF;
    P2DIR |= 0xFF;
    P2SEL&=~(0xc0);
    while(1)
    {
    	int x = 0X01;
       int x1 = 0X01;
       int x2 = 0X80;
       long i=0;
       int j=1;
       int k=0;
       int l=0;
       {

          for(k=1;k<=5;k++){
           x=0x01;
           for(j=1;j<=8;j++){

           P1OUT = x;
           P2OUT = x;
           x*=2;
           for(i=0;i<=10000;i++)
           {
           }
           }
          }
              for(k=1;k<=5;k++){
               x=0x80;
               for(j=1;j<=8;j++){

               P1OUT = x;
               P2OUT = x;
               x/=2;
               for(i=0;i<=10000;i++)
               {
               }
               }
           }

              for(k=1;k<=5;k++){

               P1OUT=0xAA;
               P2OUT = 0xAA;
              for(l=0;l<=1;l++){
               for(i=0;i<=64000;i++)
               {}}
               P1OUT=0x55;
               P2OUT = 0x55;
               for(l=0;l<=1;l++){
               for(i=0;i<=64000;i++)
               {}}
              }



              for(k=1;k<=5;k++){

                       P1OUT=0x18;
                       P2OUT=0x18;

                       for(i=0;i<=20000;i++)
                       {}
                       P1OUT=0x24;
                       P2OUT=0x24;

                       for(i=0;i<=20000;i++)
                       {}
                       P1OUT=0x42;
                       P2OUT=0x42;

                       for(i=0;i<=20000;i++)
                        {}
                       P1OUT=0x81;
                       P2OUT=0x81;

                       for(i=0;i<=20000;i++)
                       {}

              }


              for(k=1;k<=5;k++){
                         x1=0x01;
                         x2=0x80;
                         for(j=1;j<=8;j++){

                         P1OUT = x1;
                         P2OUT = x2;
                         x1*=2;
                         x2/=2;
                         for(i=0;i<=10000;i++)
                         {
                         }
                         }
                        }


              for(k=1;k<=5;k++){

                       P1OUT=0x81;
                       P2OUT=0x81;
                       for(i=0;i<=20000;i++)
                       {}
                       P1OUT=0x42;
                       P2OUT=0x42;
                       for(i=0;i<=20000;i++)
                       {}
                       P1OUT=0x24;
                       P2OUT=0x24;
                       for(i=0;i<=20000;i++)
                        {}
                       P1OUT=0x18;
                       P2OUT=0x18;
                       for(i=0;i<=20000;i++)
                       {}

                     }



              for(k=1;k<=5;k++){
                                    P1OUT=0x81;
                                    P2OUT=0x18;
                                    for(i=0;i<=20000;i++)
                                    {}
                                    P1OUT=0x42;
                                    P2OUT=0x24;
                                    for(i=0;i<=20000;i++)
                                    {}
                                    P1OUT=0x24;
                                    P2OUT=0x42;
                                    for(i=0;i<=20000;i++)
                                     {}
                                    P1OUT=0x18;
                                    P2OUT=0x81;
                                    for(i=0;i<=20000;i++)
                                    {}

                                  }


       }
          }
      }

	//return 0;

