        case 'w': return cb == 'e';
        default:  return 0;
    }
}
​
const char **dirReduc(const char *const array[], int length_in, int *length_out)
{
    /*
        Return a heap-allocated array of constant strings.
        Your array will be freed, but the strings will not be.
        Report the length of your array through the 'length_out' pointer.
    */
​
    if (!length_out)
    {
        return NULL;
    }
​
    const char **stack = (const char **)malloc((size_t)length_in * sizeof *stack);
    if (!stack)
    {
        *length_out = 0;
        return NULL;
    }
​
    int top = 0; 
​
    for (int i = 0; i < length_in; i++)
    {
        const char *dir = array[i];
​
        if (top > 0 && is_opposite(stack[top - 1], dir))
        {
            top--;
        }
        else
        {
            stack[top++] = dir;
        }
    }
​
    *length_out = top;
    const char **reduced = (const char **)malloc((size_t)top * sizeof *reduced);
    if (!reduced)
    {
        return stack;
    }
​
    for (int i = 0; i < top; i++)
    {
        reduced[i] = stack[i];
    }
​
    free(stack);
    return reduced;
}
​