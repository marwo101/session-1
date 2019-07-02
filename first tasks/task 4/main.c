#include <stdio.h>
#include <stdlib.h>

int main()
{int x,z,k,j;
scanf("%i",&x);
for(int k=1;k<=x;k++){
if(k/(x/2)==1){
            printf("%i ",k);

         k=x;
        }
    printf("%i ",k);
}
for(j=(x/2)+1;j<=x;j++){
 if(j%(x-1)==0){
printf("%i ",j);

        j=x*2;
}
            printf("%i ",j);
}

    return 0;
}
