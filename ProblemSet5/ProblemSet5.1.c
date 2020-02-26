#include <stdio.h>

int main(){
    FILE *LoremIpsum;
    char abc;

    LoremIpsum = fopen("/Users/Drew/Documents/GitHub/Gillis_LMSC_261_ProblemSets/ProblemSet5/LoremIpsum.txt", "r");

    if(LoremIpsum == NULL){
        printf("LoremIpsum.txt cannot be opened\n");
        return 1;
    }

    FILE *LoremIpsumCopy;

    LoremIpsumCopy = ("LoremIpsumCopy.txt", "w");

    if(LoremIpsum == NULL){
        printf("LoremIpsumCopy.txt cannot be opened\n");
        return 1;
    }

int c;

while((c = fgetc(LoremIpsum))!= EOF) printf("%c", c);

if ((LoremIpsum = fopen("/Users/Drew/Documents/GitHub/Gillis_LMSC_261_ProblemSets/ProblemSet5/LoremIpsum.txt", "r")))
    {
        c = fgetc(LoremIpsum);
        LoremIpsumCopy = fopen("LoremIpsumCopy.txt", "w");
        while(c != EOF)
        {
            fputc(c, LoremIpsumCopy);
            c = fgetc(LoremIpsum);
        }
    }

while((c = fgetc(LoremIpsum)) != EOF){
    fputc (c, LoremIpsumCopy);
        if (c==' '){
            fputc('\n', LoremIpsumCopy);
        }
}   

if(LoremIpsum)fclose(LoremIpsum);
if(LoremIpsumCopy)fclose(LoremIpsumCopy);

return 0;
}