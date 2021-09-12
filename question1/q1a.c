#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Min of signed char=%d\n",SCHAR_MIN);
    printf("Max of signed char=%d\n",SCHAR_MAX);
    printf("Min of signed int=%d\n",INT_MIN);
    printf("Max of signed int=%d\n",INT_MAX);
    printf("Min of signed short=%d\n",SHRT_MIN);
    printf("Max of signed short=%d\n",SHRT_MAX);
    printf("Min of signed long=%ld\n",LONG_MIN);
    printf("Max of signed long=%ld\n",LONG_MAX);

    printf("Max of unsigned char=%u\n",UCHAR_MAX);
    printf("Max of unsigned int=%u\n",UINT_MAX);
    printf("Max of unsigned long=%lu\n",ULONG_MAX);
    printf("Max of unsigned short=%u\n",USHRT_MAX);

    printf("Max of float=%g\n",FLT_MAX);
    printf("Min of float=%g\n",FLT_MIN);
    printf("Max of double=%lg\n",DBL_MAX);
    printf("Min of double=%lg\n",DBL_MIN);
    printf("Max of longdouble=%Lg\n",LDBL_MAX);
    printf("Min of longdouble=%Lg\n",LDBL_MIN);

    return 0;
}
