#include <stdio.h>
#include <math.h>
       
        int main()
        {
            long int n,i,x,root,val,flag=0;
            scanf("%ld",&n);
            for(i=1;i<=100000;i++)
            {
                val=(i*(i+1))/2;
                if(val>n/2)
                break;
                x=(n-val)*2;
                root=sqrt(x);
                if(x==(root*(root+1)))
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            printf("YES");
            else
            printf("NO");
            return 0;
        }
