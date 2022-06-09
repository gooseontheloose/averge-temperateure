#include <iostream>
using namespace std;

int main()
{
	float days = 0;
	float temperatures[50];
	float temptotal = 0;
	float average = 0;
	
	cout << "Enter a number of days up to 50: ";
	cin >> days;
	
	if (days > 50)
	{
		cout << "You may only enter temperatures for up to 50 days." << endl;
		return 0;
	}
	
	float min = 9999999999999;
	float max = -9999999999999;
	for (int i = 0; i < days; i++)
	
	{
		cout << "Enter the temperature for day number " << i << ": ";
		cin >> temperatures[i];
		temptotal += temperatures[i];

		if (temperatures[i] > max)
			max = temperatures[i];
		if (temperatures[i] < min)
			min = temperatures[i];
	}

	average = (temptotal / days);
	cout << "The temperature average is: " << average << endl;
	cout << "The highest temperature is: " << max << endl;
	cout << "The lowest temperature is: " << min << endl;

	system("pause");
	return 0;
}