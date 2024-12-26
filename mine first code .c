To find the greatest among three numbers 
#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("Enter any two numbers \n");
    scanf ("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("%d is Greatest \n",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is geratesst \n",b);
    }
    else
    {
        printf ("%d is greatest \n",c);
    }
    return 0 ;
}