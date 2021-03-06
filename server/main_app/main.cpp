#include "server.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		std::cout << "Enter IP and port address! e.g. 127.0.0.1 5000" << std::endl;
		exit(1);
	}
	
    serwer serwerObject(argv[1], atoi(argv[2]));

    serwerObject.run();

    return 0;
}