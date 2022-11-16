#include <stdio.h>

int main()
{
    int ant, suc, num; 
    
    printf ("digite um numero qualquer"); 
    scanf ("%d",&num); 
    
    ant=num-1;
    suc=num+1; 
    
    printf ("\n o antecessor eh: %d", ant); 
    printf ("\n o sucessor he: %d", suc);

    return 0;
}
