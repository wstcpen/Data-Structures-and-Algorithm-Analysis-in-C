#include<stdio.h>
#include<math.h>

#define FULLSCREEN
#define _N_N
/*
	Function : Draw the funtions below,
		c, logN, log2N, N, NlogN, N^2, N^3, 2^N.
*/

int N;

void
PrintDotRecursive( int n )
{
    if( n <= 0 )
    {
        printf( "." );
	    printf( "\n" );
    }
    else
    {
        printf( " " );
        n -= 1;
	    PrintDotRecursive( n );
    }
}

void
DrawBigO( void )/* [144 or 151(full screen)] */
{
    int x,y;
#ifdef FULLSCREEN
    N = 250;
#endif

    int i;
#ifdef _c
    for( i = 0; i < N; i++ )
	printf( "_" );
#endif

#ifdef _logN

#endif

#ifdef _log2N

#endif

#ifdef _N
    for( i = N; i > 0; i-- )
    {
        PrintDotRecursive( i );
    }
#endif

#ifdef _NlogN

#endif

#ifdef _N_N
    for( y = N; y > 0; y-- )/* 由纵坐标[y]确定横坐标 */
    {
        x = ( int )sqrt( y );
        PrintDotRecursive( x );
    }
#endif

#ifdef _N_N_N

#ifdef _2N

#endif

#endif

}

int
main( void )
{
    DrawBigO( );
    return 0;
}
