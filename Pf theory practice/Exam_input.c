#include <stdio.h>

int minutes(int start, int inpMin){
    return start - inpMin;
}
int hours(int a, int b){
    return a - b;
}

int main()
{
    int hour = 0, min = 0;
    int startHour = 0, startMin = 0;
    printf("Exam starting time(0--23 hours): ");
    scanf("%d", &startHour);
    printf("Enter starting time(0--59 min): ");
    scanf("%d", &startMin);
    printf("Enter the student arrival time(0--23 hours): ");
    scanf("%d", &hour);
    printf("Enter the student arrival time(0--59 min): ");
    scanf("%d", &min);

    int h = hours(startHour,hour);
    int m = minutes(startMin,min);

    int resultHours = hours(startHour,hour);
    int resultMin = minutes(startMin,min);

    // printf("%d:%d", resultHours, resultMin);

    if (h < 0){resultHours = -hours(startHour,hour);}
    if (m < 0){resultMin = -minutes(startMin,min);}  
    
    
    
    if (h < 0 && m < 0){
        printf("Late \n%d:%d after the exam", resultHours, resultMin);
    }
    if (h == 0){
        if (m < 0)printf("Late \n%d min after the exam", resultMin);
        else{printf("Early \n%d min before the exam", resultMin);}
    }
    if (m == 0){
        if(h < 0)printf("Late \n%d:00 hour after the exam", resultMin);
        else {printf("Early \n%d:00 hour before the exam", resultHours);}
    }
    if (h > 0 && m > 0){
        printf("Early \n%d:%d hours before the exam", resultHours, resultMin);
    }
    if (h == 0 && m > 0){
        printf("Early \n%d min before the exam", resultMin);
    }
}
