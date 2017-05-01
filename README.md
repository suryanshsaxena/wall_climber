# wall_climber
Please download the code and add it to your arduino lib folder. An example to find where your arduino folder is located you can type the following command in terminal : 
                                                locate arduino | grep /arduino$
Go to the folder and attach the folder and attach the folder in the libraries section 


About the code : 
When defining a constructor for the lib, please note the arrangement of the argument : 
(int arg1, int arg2 , boolean arg3)
arg1 - PWM pin to power the motor
agr2 - Analong pin if want to manually control the motor
arg3 - True/False {True would mean that you want to control the water manually}

In the function definition clockwise(int val) and anticlock(int val) : provide a value between 180 to 0 when motor is not being controlled manually. Pass -1 for default configuration. 
