/**
 * Primitive data types
 * int	at least 2, usually 4	%d, %i
 * char	1	%c
 * float	4	%f
 * double	8	%lf
 * short int	2 usually	%hd
 * unsigned int	at least 2, usually 4	%u
 * long int	at least 4, usually 8	%ld, %li
 * long long int	at least 8	%lld, %lli
 * unsigned long int	at least 4	%lu
 * unsigned long long int	at least 8	%llu
 * signed char	1	%c
 * unsigned char	1	%c
 * long double	at least 10, usually 12 or 16	%Lf
 */

/**
 * #include <stdbool.h>  // For boolean data type (bool, true, false)
 */

/**
 * Derived data types
 * array, pointers, function
 */

/**
 * user Defined data types
 * structure, union, enum
 */

//variables

//constant 
// #include<stdio.h>
// #define MAX 100
// int main(){
//     const float PI = 3.142;
//     return 0;

// }

#include<stdio.h>
#include<stdbool.h>
int main(){
    //int
    //syntax:

    //datatype var_name = value;
        int a=10;
        printf("a=%d\n",a);
        a=20;
        printf("a=%d\n",a);
        printf("a=%d\n",a);

    //float
        float bal=25000.50;
        printf("bal=%f\n",bal);

    //char
        char c='#';
        printf("c=%c\n",c);
    
    //double
        double d=23.455555555555;
        printf("d=%lf\n",d);


    //short int
        short int si=256;//byte size difference
        printf("si=%hd\n",si);

    //unsigned int
        unsigned int ui=23;
        printf("ui=%u\n",ui);

    //long int
        long int longi=1234567;
        printf("longi=%ld\n",longi);

    //long long int
        long long int llint=9823233434;
        printf("llint=%lld\n",llint);

    //unsigned long int
        unsigned long int uli=8888888;
        printf("uli=%lu\n",uli);

    //unsigned long long int
        unsigned long long int ulli=8888888;
        printf("ulli=%llu\n",ulli);
    
    //signed char
        // similar to char
    
    //unsigned char
        unsigned char c1='^'; //for new languages
        printf("n=%c\n",c1);
    
    //long double
<<<<<<< HEAD
        long double var=3.141592653589793238L;
        printf("var=%Lf\n",var);
        long double pi = 3.141592653589793238L;
        printf("The value of pi is: %Lf\n", pi);

    //boolean datatype
        bool hasEmail=false;
        printf("hasEmail=%d\n",hasEmail);
        hasEmail=true;
        ("hasEmail=%d\n",hasEmail);
=======
        // long double var=3.141592653589793238L;
        // printf("var=%Lf\n",var);
        long double PI=3.141592653589793238L;
        printf("The value of PI is: %.18Lf\n", PI);
        /**
         * Key Observations:
         * long double Precision Issue:
         * On some systems, especially 32-bit architectures or specific compilers (e.g., GCC on Windows using MinGW), long double may not offer higher precision than double. Instead, it is internally treated as a double, leading to potential truncation or incorrect output.
         * Incorrect Formatting:
         * You are using %Lf, which is correct for long double. If the compiler doesn't properly handle long double, this will still print incorrect or truncated values.
         * Compiler or Runtime Compatibility:
         * The issue might also stem from compiler-specific handling of long double. For example, the GCC compiler on some platforms doesn't fully support long double with extended precision.
         */
>>>>>>> 5c4b08dc993345b294b77dd97581305c47dc778e
    return 0;
}