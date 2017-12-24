#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    time_t rawtime;
    struct tm*timeinfo;
    int i,r;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    char t[100]="";
    strcat(t,asctime(timeinfo));
    r=t[0]+t[1]+t[2]+t[4]+t[5]+t[6]+t[8]+t[9]+t[11]+t[12]+t[14]+t[15]+t[17]+t[18];
    int rr=abs(r-990);
    rr= (rr>=10)?(rr-10):rr;
    printf("Random No Between 0 to 9 : %d \n",rr);
}

