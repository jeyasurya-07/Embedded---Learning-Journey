#include <stdio.h>
#include <stdint.h>
#define MAX 3
typedef struct{
    uint32_t  id;
    uint32_t  value;
}sensor_t;
sensor_t s[MAX];
int main ()
{
    int i;
printf("\t\tenter the sensor data");

for(i=0;i<MAX;i++)
{
    sensor_t *ptr=&s[i];
    printf("\nEnter the sensor %d id and value:",i+1);
    scanf("%u %u",&ptr->id,&ptr->value);
}

for(i=0;i<MAX;i++)
{
    sensor_t *ptr=&s[i];
    printf("\nsensor %d : %u %u",i+1,ptr->id,ptr->value);
}


}