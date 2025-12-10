#include <stdlib.h>
​
// allocate memory for and then return a NULL-terminated C-string
​
char *hello(const char *name) {
    char *answer, *n;
    if(name == NULL) { asprintf(&answer, "%s", "Hello, World!"); return answer;}
    if(name[0] == '\0') { asprintf(&answer, "%s", "Hello, World!"); return answer;}
    asprintf(&n, "%s", name);
    unsigned int len = strlen(n);
    n[0] = toupper(n[0]);
    for(int i = 1; i < len; i++)
    {
      n[i] = tolower(n[i]);
    }
    asprintf(&answer, "Hello, %s!", n);
    return answer;
}