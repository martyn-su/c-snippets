#include "stdio.h"

int main(){
    int inner,outer;
    for (outer = 1; outer <= 4; outer++)
    {
        for (inner = 1; inner <= 4; inner++)
        {
            printf("\t");
            printf("%d",inner);
        }
        printf("\n");
    }
    return 0;
}

/*
for (num = 20; x == 0; num++) {
    // do stuff
}

//is the same as

num = 20;
while (x == 0) {
    // do stuff, then
    num++;
}
/*
So first the condition is checked, then the loop body is executed, then the increment. So if you break; out of the loop, you'll need the correct result, since break; immediately jumps out of the loop, thus the incrementing statement isn't executed for the last time */