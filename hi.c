
#include <stdio.h>
#include <math.h>
void main(){
	int A,B,C,D,N,T,i,r,x,y,m,maximum,minimum;
	int max(C, D);
	int min(C, D);
	scanf("%d", &A);      
	scanf("%d", &B); 
	scanf("%d", &N);
	
	for(i=1;i<=N;i++)
	{
		r=i%2;
		if(r==0)
		i++;
			printf("count %d",i,&x);

	}
	for(i=1;i<=N;i++)
	{
		r=i%2;
		if(r==1)
		i++;
			printf("count %d",i,&y);

	}
	scanf("%d", &T);  

	 if (T=0,T++);
	{
		C=A*(x^2);
		D=B*(y^2);
		maximum=max(C, D);
		minimum=min(C, D);
		m=maximum/minimum;
		printf("%d",m);

	}         			// Reading input from STDIN
	      // Writing output to STDO
}