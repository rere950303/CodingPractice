//
//  main.c
//  57-5
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

enum DEVICE_TYPE {
    DEVICE_PCI_EX = 2,
    DEVICE_IEEE1394,
    DEVICE_USB
};

int main(int argc, const char * argv[]) {
    // insert code here...
    enum DEVICE_TYPE type;
    
    type = DEVICE_IEEE1394;
    
    printf("%d\n", type);

    return 0;
}
