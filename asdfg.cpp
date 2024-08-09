#include<stdio.h>
int except(char* a)
{
     printf(a);
     return 0;
}

int main()
{
     except("777");
     printf("666\n");
     return 0;
}
