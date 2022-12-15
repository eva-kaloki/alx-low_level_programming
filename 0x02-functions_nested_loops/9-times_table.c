  1 #include "main.h"                                                                      
  2                                                                                        
  3 /**                                                                                    
  4  * times_table -print the 9 times table                                                          
  5  * Return: 0 (Always Success)                                                                  
  6  */                                                                                    
  7                                                                                        
  8 void times_table(void)                                                                 
  9 {                                                                                      
 10         int a;                                                                         
 11         int b;                                                                         
 12         int c;                                                                         
 13                                                                                        
 14         for (b = 0; b <= 9; b++)                                                        
 15         {                                                                              
 16                 c = a * b;                                                             
 17                 if ((c / 10) == 0)                                                     
 18                 {                                                                      
 19                         if (b == 0)                                                    
 20                         {                                                              
 21                                 _putchar ('0');                                        
 22                         }                                                              
 23                         if (b != 0)                                                    
 24                         {                                                              
 25                                 _putchar(' ');                                         
 26                                 _putchar((c % 10) + '0');                            
 27                         }                                                              
 28                         if (b < 9);                                                    
 29                         {                                                              
 30                                 _putchar(',');                                         
 31                                 _putchar(' ');                                         
 32                         }                                                              
 33                 }                                                                      
 34                 else                                                                   
 35                 {                                                                      
 36                         _putchar ((c / 10) + '0');                                     
 37                         _putchar ((c % 10) + '0');                                     
 38                         if (b < 9)                                                     
 39                         {                                                              
 40                                 _putchar(',');                                         
 41                                 _putchar(' ');                                         
 42                         }                                                              
 43                 }                                                                      
 44                 _putchar ('\n');                                                       
 45 }