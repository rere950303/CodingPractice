//
//  main.c
//  72-5
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
struct Point2D {
    float x;
    float y;
};

struct RectangleFileFormat {
    short magic;
    int version;
    struct Point2D p1;
    struct Point2D p2;
    char desc[30];
};
#pragma pack(pop)

int main(int argc, const char * argv[]) {
    // insert code here...
    struct RectangleFileFormat rf;
    
    FILE *fp = fopen("rect.bin", "rb");
    fread(&rf, sizeof(rf), 1, fp);
    
    printf("%d %d %f %f %f %f %s\n", rf.magic, rf.version, rf.p1.x, rf.p1.y, rf.p2.x, rf.p2.y, rf.desc);
    
    fclose(fp);

    return 0;
}
