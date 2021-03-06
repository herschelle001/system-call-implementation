/* Name: Herschelle Gupta
   Roll_Number: 2019045 */

#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <pwd.h>
#include <sys/dir.h>
#include <errno.h>
#include <sys/stat.h>

extern int errno;

int main() {

    int pid;
    char *fileName = (char*) malloc(sizeof(char));
    printf("Enter pid of process: ");
    scanf("%d", &pid);
    printf("Enter file name: ");
    scanf("%s", fileName);
    long int return_value = syscall(548, pid, fileName);
    if(return_value < 0) {
        printf("%s\n", strerror(errno));
    }
    printf("Syscall returned = %ld\n", return_value);

    return 0;
}
