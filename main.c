//
//  main.c
//  freq_dist_count
//
//

#include <stdio.h>
#include "freq.h"
#include <stdlib.h>
#include <string.h>
#define NUM 26

int countfreq(char *filename, charfreq *freq){
    FILE *fp = fopen(filename, "r");
    
    int count = 0;
    
    if (!fp) {
        perror("");
        return EXIT_FAILURE;
    }
    
    while (!feof(fp)) {
        int tchar = fgetc(fp);
        if (tchar != EOF) {
            count++;
            freq[tchar].value = tchar;
            freq[tchar].freq++;
        }
    }
    fclose(fp);
    return count;
}
static int compare_f(const void * ptr1, const void *ptr2){
    const charfreq *pp1 = (const charfreq *) ptr1;
    const charfreq *pp2 = (const charfreq *) ptr2;
    const int in1 = pp1->freq;
    const int in2 = pp2->freq;
    return (in1-in2);
}

void sort_freq(charfreq *ptr){
    qsort(ptr, NUM, sizeof(charfreq), compare_f);
}


void print_freq_table(charfreq * ptr){
    int ind;
    for (ind=0; ind<NUM; ind++) {
        printf("%d %d\n",ptr[ind].value,ptr[ind].freq);
        
    }
    
    printf("<><><><><><><><><><><><><><><><><><><>\n");
}







int main(int argc, const char * argv[]) {

    
    
    
    return 0;
}
