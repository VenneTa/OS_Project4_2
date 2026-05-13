# OS_Project4_2
Project 4 for the OS course

This project made many small changes to many files in the xv6-public folder. I did not create the original xv6-public folder and will highlight the only changes I made to it.

In sysfile.c, added readcount as a global variable at the beginning.

In sysfile.c, within sys_read function, added a readcount++ to increment this always when called successfully.

In syscall.h, added a number for syscall readcount.

In syscall.c, added register for syscall readcount.

In usys.S, added the syscall readcount to list.

In user.h, added the syscall readcount to list.

In sysproc.c, added the syscall readcount to the kernell.

In readcount.c, created functionality that using global parameter readcount, returns how many times read system call has been made. Using global parameter maybe a bit iffy, but for this small project maybe acceptable now.
