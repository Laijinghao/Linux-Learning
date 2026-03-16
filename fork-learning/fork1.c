#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid =fork();
    if(pid==0)
    {
        printf("我是子进程，我的PID是%d\n",getpid());
    }
    else if(pid>0)
    {
        printf("我是父进程，我的PID是%d;我的子进程的PID是%d\n",getpid(),pid);
    }
    else
    {
        printf("创建进程失败\n");
    }
    return 0;
}
