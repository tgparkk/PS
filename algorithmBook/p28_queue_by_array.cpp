// 1. normal queue
#define QUEUE_SIZE 8
int queue[QUEUE_SIZE];
int head = 0;
int tail = -1;
int q_size = 0;

void enque(int n)
{
    if(q_size == QUEUE_SIZE)
    {
        return;//full
    }
    tail++; // tail = (tail+1) % QUEUE_SIZE; // circular queue    
    q_size++;
    queue[tail] = n;
}

int deque()
{
    if(q_size == 0)
    {
        return;//empty
    }
    int r = queue[head];
    
    head++;// head = (head + 1 ) % QUEUE_SIZE //circular queue
    q_size--;

    return r;
}

// 2. circular queue