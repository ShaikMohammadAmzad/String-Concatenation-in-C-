#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50]="I am a Student";
	char s2[20]=" at LPU";
	int n=3;
	strncat(s1,s2,n);
	printf("%s",s1);
	
	return 0;
}
