#include<stdio.h>
#include<string.h>
int main()
{
    char S[101];
    scanf("%s",S);
    
    int size=strlen(S);
    int ans=0;
    for(int i=0;i<size;i++)
    {
        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')
        {
            ans++;
        }
    }
    printf("%d",ans);
}