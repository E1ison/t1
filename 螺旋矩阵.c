#include <stdio.h>
#define N 20
int main()
{
	int i,j,k,base,n;
	base =1;
	printf("����������Ҫ�õ����׾���:\n");
	scanf("%d",&n);	
	int a[N][N]={0};
	for(k=0;k<n/2;k++)     //n/2Ϊ����ľ�����Ŀ
	{
		for(i=k;i<=n-1-k;i++)//��һ����
			a[k][i]=base++;;
		for(j=k+1;j<n-1-k;j++)//�ڶ�����
			a[j][n-1-k]=base++;
		for(i=n-1-k;i>k;i--)//��������
			a[n-1-k][i]=base++;
		for(j=n-1-k;j>k;j--)//��������
			a[j][k]=base++;
		if(n%2==1)
			a[(n-1)/2][(n-1)/2]=base;//Ϊ�����������ľ�������ĵ���и�ֵ
	}
	//�������
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%-4d",a[i][j]);
		printf("\n");
	}
	return 0;
}  
