
#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2,t1,t2;
    
    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Nhap c: ");
    scanf("%d", &c);
    
    if(a==0)
    {
        printf("PT ko con trung phuogn ");
        return 0 ;
        
    }
    float delta;
    delta = b*b - 4*a*c;
    
    if(delta < 0)
    {
        printf("Pt vo nghiem thuc");
    }
    else
    {
        if(delta == 0)
        {
            t1 = (double)-b/ (2*a);
            
            if(t1 == 0)
            {
                printf("X = 0");
            }
            else
            {
                if(t1 < 0 )
                {
                    printf("Pt vo nghiem thuc");
                }
                else
                {
                    if(t1 > 0)
                    {
                        x1 = (double) sqrt(t1);
                        x2 = -(double) sqrt(t1);
                        
                        printf("%0.2f ", x1);
                        printf("%0.2f ", x2);
                    }
                }
            }
                
        }
        else
        {
          
            t1 = (double)(-b + sqrt(delta))/ (2*a);
            t2 = (double)(-b - sqrt(delta))/ (2*a);
            
            if(t1 == 0)
            {
                printf("X = 0");
            }
            else
            {
                // if( t1 < 0)
                // {
                //     printf("Pt vo nghiem thuc");
                // }
                if(t1 > 0)
                {
                    x1 = (double)(sqrt(t1));
                    printf("%0.2f ", x1);
                    
                     x2 = (double)-(sqrt(t1));
                    printf("%0.2f ", x2);
                }
            }
            
            if(t2 == 0)
            {
                printf("X = 0");
            }
            else
            {
                // if( t2 < 0)
                // {
                //     printf("Pt vo nghiem thuc");
                // }
            
                if(t2 > 0)
                {
                    x1 = (double)(sqrt(t2));
                    printf("%0.2f ", x1);
                    
                     x2 = (double)-(sqrt(t2));
                    printf("%0.2f ", x2);
                }
            }
            
            // viêt riên
            if(t1 < 0 && t2 < 0)
            {
                printf("Pt vo nghiem thuc");
            }
                    
           
        }
       
    }
    return 0;
}
