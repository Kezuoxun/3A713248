#include 「stdlib.h」
#include 「time.h」

int main( void ){
long i = 10000000L;
clock_t start, finish;
double duration;
/* 測量一個事件持續的時間*/
printf( "Time to do %ld empty loops is ", i );
start = clock();
while( i-- ) ;
finish = clock();
duration = (double)(finish - start) / CLOCKS_PER_SEC;
printf( "%f seconds\n", duration );
system("pause");
}
