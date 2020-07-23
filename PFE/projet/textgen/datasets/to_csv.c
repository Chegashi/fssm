#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    printf("\"cle\",\"summery\"\n");
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read,m;
    int co=0;
    fp = fopen("bio_desing_n.txt", "r");
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                for ( int k = 0; k < 10; k++){
                    for (int l = 0; l < 10; l++){
                        read = getline(&line, &len, fp);
                        m=0;
                       // printf("\"%d\",",co++);
                        putchar(34);
                        putchar('c');putchar('h');
                        putchar('0'+i);putchar('0'+j);putchar('0'+k);putchar('0'+l);
                        putchar(34);
                        putchar(',');
                        putchar(34);
                        while (line[m] != '\0')
                            if (line[m] != '\n')
                                putchar(line[m++]);
                            else
                            {
                                line[m++]='\0';
                            }
                            
                        putchar(34);
                            putchar('\n');
                        // putchar('\n');
                        // puts(line);
                        if(l==3 && k==1 && j== 1 && i ==1)
                        {
                            printf("\0");
                            fclose(fp);
                            exit(EXIT_SUCCESS);
                        }

                    }
                }
            }    
            
        }
    


    exit(EXIT_SUCCESS);
    return 0;
}