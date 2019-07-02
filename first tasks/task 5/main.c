#include <stdio.h>
#include <stdlib.h>
const char * myFunction(){return "machine is on";}
const char * myFunction1(){return "machine is off";}
const char * myFunction2(){return "machine is working";}
const char * myFunction3(){return "robot is working";}
const char * myFunction4(){return "robot stopped";}
const char * myFunction5(){return "connection error";}
const char * myFunction6(){return "connection returned";}
const char * myFunction7(){return "power is low";}
const char * myFunction8(){return "power charging";}
int main()
{int up;
scanf("%i",&up);
if(up==1){
 const char* szSomeString = myFunction();
    printf("%s", szSomeString);
}
  else if(up==2){
     const char* szSomeString = myFunction1();
    printf("%s", szSomeString);
  }
   else if(up==3){
     const char* szSomeString = myFunction2();
    printf("%s", szSomeString);
  }
   else if(up==4){
     const char* szSomeString = myFunction3();
    printf("%s", szSomeString);
  }
   else if(up==5){
     const char* szSomeString = myFunction4();
    printf("%s", szSomeString);
  }
   else if(up==6){
     const char* szSomeString = myFunction5();
    printf("%s", szSomeString);
  }
   else if(up==7){
     const char* szSomeString = myFunction6();
    printf("%s", szSomeString);
  }
   else if(up==8){
     const char* szSomeString = myFunction7();
    printf("%s", szSomeString);
  }
   else if(up==9){
     const char* szSomeString = myFunction8();
    printf("%s", szSomeString);
  }

    return 0;
}
