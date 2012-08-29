#include <sys/socket.h>
#include "syscall.h"

int getpeername(int fd, struct sockaddr *addr, socklen_t *len)
{
	return socketcall(getpeername, fd, addr, len, 0, 0, 0);
}
