#include<stdio.h>
int main()
{
    int x, n=1, a=0, b=0, d;
    scanf("%d", &d);
    number:
        if(n<=d){
            scanf("%d", &x);
            if(x>0){
                a=a+1;
            }
            else{
                b=b+1;
            }
            n++;
            goto number;
        }
        printf("Positive number: %d\n negative number :%d", a, b);

        return 0;
        /*এখানে প্রথমে কয়টা ইনপুট নিতে চাই সেটা টাইপ করতে হবে এবং
         সেই অনুযায়ী পজিটিভ এবং নেগেটিভ নাম্বার লিখতে হবে
         তাহলে ফলাফলে শো করবে যে এখানে কয়টা পজিটিভ আছে এবং কয়টা নেগেটিভ আছে।*/
}
