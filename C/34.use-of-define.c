#include <stdio.h>

#define start int main(){
#define pr_s(x) printf(x);
#define pr_i(x) printf("%d",x);
#define end return 0;}

#define a 12*9
#define b 3+10

start
pr_s("The output of a/b is:- ")
pr_i(a/b)
end