void decode1(long *xp, long *yp, long *zp)
{
    long x = *xp; //r8
    long y = *yp;
    long z = *zp;
    *yp = x;
    *zp = y;
    *xp = z; 
}