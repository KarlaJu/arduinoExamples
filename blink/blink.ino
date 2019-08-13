/*Blink
El led se conecta a la entrada del pin no. 13 y al GDN*/
int  led = 13;

void setup() {  //Se inicializa el pin digital como de salida
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
