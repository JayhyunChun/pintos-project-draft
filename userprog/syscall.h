#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H
#include <list.h>

void syscall_init (void);

struct file_desc {
    struct file *fileloc;
    int fd;
    struct list_elem elem;
};

struct child_desc {
    int child_pid;
    int wait_num;
    struct list_elem child_elem;
};

#endif /* userprog/syscall.h */
