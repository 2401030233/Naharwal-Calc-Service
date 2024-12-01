# include <stdio.h>
# include <math.h>
int main()
{
    float a, b, num, angle_rad, angle_deg, angle_grade, power, r, a1, b1, c1;
    double val, c, d, DS;
    int ch, num1, num2;
    printf("===========Welcome to Naharwal Caculator(Adv.)\n\n           Made by Rishabh Naharwal===========\n\n\n");
    while(1)
    {
        printf("==============================================================\n");
        printf("\n1.sum\t\t2.sub\t\t3.mul\t\t4.div\n5.sqrt\t\t6.cbrt\t\t7.sq\t\t8.cube\n");
        printf("9.sin\t\t10.cos\t\t11.tan\t\t12.cosec\n13.sec\t\t14.cot\t\t15.invrs\t16.ln\n");
        printf("17.log10\t18.exponent\t19.exp(e^x)\t20.factorial\n21.asin\t\t22.acos\t\t23.atan\t\t24.deg->rad\n");
        printf("25.rad->deg\t26.deg->grade\t27.grade->deg\t28.grade->rad\n29.rad->grade\t30.Gamma func.\t31.Quad.Solver\t32.Mean\n33.EXIT..\n");
        printf("\ninput ch\n");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            printf("input 2 num\n");
            scanf("%f %f", &a, &b);
            printf("\nrslt=%f\n", a+b);
            break;
        case 2:
            printf("input 2 num\n");
            scanf("%f %f", &a, &b);
            printf("\nrslt=%f\n", a-b);
            break;
        case 3:
            printf("input 2 num\n");
            scanf("%f %f", &a, &b);
            printf("\nrslt=%f\n", a*b);
            break;
        case 4:
            printf("input 2 num\n");
            scanf("%f %f", &a, &b);
            if (b!=0) printf("\nrslt=%f\n", a/b);
            else printf("Math ERROR\n");
            break;
        case 5:
            printf("input num\n");
            scanf("%f", &num);
            if (num>=0) printf("\nrslt=%f\n", sqrt(num));
            else printf("Math ERROR\n");
            break;
        case 6:
            printf("input num\n");
            scanf("%f", &num);
            printf("\nrslt=%f\n", cbrt(num));
            break;
        case 7:
            printf("input num\n");
            scanf("%f", &num);
            printf("\nrslt=%f\n", (float) pow(num, 2));
            break;
        case 8:
            printf("input num\n");
            scanf("%f", &num);
            printf("\nrslt=%f\n", (float) pow(num, 3));
            break;
        case 9:
            printf("input angle in deg\n");
            scanf("%f", &angle_deg);
            angle_rad=angle_deg*(M_PI/180);
            printf("\nApprox. rslt=%.2f\nPrecise rslt=%f\n", sin(angle_rad), sin(angle_rad));
            break;
        case 10:
            printf("input angle in deg\n");
            scanf("%f", &angle_deg);
            angle_rad=angle_deg*(M_PI/180);
            printf("\nApprox. rslt=%.2f\nPrecise rslt=%f\n", cos(angle_rad), cos(angle_rad));
            break;
        case 11:
            printf("input angle in deg\n");
            scanf("%f", &angle_deg);
            if (angle_deg==90)
            {
                printf("\nrslt->Infinity\n");
            }
            else
            {
                angle_rad=angle_deg*(M_PI/180);
                printf("\nApprox. rslt=%.2f\nPrecise rslt=%f\n", tan(angle_rad), tan(angle_rad));
            }
            break;
        case 12:
            printf("input angle in deg\n");
            scanf("%f", &angle_deg);
            angle_rad=angle_deg*(M_PI/180);
            if (sin(angle_rad)!=0)
            {
                printf("\nApprox. rslt=%.2f\nPrecise rslt=%f\n", 1/sin(angle_rad), 1/(sin(angle_rad)));
            }
            else printf("\nrslt->Infinity\n");
            break;
        case 13:
            printf("input angle in deg\n");
            scanf("%f", &angle_deg);
            angle_rad=angle_deg*(M_PI/180);
            if (cos(angle_rad)!=0)
            {
                printf("\nApprox. rslt=%.2f\nPrecise rslt=%f\n", 1/cos(angle_rad), 1/(cos(angle_rad)));
            }
            else printf("\nrslt->Infinity\n");
            break;
        case 14:
            printf("input angle in deg\n");
            scanf("%f", &angle_deg);
            angle_rad=angle_deg*(M_PI/180);
            if (tan(angle_rad)!=0)
            {
                printf("\nApprox. rslt=%.2f\nPrecise rslt=%f\n", 1/tan(angle_rad), 1/tan(angle_rad));
            }
            else printf("\nrslt->Infinity\n");
            break;
        case 15:
            printf("input num\n");
            scanf("%lf", &val);
            if (val>0) printf("\nrslt=%.8f\n", 1/val);
            else printf("Math ERROR\n");
            break;
        case 16:
            printf("input num\n");
            scanf("%lf", &val);
            if (val>0) printf("\nrslt=%.2f\n", log(val));
            else printf("Math ERROR\n");
            break;
        case 17:
            printf("input num\n");
            scanf("%lf", &val);
            if (val>0) printf("\nrslt=%.2f\n", log10(val));
            else printf("Math ERROR\n");
            break;
        case 18:
            printf("input num, power\n");
            scanf("%f %f", &num, &power);
            printf("\nrslt=%f\n", (float) pow(num, power));
            break;
        case 19:
            printf("input power\n");
            scanf("%lf", &val);
            printf("\nrslt=%.5f\n", exp(val));
            break;
        case 20:
            printf("input num\n");
            scanf("%d", &num1);
            int f=1, j=1;
            for (; j<=num1; j++)
            {
                f*=j;
            }
            printf("\nrslt=%d\n", f);
            break;
        case 21:
            printf("input ratio\n");
            scanf("%f", &r);
            if (r<=1 && r>=-1)
            {
                angle_deg=(180/M_PI)*asin(r);
                printf("\nrslt=%lf\n", angle_deg);
            }
            else
            {
                printf("\nMath ERROR\n");
            }
            break;
        case 22:
            printf("input ratio\n");
            scanf("%f", &r);
            if (r>=-1 && r<=1)
            {
                angle_deg=(180/M_PI)*acos(r);
                printf("\nrslt=%lf", angle_deg);
            }
            else
            {
                printf("\nMath ERRPR\n");
            }
            break;
        case 23:
            printf("input ratio\n");
            scanf("%f", &r);
            angle_deg=(180/M_PI)*atan(r);
            printf("\nrslt=%lf\n", angle_deg);
            break;
        case 24:
            printf("input angle in deg\n");
            scanf("%f", &angle_deg);
            printf("\nrslt=%f rad.\n", (M_PI/180)*angle_deg);
            break;
        case 25:
            printf("input angle in rad\n");
            scanf("%f", &angle_rad);
            printf("\nrslt=%f deg.\n", (180/M_PI)*angle_rad);
            break;
        case 26:
            printf("input angle in deg\n");
            scanf("%f", &angle_deg);
            printf("\nrslt=%f grades\n", (10.0/9)*angle_deg);
            break;
        case 27:
            printf("input angle in grade\n");
            scanf("%f", &angle_grade);
            printf("\nrslt=%f deg.\n", 0.9*angle_grade);
            break;
        case 28:
            printf("input angle in grade\n");
            scanf("%f", &angle_grade);
            printf("\nrslt=%f rad.\n", (M_PI/200)*angle_grade);
            break;
        case 29:
            printf("input angle in rad\n");
            scanf("%f", &angle_rad);
            printf("\nrslt=%f grades\n", (200/M_PI)*angle_rad);
            break;
        case 30:
            printf("input an integer\n");
            scanf("%d", &num1);
            if (num1==0)
            {
                printf("\nrslt: Gamma(0) = 1\n");
            }
            else
            {
                num2=num1-1;
                int k, f1=1;
                for (k=1; k<=num2; k++)
                {
                    f1*=k;
                }
                printf("\nrslt: Gamma(%d) = %d\n", num1, f1);
            }
            break;
        case 31:
            printf("input a, b, c\n");
            scanf("%f %f %f", &a1, &b1, &c1);
            printf("Quad. Eq : %.2fx^2+%.2fx+%.2f\n", a1, b1, c1);
            DS=pow(b1, 2)-4*a1*c1;
            printf("Roots:-\n");
            printf("\nx = %.lf, %.lf\n", ((-b1+sqrt(DS))/(2*a1)), ((-b1-sqrt(DS))/(2*a1)));
            break;
        case 32:
        {
            int o, array[30], sum_o=0, h;
            printf("input array size\n");
            scanf("%d", &o);
            printf("input array elements\n");
            for (h=0; h<o; h++)
            {
                scanf("%d", &array[h]);
            }
            for (h=0; h<o; h++)
            {
                sum_o+=array[h];
            }
            printf("\nrslt=%.2f\n", (float)sum_o/o);
        }
        break;
        case 33:
            printf("\nExiting the Calc...\n\n======Hope it Helped======\n");
            exit(0);
            break;
        default:
            printf("\nInput VALID choice\n");
        }
        printf("\n\n");
    }
    return 0;
}
