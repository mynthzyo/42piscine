#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_print_comb2 (void)
{
    for (int a1=0;a1<=9;a1++)
    {
        for (int a2=0;a2<=8;a2++)
        {
            for (int b1=0;b1<=9;b1++)
            {
               for (int b2=0;b2<=9;b2++)
                {
                    if (a2<b2)
                    {
                         if (a1==0 && a2==0 && b1==0 && b2==1) //en el primer numero no metemos coma
                        {}
                        else    
                        {
                        write (1,",",1);
                        }
                    char sa1=a1+'0';
                    char sa2=a2+'0';
                    write (1,&sa1,1);
                    write (1,&sa2,1);
                    write (1," ",1);

                    char sb1=b1+'0';
                    char sb2=b2+'0';
                    write (1,&sb1,1);
                    write (1,&sb2,1);
                    }
                    //write (1,",",1);
                } 
            }
        }
    }
}

int main ()
{
ft_print_comb2();
return 0;
}