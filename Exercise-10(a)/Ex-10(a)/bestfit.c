#include<stdio.h
#include<string.h>
void bestFit(int blockSize[], int m, int processSize[], int n)
{
Stores block id of the block allocated to a //process int allocation[n];
Initially no block is assigned to any process memset(allocation, -1, sizeof(allocation));
pick each process and find suitable blocks according to its size ad assign to it
(int i=0; i<n; i++)
//Find the best fit block for current process int bestIdx=-1;
for (int j=0; j<m; j++)
if (blockSize[j]>= processSize[i])
if (bestidx=-1) bestidx = j;
else if (blockSize[bestIdx] > blockSize[j]) bestldx ja
// If we could find a block for current process if (bestIdx !=-1)
// allocate block j to p[i] process allocation[i] = bestidx;
//Reduce available memory in this block. blockSize[bestIdx] processSize[i];
printf("\nProcess No. Process Size tBlock no. \n"); for (int i = 0; i < n; i++)
1//cout << "<<i+1 << "\t\t" << processSize[i] <<< "\t\t"; printf("%d\ %d",i+1 processSize[i]);
if (allocation[i] !=-1)
printf("\t\t%d",allocation[i] + 1);
else printf("\n Not Allocated");
printf("a");
}
int main()
{
int blockSize[] = [100, 500, 200, 300, 600);
int processSize[](212, 417, 112, 426);
sizeof(blockSize)/sizeof(blockSize[0]);
= sizeof(processSize)/sizeof(processSize[0]);
bestFit(blockSize, m, processSize, n);
return 0;
}
