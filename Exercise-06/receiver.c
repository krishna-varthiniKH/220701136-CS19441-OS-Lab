//receiver.c
#include &lt;sys/types.h&gt;
#include &lt;sys/ipc.h&gt;
#include &lt;sys/shm.h&gt;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#define SharedMemSize 50
void main()
{
int shmid;
key_t key;
char *shared_memory;
key = 5677;
if ((shmid = shmget(key, SharedMemSize, 0666)) &lt; 0)
{
perror(&quot;shmget&quot;);
exit(1);

31

}
//Attach the segment to our data space

if((shared_memory = shmat(shmid, NULL, 0))==(char *) -1)
{
perror(&quot;shmat&quot;);
exit(1);
}
//Read the message sender sent to the shared memory
printf(&quot;Message Received: %s \n&quot;,shared_memory);
exit(0);
}
