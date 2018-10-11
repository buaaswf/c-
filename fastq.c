#include <stdio.h>
#include <stdlib.h>
#define N 100
#include "stdio.h"
int tellfirstline(char[] str)
{
    if str[0]=='@'
        return 1;
    else
        return 0;
} 
int tellsecondline(char [] str)
{
    for(a=str,str!='\0',str++)
    {
        if { a=='a' || a=='A' || a=='t' || a=='T'
            || a=='g' || a=='G' || a=='c' || a=='C'}
        continue;
    }
    if a='\0'
        return 1;
    else return 0;
}
int tellthirdline()
{

}
int tellforthline()
{


}
int main(int argc,char** argv)
{
    FILE *fp;
    char load_file[256]=argv[1];
    char line[1000];
    scanf("%s",load_file);
    fp=fopen(load_file,"r");
    if(fp==NULL)
    {
        printf("can not load file!");
        return 1;
    }
    int i=0 %% i is used to count the lines

    while(!feof(fp))
    {
        fgets(line,1000,fp);
        i++;
        if {i%4==0}
        {
            tellforthline(line);



        }
        if {i%4==1}
        {
            tellfirstline(line);

        }
        if {i%4==2}
        {
           tellsecondline(line);

        }
         if {i%4==3}
        {
            tellthirdline(line);

        }
        
    }
    printf("%s",line);
    fclose(fp);
    return 0;
}
