#include<stdio.h>
int main() 
{
    int i = 0;
    while(i<=20) {
        if (i>= 10) {
            printf("The natural number is %d\n", i);
        }
        i++;
    }
}
// Alternate MEthod
// #include<stdio.h>
// int main(){
//     int a = 0;
//     while( a<21) {
//          a++;
//         while (a>=10 && a<=20) {
//         printf("The natural number is %d\n", a);
//         a++;
//         }
//     }
//     return 0;
// }