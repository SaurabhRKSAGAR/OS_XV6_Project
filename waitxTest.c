#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{

 int pid;
 int status,a=3,b=4;	
 pid = fork ();
 if (pid == 0)
   {	
   	status = 0;
   	//exec(argv[0],argv);
    //printf(1, "exec %s failed\n", argv[1]);
    }
  else
 {
    status=waitx(&a,&b);  //For how much time does parent waited
 }  
 printf(1,"-----------------------------\n");
 printf(1, "Wait Time = %d\n Run Time = %d with PID %d \n",a,b,status);  //Info about parent
 exit();
}