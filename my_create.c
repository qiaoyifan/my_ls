#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
int main()
{
    int fd;

   // if((fd = open("exammle_62.c", O_CREAT|O_EXCL, S_IRUSR|S_IWUSR)) == -1)
    //对于open，当文件已存在，open调用失败
    if((fd = creat("exammle_62.c",S_IWUSR)) == -1)//对于存在的文件它将用新文件覆盖
    {
        perror("open");
       // printf("open:%s   with errno:%d\n",strerror(errno),errno);
        exit(1);
    }
    else
    {
        printf("create file success\n");    
    }

    close(fd);
    return 0;
}
