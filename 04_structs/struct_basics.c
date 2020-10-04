#include <stdio.h>

typedef struct
    {
        char * name;
        int code;
        int credits;
    } Course;

int main(int argc, char const *argv[])
{

    
    char cpen_211_name[] = "CPEN 211 MICROCONTROLLERS";
    Course cpen_211 = {cpen_211_name, 211, 5};
    

    printf("%d Bytes\n", sizeof(cpen_211));
    printf("%s\n", cpen_211.name);
    printf("%d\n", cpen_211.code);
    printf("%d\n", cpen_211.credits);
    
    return 0;
}
