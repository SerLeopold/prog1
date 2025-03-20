#include <stdio.h>
#include <stdlib.h>

int sum_magassagkulonbseg(const char *num_str) {
    int sum = 0;
    for (int i = 0; num_str[i + 1] != '\0'; i++) {
        sum += abs((num_str[i] - '0') - (num_str[i + 1] - '0'));
    }
    return sum;
}

int main() {
    char num_str[] = "17976931348623159077293051907890247336179769789423065727343008115"
                     "77326758055009631327084773224075360211201138798713933576587897688"
                     "14416622492847430639474124377767893424865485276302219601246094119"
                     "45308295208500576883815068234246288147391311054082723716335051068"
                     "4586298239947245938479716304835356329624224137216";
    
    int result = sum_magassagkulonbseg(num_str);
    printf("A magasságkülönbségek összege: %d\n", result);
    
    return 0;
}
