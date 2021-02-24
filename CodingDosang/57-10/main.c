//
//  main.c
//  57-10
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

typedef enum _INTERFACE_TYPE {
    InterfaceTypeUnderfined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPIABus,
    PNPBus,
    MaximumInterfaceType
} INTERFACE_TYPE, *PINTERFACE_TYPE;

int main(int argc, const char * argv[]) {
    // insert code here...
    for(INTERFACE_TYPE i = Internal; i < MaximumInterfaceType; i++)
    {
        printf("%d ", i);
    }
    
    return 0;
}
