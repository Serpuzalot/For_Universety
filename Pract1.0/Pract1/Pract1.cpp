

#include <iostream>
#include<cmath>
void task12() {
    //Start of varaint 12
    int x;
    double ans;
    std::cout << "Variant 12" << std::endl;
    std::cout << "x^2-7*x+10/x^2-8*x+12" << std::endl;
    std::cout << "Input x:";
    std::cin >> x;

    if (pow(x, 2) - 8 * x + 12 == 0) {
        std::cout << "Answer for varaint 12: no decison" << std::endl;
    }
    else {
        ans = (pow(x, 2) - 7 * x + 10) / (pow(x, 2) - 8 * x + 12);
        std::cout << "Answer for variant 12: ";
        std::cout << ans << std::endl;
    };
    // End of variant 12
}
void task16() {
    //Starn of variant 16
    int x;
    double ans;
    std::cout << "Variant 16" << std::endl;
    std::cout << "|x^2-x^3|-7*x/x^3-15*x"<<std::endl;
    std::cout << "Input x:";
    std::cin >> x;
    if (pow(x, 3) - 15 * x == 0) {
        std::cout << "Answer for variant 16: no decison" << std::endl;
    }
    else {
        ans = abs(pow(x, 2) - pow(x, 3)) - (7 * x) / (pow(x, 3) - 15 * x);
        std::cout << "Answer for variant 16:";
        std::cout << ans << std::endl;
    }
    //End of variant 16
 }
 void task20() {
     //Start od variant 20
     int x, y;
     double ans;
     std::cout << "Variant 20 " << std::endl;
     std::cout << "1+sin(sqrt(x+1))/cos(12*y-4)" << std::endl;
     std::cout << "Input x:";
     std::cin >> x;
     std::cout << "Input y:";
     std::cin >> y;
     if (x + 1 < 0) {
         std::cout << "Answer for variant 20: no decison" << std::endl;
     }
     else {
         if (cos(12 * y - 4) == 0) {
             std::cout << "Answer for variant 20: no decison" << std::endl;
         }
         else {
             ans = (1 + sin(sqrt(x + 1))) / (cos(12 * y - 4));
             std::cout << "Answer for variant 20:";
             std::cout << ans << std::endl;
         }
     }
     //End of variant 20
    }
 void task24() {
     //Start of variant 24
     int x;
     double ans;
     std::cout << "Varaint 24" << std::endl;
     std::cout << "x-10*sin(x)+|x^4_x^5|"<<std::endl;
     std::cout << "Input x: ";
     std::cin >> x;
     ans = x - 10 * sin(x) + abs(pow(x, 4) - pow(x, 5));
     std::cout << "Answer for variant 24: ";
     std::cout << ans << std::endl;
     //End of variant 24 
 }
 void task28() {
     //Start of variant 28
     int x, y, z, a, b, c, f, d;
     double ans;
     std::cout << "Variant 28" << std::endl;
     std::cout << "cos^2(x)/sin(x)-x*y*z+(a*x^2 +b*x+c)/(d*x^3-f)" << std::endl;
     std::cout << "Input x y z: " << std::endl;
     std::cin >> x >> y >> z;
     std::cout << "Input: a b c " << std::endl;
     std::cin >> a >> b >> c;
     std::cout << "Input: f d  " << std::endl;
     std::cin >> f >> d ;
     if (sin(x) == 0) {
         std::cout << "Answer for variant 28: no decison " << std::endl;
     }
     else {
         if (d * pow(x, 3) - f == 0) {
             std::cout << "Answer for variant 28:no decison " << std::endl;
         }
         else {
             ans = (pow(cos(x), 2) / sin(x)) - x * y * z + (a * pow(x, 2) + b * x + c) / (d * pow(x, 3) - f);
             std::cout << "Answer for variant 28 :";
             std::cout << ans << std::endl;
         }
     }
     //End of variant 28
 }

 int main()
 {
     task12();
     task16();
     task20();
     task24();
     task28();
 }
