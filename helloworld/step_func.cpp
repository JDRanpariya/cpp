#include <cstdio>


int stepfunc(int x) {

    int result = 0;

    if (x == 0) result = 0;
    else if (x<0) result = -1;
    else if (x>0) result = 1;
    
    return result;
}


int main() {
    int r = stepfunc(37);
    printf("%d", r);
}
