#include <stdio.h>
#include <string.h>

int main() {
char Name[]="Malak Mohamed Soliman ";
char Email[]="M.abdelmonsef@nu.edu.eg";
char Slack_userName[]="@Malak";
char biostack[]= "Genomics";
char Twitter_Handel[]="@Malak";
//create Hamming distance Function
int i;
int count;
char str1[30];
char str2[30];
int hammingDist()
{
    i = 0;
    count = 0;
 
    while(i < strlen(str1))
    {
        if(str1[i] != str2[i]){
            count += 1;
        i += 1;
    return count;
            
        }
    }
}

printf("Name:%s\n",Name);
printf("E-mail:%s\n",Email);
printf("Slack_userName:%s\n",Slack_userName);
printf("biostack:%s\n",biostack);
printf("Twitter_Handel:%s\n",Twitter_Handel);
//function call
printf("hammingDistance:%d",hammingDist(Slack_userName, Twitter_Handel));
    
    return 0;
}
