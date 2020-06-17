#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char** argv){
	if(argc!=2){
		printf(2, "invalid parameters\n");
	  exit();
	}
	printf(1," Ans : %d ",getnice(atoi(argv[1])));

	exit();
}
