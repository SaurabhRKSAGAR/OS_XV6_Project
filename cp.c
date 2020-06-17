#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char const *argv[])
{
	int pid = atoi(argv[1]);
	int priority = atoi(argv[2]);
	if(argc < 2)
		printf(1,"Less number of arguments");
	change_priority(pid,priority);
	exit();
	return 0;
}