const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int SENSOR_PIN = 2;

void setup() 
{
	pinMode(RED_PIN, OUTPUT);
	pinMode(GREEN_PIN, OUTPUT);
	pinMode(SENSOR_PIN, INPUT);   
}

void loop() 
{
	int result = digitalRead(SENSOR_PIN);
	if (result == 1)
	{
		digitalWrite(RED_PIN, HIGH);
		digitalWrite(GREEN_PIN, LOW);  
	}
	else
	{
		digitalWrite(RED_PIN, LOW);
		digitalWrite(GREEN_PIN, HIGH);  
	}
	delay(1);
}
