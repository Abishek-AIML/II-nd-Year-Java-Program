#include <string.h>

char* maximumTime(char* time) {
    static char ans[6];
    strcpy(ans, time);
    if (time[0] == '?')
        ans[0] = (time[1] == '?' || time[1] < '4') ? '2' : '1';
    if (time[1] == '?')
        ans[1] = ans[0] == '2' ? '3' : '9';
    if (time[3] == '?')
        ans[3] = '5';
    if (time[4] == '?')
        ans[4] = '9';s
    return ans;
}
