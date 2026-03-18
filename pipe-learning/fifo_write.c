#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

int main()
{
    const char *fifo="/tmp/myfifo";
    mkfifo(fifo,0666);
    int fd = open(fifo,O_WRONLY);
    write(fd,"你好，管道",20);
    close(fd);
    return 0;
}

