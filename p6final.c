#include <stdio.h>
#include <stdlib.h>

void input(char *a, char *b);
int compare(char *a, char *b);
void output(char *a, char *b, int ans);

int main()
{
  char a[20], b[20];
  int ans;

  input(a, b);
  ans = compare(a, b);
  output(a, b, ans);

  return 0;
}

void input(char *a, char *b)
{
    printf("enter word: ");
    scanf("%s", a);

    printf("enter word: ");
    scanf("%s", b);
}




int compare(char *a, char *b)
{
    int flag=0, i=0;  

    for(i=0; a[i] && (a[i] == b[i]); i++);
        int ind_dif = a[i] - b[i] ;


    return ind_dif;
}



void output(char *a, char *b, int ans)
{
    if(ans < 0)
      printf("%s is greater than %s\n", b, a);

    else if(ans > 0)
      printf("%s is greater than %s\n", a, b);

    else
       printf("%s is equal to %s\n", b, a);
}