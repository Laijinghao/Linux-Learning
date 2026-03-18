#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
    const char *fifo = "/tmp/myfifo";
    int fd = open(fifo,O_RDONLY);
    char buf[100];
    int n = read(fd,buf,sizeof(buf));
    printf("读端收到: %s\n",buf);
    close(fd);
    return 0;
}
