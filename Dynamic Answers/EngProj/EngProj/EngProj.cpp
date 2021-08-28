#include <stdio.h>
#include <iostream>
#include <time.h>
#include <math.h>

int main()
{
	srand(time(NULL));
	int Qnum[3];
	float answer1, answer2, var1, var2, t;
	float input1 = 0;
	float input2 = 0;
    printf("Hello World! I shall make an activity of random items for you.\n");
	for (int n=1; n<=3;n++)
	{
		Qnum[n] = rand() % 10;
		//printf("Display %d \n", Qnum[n]); <-- to check if the random number works
		switch (Qnum[n])
		{
		case 1: 
			var1 = rand() % 50;
			var2 = rand() % 50 + 50;
			printf("%d.)Town A is further north from Town B. Town B is %0.2f km east from Town A and Town A is %0.2f km north of Town B. How far they apart? \n Answer: ", n, var1, var2);
			answer1 = sqrt((var1 * var1 + var2 * var2));
			answer1 = roundf((answer1) * 100) / 100;
			//printf("%f", answer1); <---displays answer for checking
			scanf_s("%f", &input1);
			if (input1==answer1)
			{
				printf("Your answer is correct! \n");
			}
			else
			{
				printf("Your answer is incorrect! The distance between town B and A is %0.2f km. Use pythogorean Theorem to solve for the distance. \n", answer1);
			}
			break;
		case 2:
			var1 = (float)rand() / (RAND_MAX) * 15 + 10;
			var1 = roundf((var1) * 100) / 100;
			var2 = (float)rand() / (RAND_MAX) * 20 + 30;
			var2 = roundf((var2) * 100) / 100;
			t = (float)rand() / (RAND_MAX) * 5 + 1;
			t = roundf((t) * 100) / 100;
			printf("%d.) A race car accelerates uniformly from %.2f m/s to %.2f m/s in %.2f seconds. Determine the acceleration of the car and the distance traveled. \n Answer: ", n, var1, var2, t);
			answer1 = (var2 - var1) / (t);
			answer2 = ((var1) * (t)+0.5 * (answer1) * (t * t));
			answer1 = roundf((answer1) * 100) / 100;
			answer2 = roundf((answer2) * 100) / 100;
			//printf("%f %f\n", answer1, answer2);
			scanf_s("%f %f", &input1, &input2);
			if (input1 == answer1 && input2 == answer2)
			{
				printf("Your answers are correct! \n");
			}
			else
			{
				if (input1 == answer1)
				{
					printf("Your answer for acceleration is correct but your distance is incorrect! The car has traveled in %0.2f seconds is %0.2f meters.  \n", t, answer2);
				}
				else
				{
					if (input2 == answer2)
					{
						printf("Your answer for distance is correct but your acceleration is incorrect! The acceleration of the car is %0.2f m/s^2. \n", answer1);
					}
					else
					{
						printf("Your answers are incorrect! The acceleration of the car is %0.2fm/s^2 and how much it has traveled in %0.2f seconds is %0.2f meters.  \n", answer1, t, answer2);
					}
				}
			}
			break;
		case 3:
			var1 = (float)rand() / (RAND_MAX) * 10 + 5;
			var1 = roundf((var1) * 100) / 100;
			var2 = (float)rand() / (RAND_MAX) * 20 + 30;
			var2 = roundf((var2) * 10) / 10;
			printf("%d.) A bike accelerates uniformly from rest to a speed of %.2f m/s over a distance of %.1f m. Determine the acceleration of the bike. \n Answer: ", n, var1, var2);
			answer1 = (var1 * var1) / (2 * var2);
			answer1 = roundf((answer1) * 100) / 100;
			//printf("%f", answer1);
			scanf_s("%f", &input1);
			if (input1 == answer1)
			{
				printf("Your answer is correct! \n");
			}
			else
			{
				printf("Your answer is incorrect! The acceleration of the bike is %0.2f m/s^2 \n", answer1);
			}
			break;
		case 4:
			var1 = (float)rand() / (RAND_MAX) * 15 + 15;
			var1 = roundf((var1) * 100) / 100;
			t = (float)rand() / (RAND_MAX) * 5 + 1;
			t = roundf((t) * 100) / 100;
			printf("%d.) A car traveling at %.2f m/s skids to a stop in %.2f s. Determine the skidding distance of the car (assume uniform acceleration) \n Answer: ", n, var1, t);
			answer1 = ((var1) / 2) * t;
			answer1 = roundf((answer1) * 100) / 100;
			//printf("%f", answer1);
			scanf_s("%f", &input1);
			if (input1 == answer1)
			{
				printf("Your answer is correct! \n");
			}
			else
			{
				printf("Your answer is incorrect! The distance of the car after skidding is %0.2f meters. \n", answer1);
			}
			break;
		case 5:
			t = (float)rand() / (RAND_MAX) * 5 + 1;
			t = roundf((t) * 100) / 100;
			printf("%d.) A stone is dropped into a deep well and is heard to hit the water %.2f s after being dropped. Determine the depth of the well. \n Answer: ", n,t);
			answer1 = (0.5 * (9.81) * (t * t));
			answer1 = roundf((answer1) * 100) / 100;
			//printf("%f", answer1);
			scanf_s("%f", &input1);
			if (input1 == answer1)
			{
				printf("Your answer is correct! \n");
			}
			else
			{
				printf("Your answer is incorrect! The well is %0.2f meters deep. \n", answer1);
			}
			break;
		case 6:
			var1 = (float)rand() / (RAND_MAX) * 50 + 80;
			var1 = roundf((var1) * 100) / 100;
			var2 = (float)rand() / (RAND_MAX) * 100 + 325;
			var2 = roundf((var2) * 100) / 100;
			printf("%d.) A dragster accelerates to a speed of %.2f m/s over a distance of %.2f m. Determine the acceleration (assume uniform) of the dragster. \n Answer: ", n,var1, var2);
			answer1 = (var1 * var1) / (2 * var2);
			answer1 = roundf((answer1) * 100) / 100;
			//printf("%f", answer1);
			scanf_s("%f", &input1);
			if (input1 == answer1)
			{
				printf("Your answer is correct! \n");
			}
			else
			{
				printf("Your answer is incorrect! The dragster has an acceleration of %0.2f m/s^2. \n", answer1);
			}
			break;
		case 7:
			var1 = (float)rand() / (RAND_MAX) * 100 + 450;
			var1 = roundf((var1) * 100) / 100;
			var2 = (float)rand() / (RAND_MAX) * 1 + 0.1;
			var2 = roundf((var2) * 100) / 100;
			printf("%d.) A bullet leaves a rifle with a muzzle velocity of %.2f m/s. While accelerating through the barrel of the rifle, the bullet moves a distance of %.2f m. Determine the acceleration of the bullet (assume a uniform acceleration). \n Answer: ", n, var1, var2);
			answer1 = (var1 * var1) / (2 * var2);
			answer1 = roundf((answer1) * 100) / 100;
			//printf("%f\n", answer1);
			scanf_s("%f", &input1);
			if (input1 == answer1)
			{
				printf("Your answer is correct! \n");
			}
			else
			{
				printf("Your answer is incorrect! The bullet was accelerating at %0.2f m/s^2 before leaving the muzzle of the rifle and retain a constant velocity. \n", answer1);
			}
			break;
		case 8:
			//random number
			printf("%d.) A feather is dropped on the moon from a height of 1.40 meters. The acceleration of gravity on the moon is 1.67 m/s2. Determine the time for the feather to fall to the surface of the moon. \n Answer: ", n);
			//solve here
			//input here
			break;
		case 9:
			t = (float)rand() / (RAND_MAX) * 5 + 1;
			t = roundf((t) * 100) / 100;
			printf("%d.) Upton Chuck is riding the Giant Drop at Great America. If Upton free falls for %.2f seconds, how far will he fall and what will be his final velocity? \n Answer: ", n,t);
			answer1 = 0.5 * (9.81) * (t * t);
			answer2 = (t) * (9.81);
			answer1 = roundf((answer1) * 100) / 100;
			answer2 = roundf((answer2) * 100) / 100;
			//printf("%f %f\n", answer1, answer2);
			scanf_s("%f %f", &input1, &input2);
			if (input1 == answer1 && input2 == answer2)
			{
				printf("Your answers are correct! \n");
			}
			else
			{
				if (input1 == answer1)
				{
					printf("Your answer for distance is correct but your final velocity is incorrect! The falling speed of the Chuck after %0.2f seconds is %0.2f m/s \n", t, answer2);
				}
				else
				{
					if (input2 == answer2)
			
					{
						printf("Your answer for final velocity is correct but your distance is incorrect! The distance from where Chuck was and where he is now is %0.2f meters \n", answer1);
					}
					else
					{
						printf("Your answers are incorrect! The distance chuck has traveled after %0.2f seconds is %0.2f meters and %0.2f m/s is how fast Chuck \n", t,answer1,answer2);
					}
				}
			}
			break;
		case 10:
			var1 = (float)rand() / (RAND_MAX) * 500 + 500;
			var1 = roundf((var1) * 100) / 100;
			var2 = (float)rand() / (RAND_MAX) * 500 + 500;
			var2 = roundf((var2) * 100) / 100;
			printf("%d.) An Airplane from the Asia Pacific is travels %0.2f km northward. It proceeds to travel %0.2f km eastward. What is the shortest distance from its destination and its home. \n Answer: ", n, var1, var2);
			answer1 = sqrt((var1 * var1 + var2 * var2));
			answer1 = roundf((answer1) * 100) / 100;
			//printf("%f", answer1); <---displays answer for checking
			scanf_s("%f", &input1);
			if (input1 == answer1)
			{
				printf("Your answer is correct! \n");
			}
			else
			{
				printf("Your answer is incorrect! The distance between the destination and where the plan was is %0.2f km. Use pythogorean Theorem to solve for the distance. \n", answer1);
			}
			break;
		}
	}

}
