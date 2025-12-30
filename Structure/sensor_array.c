#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#define MAX 3

typedef struct{
    uint32_t  id;
    uint32_t  value;
}sensor_t;

sensor_t s[MAX];
int main ()
{
    int i;
printf("\n\tEenter the sensor data");

for(i=0;i<MAX;i++)
{
    sensor_t *ptr=&s[i];
    printf("\nEnter the sensor %d id and value:",i+1);
    if(scanf("%" SCNu32 " %" SCNu32 ,&ptr->id,&ptr->value)!=2)
{
    printf("\nInvalid input");
    return 0;
}
}

for(i=0;i<MAX;i++)
{
    sensor_t *ptr=&s[i];
    printf("\nsensor %d :%" PRIu32 " %" PRIu32,i+1,ptr->id,ptr->value);
}




    return 0;
}   