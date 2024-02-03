#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char sen[100],i,j;
    char com[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    printf("Enter a word/sentence\n");
    scanf("%[^\n]s",&sen);
    printf("\n"); 
    int ch= strlen(sen);
    
    for(i=0; i<ch; i++)
        sen[i]= toupper(sen[i]);
     
    for(i=0; i<ch; i++)
    {
        int dig=26;
        for(j=0; j<26; j++)
        {
           if(com[j]==sen[i])
            {
                dig=j;
            }
           
        } 
        {if(dig==0)
        {
            printf("#########\n"); 
            printf("##     ## \n");
            printf("##     ## \n"); 
            printf("#########\n");
            printf("##     ## \n");
            printf("##     ## \n"); 
            printf("##     ## \n");
            printf("##     ## \n"); 
            printf("\n");
        }
        else if(dig==1)
        {
            printf("########\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("#########\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("########\n"); 
            printf("\n");
        }
        else if(dig==2)
        {
            printf("#########\n");
            printf("##      \n");
            printf("##      \n");
            printf("##      \n");
            printf("##      \n");
            printf("##      \n");
            printf("##      \n");
            printf("#########\n"); 
            printf("\n");
        }
        else if(dig==3)
        {
            printf("######## \n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("######## \n"); 
            printf("\n");
        }
        else if(dig==4)
        {
            printf("#########\n");
            printf("##       \n");
            printf("##       \n");
            printf("#####    \n");
            printf("##       \n");
            printf("##       \n");          
            printf("##       \n");
            printf("#########\n"); 
            printf("\n");
        }
        else if(dig==5)
        {
            printf("#########\n");
            printf("##       \n");
            printf("##       \n");
            printf("#####    \n");
            printf("##       \n");
            printf("##       \n");
            printf("##       \n");
            printf("##       \n");
            printf("\n"); 
        }
        else if(dig==6)
        {
            printf("#########\n");
            printf("##       \n");
            printf("##       \n");
            printf("##   ####\n");
            printf("##   #  #\n");
            printf("##   #  #\n");
            printf("##   #  #\n");
            printf("######  #\n");
            printf("\n");
        }
        else if(dig==7)
        {
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("#########\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("\n");
        }
        else if(dig==8)
        {
            printf("#########\n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("#########\n");
            printf("\n");
        }
         else if(dig==9)
        {
            printf("#########\n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf(" #  #    \n");
            printf(" #  #    \n");
            printf("  ###    \n");
            printf("\n");
        }
        else if(dig==10)
        {
            printf("##      #\n");
            printf("##     # \n");
            printf("##    #  \n");
            printf("#####    \n");
            printf("##    #  \n");
            printf("##     # \n");
            printf("##      #\n");
            printf("##      #\n");
            printf("\n");
        }
        else if(dig==11)
        {
            printf("##       \n");
            printf("##       \n");
            printf("##       \n");
            printf("##       \n");
            printf("##       \n");
            printf("##       \n");
            printf("##       \n");
            printf("#########\n");
            printf("\n");
        }
        else if(dig==12)
        {
            printf("#       #\n");
            printf("##     ##\n");
            printf("###   ###\n");
            printf("## # # ##\n");
            printf("##  #  ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("\n");
        }
        else if(dig==13)
        {
            printf("##      #\n");
            printf("##      #\n");
            printf("###     #\n");
            printf("##  #   #\n");
            printf("##    # #\n");
            printf("##     ##\n");
            printf("##      #\n");
            printf("##      #\n");
            printf("\n");
        }
        else if(dig==14)
        {
            printf("  #####  \n");
            printf(" #     # \n");
            printf("#       #\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("#       #\n");
            printf(" #     # \n");
            printf("  #####  \n"); 
            printf("\n");
        }
        else if(dig==15)
        {
            printf("#########\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("######## \n");
            printf("##       \n");
            printf("##       \n");
            printf("##       \n");
            printf("##       \n"); 
            printf("\n");
        }
        else if(dig==16)
        {
            printf("  #####  \n");
            printf(" #     # \n");
            printf("#       #\n");
            printf("##     ##\n");
            printf("## #   ##\n");
            printf("#    #  #\n");
            printf(" #     # \n");
            printf("  #####  #\n"); 
            printf("\n");
        }
        else if(dig==17)
        {
            printf("#########\n");
            printf("##      #\n");
            printf("##      #\n");
            printf("#########\n");
            printf("##  #    \n");
            printf("##    #  \n");
            printf("##     # \n");
            printf("##      #\n");
            printf("\n");
        }
        else if(dig==18)
        {
            printf("#########\n");
            printf("##       \n");
            printf("##       \n");
            printf("#########\n");
            printf("       ##\n");
            printf("       ##\n");
            printf("##     ##\n");
            printf("#########\n");
            printf("\n");
        }
        else if(dig==19)
        {
            printf("#########\n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("\n");
        }
        else if(dig==20)
        {
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("#########\n");
            printf("\n");
        }
        else if(dig==21)
        {
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf(" ##   ## \n");
            printf("  ## ##  \n");
            printf("   ###   \n");
            printf("\n");
        }
        else if(dig==22)
        {
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("##  #  ##\n");
            printf("## # # ##\n");
            printf("###   ###\n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("\n");
        }
        else if(dig==23)
        {
            printf("##     ##\n");
            printf(" ##   ## \n");
            printf("  ## ##  \n");
            printf("   ###   \n");
            printf("  ## ##  \n");
            printf(" ##   ## \n");
            printf("##     ##\n");
            printf("##     ##\n");
            printf("\n");
        }
        else if(dig==24)
        {
            printf("##     ##\n");
            printf(" ##   ## \n");
            printf("  ## ##  \n");
            printf("   ###   \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("    #    \n");
            printf("\n");
        }
        else if(dig==25)
        {
            printf("#########\n");
            printf("       # \n");
            printf("      #  \n");
            printf("     #   \n");
            printf("    #    \n");
            printf("   #     \n");
            printf("  #      \n");
            printf("#########\n");
            printf("\n");
        }
        else if(dig==26)
        {
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
        }
        else
        {
            printf("SYNTAX ERROR\n");
            break;
        }
        }
    }
    return 0;
}
