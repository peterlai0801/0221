#include <stdio.h>
#include <stdlib.h>

int main()  
    {



        int hr=0,min=0;

        printf("請輸入時間(hh:mm)");
        scanf("%d:%d",&hr,&min);
        if(hr>=13&&hr<=15||hr==14&&min>=20||hr==16&&min<=40)
        {
            printf("yes");
        }
        else{
            printf("no");
        }
        scanf("%d",&hr);
        return 0;
    }