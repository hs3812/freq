//
//  freq.h
//  freq_dist_count
//
//

#ifndef freq_h
#define freq_h


typedef struct freq{
    char value;
    int freq;
}charfreq;

int countfreq(char *, charfreq *);
void print_freq_table(charfreq *);
void sort_freq(charfreq *);









#endif /* freq_h */
