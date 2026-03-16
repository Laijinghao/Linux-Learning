#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();
    if(pid==0)
    {
        printf("子进程开始，睡2秒...\n");
        sleep(2);
        printf("子进程结束\n");
    }
    else if(pid>0)
    {
        wait(NULL);
        printf("父进程：子进程已结束\n");
    }
    return 0;
}
