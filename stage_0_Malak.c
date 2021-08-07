#include <stdio.h>
#include <string.h>
//creating hamming distance function
int hammingDistance(char string1[], char string2[])
{
    int i = 0, count = 0;
    while(string1[i]!='\0')
    {
        if (string1[i] != string2[i])
            count++;
        i++;
    }
    return count;
}
int main(void) {

char Name[]="Malak Mohamed Soliman ";
char Email[]="M.abdelmonsef@nu.edu.eg";
char Slack_userName[]="@Malak";
char biostack[]= "Genomics";
char Twitter_Handel[]="@Malak";
//Calling the function
int hammingDist();
printf("Name:%s\n",Name);
printf("E-mail:%s\n",Email);
printf("Slack_userName:%s\n",Slack_userName);
printf("biostack:%s\n",biostack);
printf("Twitter_Handel:%s\n",Twitter_Handel);
//function printing
printf("hammingDistance:%d",hammingDistance(&Slack_userName,
&Twitter_Handel));

    return 0;
}
