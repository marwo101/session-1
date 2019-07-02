#include <stdio.h>
#include <stdlib.h>

int main()
{int up;
printf("pleas enter your user pick\n");
scanf("%i",&up);
if(up==1){printf("machine is ON");}
 else if(up==2){printf("machine is OFF");}
 else if(up==3){printf("machine is working");}
 else if(up==4){printf("robot is working");}
 else if(up==5){printf("robot stopped");}
 else if(up==6){printf("connection error");}
 else if(up==7){printf("connection returned");}
 else if(up==8){printf("power low");}
 else if(up==9){printf("power charging");}

    return 0;
}
