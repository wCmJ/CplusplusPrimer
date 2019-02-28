void* memchr(const void *dest, int c, size_t n)
{
    unsigned char *pd = (unsigned char*)dest;
    while(n--)
    {
        if(*p != (unsigned char)c)
            p++;
        else
            return p;
    }
    for(int i=0;i<n;i++)
    {
        if(*pd == (unsigned char)c)
            return pd;
    }
    return 0;
}

int memcmp(const void *sour, const void *dest, size_t n)
{
    unsigned char *ps = (unsigned char*)sour;
    unsigned char *pd = (unsigned char*)dest;
    while(n--)
    {
        if(*ps == *pd)
        {
            ps++;
            pd++;
        }
        else{
            return *ps - *pd;
            }
    }
    return 0;
}

void* memcpy(void *dest, const void *sour, size_t n)
{
    char* pd = (char*)dest;
    const char* ps = (char*)sour;
    while(n--)
    {
        *pd++ = *ps++;       
    }
    return dest;
}

void* memset(void *dest, int c, size_t n)
{
    unsigned char *pd = (char*)dest;
    while(n--)
    {
        *pd++ = (unsigned char)c;    
    }
    return dest;
}   






void* memcpy(void dest, const void *sour, size_t n)
{
    char *pd = (char*)dest;
    const char *ps = (const char*)sour;
    while(n--){
        *pd++ = *ps++;
    }
    return dest;
}
