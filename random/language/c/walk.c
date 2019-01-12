// Calculates the distance left to walk

#include "mainlib.h"
#include <stdio.h>

int main (int argc, char** argv)
{
    // error handle bad parameters
    if (argc != 3)
    {
        printf("walk [weight] [target_weight]\n");
        return 1;
    }
    
    // conversion
    double weight = stringToFloat(argv[1]);
    double target_weight = stringToFloat(argv[2]);

    // error if negative inputs
    if (weight < 0 || target_weight < 0)
    {
        printf("choose positive weights\n");
        return 1;
    }

    // error if too heavy to move
    if (weight >= 1000 || target_weight >= 1000)
    {
        printf("choose values less than 1000lb\n");
        return 1;
    }

    // error if user is trying to gain weight through exercise
    if (weight < target_weight)
    {
        printf("walk [weight] [target_weight]\n"
               "Also, stop trying to gain weight by walking.\n");
        return 1;
    }
    
    // data
    int Cal_fat = 3500; // ~ Calories in a pound of fat
    int Cal_walk = 750; // ~ Calories burned in an hour of walking
    int Cal_run = 1060; // ~ Calories burned in an hour of running
    double Cal_situp = 0.3; // ~ situp
     
    double Calories = Cal_fat*(weight-target_weight); // cal to lose
    double hours_walk = Calories/Cal_walk;
    int situps;

    printf("%.2f \n", hours_walk);
    
    return 0;
}
    
