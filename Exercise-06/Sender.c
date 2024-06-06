//sender.c
#include &lt;sys/types.h&gt;
#include &lt;sys/ipc.h&gt;
#include &lt;sys/shm.h&gt;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;unistd.h&gt;
#define SharedMemSize 50
void main()
{
char c;
int shmid;
key_t key;

30

char *shared_memory;

key = 5677;
//Create segment with the key specified
if ((shmid = shmget(key, SharedMemSize, IPC_CREAT |
0666)) &lt; 0)
{
//perror explains error code
perror(&quot;shmget&quot;);
exit(1);
}
//Attach the segment

if((shared_memory= shmat(shmid, NULL, 0)) == (char *) -1)
{
perror(&quot;shmat&quot;);
exit(1);
}
sprintf(shared_memory,&quot; Welcome to Shared Memory&quot;);
sleep(2);
exit(0);
}
