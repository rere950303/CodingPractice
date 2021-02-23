//
//  main.c
//  48-8
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>

struct Dashboard {
    int speed;
    char fuel;
    float mileage;
    int engineTemp;
    int rpm;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Dashboard p1;
    
    p1.speed = 80;
    p1.fuel = 'F';
    p1.mileage = 5821.442871f;
    p1.engineTemp = 200;
    p1.rpm = 1830;
    
    printf("Speed: %dkm/h\n", p1.speed);
    printf("Fuel: %c\n", p1.fuel);
    printf("Mileage: %fkm\n", p1.mileage);
    printf("Engine tmep: %d℃\n", p1.engineTemp);
    printf("RPM: %d\n", p1.rpm);

    return 0;
}
