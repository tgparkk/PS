// 1. right_rotate()
void right_rotate(int arr[], int s, int t)
{
    /*
    idx 0 1 2 3 4 5 6 7
    var 1 2 3 4 5 6 7 8
    action to rotate( 2 ~ 6 )
    var 1 2 7 3 4 5 6 8
    */
    int i, last;
    last = arr[t]; //save last var

    for(i = t; i > s; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[s] = last;
}

void left_rotate(int arr[], int s,int t)
{
    int i, start;
    start = arr[t];

    for(i = s;i < t;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[t] = start;
}