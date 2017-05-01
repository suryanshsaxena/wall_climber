#include "Arduino.h"
#include "Wall.h"
#include "Servo.h"


Wall :: Wall(int pin1, int pin2, int control) 
{	
	_pin1 = pin1;
	esc.attach(_pin1);

	_pin2 = pin2;
	pinMode(_pin2, INPUT);

	c = control;
}

void Wall :: clockwise(int val) 
{
	if(c == true) 
	{	
		int data = analogRead(_pin2);
		data = map(data, 0, 1023, 0, 179);
		esc.writeMicroseconds(data);
	}
	else
	{
		if(val == -1)
		{
			esc.writeMicroseconds(120);	
		}
		else 
		{
			esc.writeMicroseconds(val);	
		}
	}
} 

void Wall :: anticlock(int val) 
{
	if(c == true) 
	{	
		int data = analogRead(_pin2);
		data = map(data, 0, 1023, 0, 179);
		esc.writeMicroseconds(data);
	}
	else
	{		
		if(val == -1)
		{
			esc.writeMicroseconds(120);	
		}
		else 
		{
			esc.writeMicroseconds(val);	
		}	
	}
} 

void Wall :: stop()
{
	esc.writeMicroseconds(90);
}
