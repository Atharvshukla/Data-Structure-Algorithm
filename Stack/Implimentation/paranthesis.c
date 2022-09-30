#include <stdio.h>
#include <stdlib.h>
struct expression {
    int top;
    int size;
    char *s;
};
// isBalanced(char *exp){
//     for(int i);
// }
int main(){
    char *exp='((a+b)-(a-b))';
    printf("%d",isBalanced(exp));
    return 0;
}