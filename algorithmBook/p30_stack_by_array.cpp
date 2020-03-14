// 1. make stack by array

#define ARRAY_SIZE 8
int tail = 0;
int stack[ARRAY_SIZE];

void push(int n)
{
    if(tail == ARRAY_SIZE-1)
    {
        return; //full
    }
    stack[tail] = n;
    tail++;
}

int pop()
{
    if(tail == 0 )
    {
        return -1;//empty
    }
    int r = stack[tail];
    tail--;

    return r;
}