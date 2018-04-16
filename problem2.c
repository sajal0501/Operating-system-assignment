
#include<stdio.h>
void main()
{
int x,n,pp[10],pt[10],w[10],t[10],awt,atat,i;
printf("Enter the no of process");
scanf("%d",&n);
printf(" Enter process:time priorities \n");
for(i=0;i<n;i++)
{
printf("\n process no %d : ",i+1);
scanf("%d %d",&pt[i],&pp[i]);
pp[i]=i+1;
}
for(i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(pp[i]<pp[j])
{
x=pp[i];
pp[i]=pp[j];
pp[j]=x;
x=pt[i];
pt[i]=pt[j];
pt[j]=x;
x=pp[i];
pp[i]=pp[j];
pp[j]=x;
}
}
}
w[0]=0;
awt=0;
t[0]=pt[0];
atat=t[0];
for(i=1;i<n;i++)
{
w[i]=t[i-1];
awt+=w[i];
t[i]=w[i]+pt[i];
atat+=t[i];
}
printf("n\n job \t Burst Time \t wait time \t Turn Around Time Priority \n");
for(i=0;i<n;i++)
printf("\n %d \t\t %d \t\t %d \t\t %d \t\t %d \n",pt[i],w[i],t[i],pp[i]);
awt/=n;
atat/=n;
printf("\n Average Wait Time : %d \n",awt);
printf("\n Average Turn Around Time : %d \n",atat);
}







