#include <stdio.h>
#include <math.h>

int main()
{
	float x,y,z;

	FILE *fp=NULL;
	FILE *fp1=NULL;
	fp=fopen("data1.txt","w");	//open file handle in write mode
	fp1=fopen("data2.txt","w");	//open file handle in write mode

	for(x=0;x<=6;x+=0.1)
	{
	y=sin(x);
	z=cos(x);

	fprintf(fp, "%f \t %f  \n",x,y);	//print line to the file
	fprintf(fp1, "%f \t %f \n",x,z);
	}
	fclose(fp);				//close the file handle
	fclose(fp1);				//close the file handle
}
