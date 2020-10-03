
#include <iostream>
#include<cmath>

int main()
{
    int  x, x2, x3, x4, x5;
    int y3, y5 ;
    int a, b, c, z, f, d;
    double ans, ans2, ans3, ans4, ans5;
    //Start of varaint 12
    std::cout << "Variant 12" <<std::endl;
    std::cout << "Input x:";
    std::cin >> x;
    
    if (pow(x,2)-8*x+12==0) {
        std::cout << "Answer for varaint 12: no decison"<<std::endl;
    }
    else {
        ans = (pow(x, 2) - 7 * x + 10) / (pow(x, 2) - 8 * x + 12);
        std::cout << "Answer for variant 12: ";
        std::cout << ans <<std::endl ;
    };
    // End of variant 12
    //Starn of variant 16
    std::cout << "Variant 16"<<std::endl;
    std::cout << "Input x:";
    std::cin >> x2 ;
    if (pow(x2, 3) - 15 * x2 == 0) {
        std::cout << "Answer for variant 16: no decison"<<std::endl;
    }
    else {
        ans2 = abs(pow(x2, 2) - pow(x2, 3)) - (7 * x ) / (pow(x2, 3) - 15 * x);
        std::cout << "Answer for variant 16:";
        std::cout << ans << std::endl;
    }
    //End of variant 16
    //Start od variant 20
    std::cout << "Variant 20 " << std::endl;
    std::cout << "Input x:";
    std::cin >> x3;
    std::cout << "Input y:";
    std::cin >> y3;
    if (x + 1 < 0 ) {
        std::cout << "Answer for variant 20: no decison" << std::endl;
    }
    else {
        if (cos(12 * y3 - 4) == 0) {
            std::cout << "Answer for variant 20: no decison" << std::endl;
        }
        else {
            ans3 = (1 + sin(sqrt(x3 + 1))) / (cos(12 * y3 - 4));
            std::cout << "Answer for variant 20:";
            std::cout << ans3 << std::endl;
        }
    }
    //End of variant 20
    //Start of variant 24
    std::cout << "Varaint 24"<<std::endl;
    std::cout << "Input x: ";
    std::cin >> x4;
    ans4 = x4-10*sin(x)+abs(pow(x4,4)-pow(x4,5));
    std::cout << "Answer for variant 24: ";
    std::cout << ans4 <<std::endl;
    //End of variant 24 
    //Start of variant 28
    std::cout << "Variant 28"<<std::endl;
    std::cout << "Input x y z: "<<std::endl;
    std::cin >> x5 >> y5 >> z ;
    std::cout << "Input: a b c " << std::endl;
    std::cin >> a >> b >> c;
    std::cout << "Input: f d d " << std::endl;
    std::cin >> f >> d >> d;
    if (sin(x5) == 0) {
        std::cout << "Answer for variant 28: no decison " << std::endl;
    }
    else {
        if(d*pow(x5,3)-f==0){
            std::cout << "Answer for variant 28:no decison " << std::endl;
        }
        else {
            ans5 = (pow(cos(x5), 2) / sin(x)) - x5 * y5 * z + (a * pow(x, 2) + b * x + c) / (d * pow(x, 3) - f);
            std::cout << "Answer for variant 28 :";
            std::cout << ans5 <<std::endl;
        }
    }

} 


