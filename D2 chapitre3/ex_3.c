#include <stdio.h>
#include <time.h>



int main() {
    struct tm date1 = {0};
    struct tm date2 = {0};
    double secondes;
    int m1,j1,a1,m2,j2,a2;
    



    printf("enter date 1 (mm/jj/aaaa) : ");
    scanf("%d/%d/%d",&m1,&j1,&a1);

    printf("enter date 2 (mm/jj/aaaa) : ");
    scanf("%d/%d/%d",&m2,&j2,&a2);

    date1.tm_year = a1 - 1900;
    date1.tm_mon = m1 - 1;
    date1.tm_mday = j1;

    date2.tm_year = a2 - 1900;
    date2.tm_mon = m2 - 1;
    date2.tm_mday = j2;


    time_t time1 = mktime(&date1);
    time_t time2 = mktime(&date2);

    secondes = difftime(time1, time2);


    if (secondes == 0) {
        printf("dates are equal.\n");
    } else if (secondes > 0) {
        printf("La premiere date vient apres la seconde.\n");
    } else {
        printf("La premiere date vient avant la seconde.\n");
    }

    


    return 0;
}
