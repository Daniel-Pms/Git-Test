

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode (12,OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (9, OUTPUT);

  // push buttons

  pinMode (8,OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  bool button1 = digitalRead(8);
  bool button1 = digitalRead(7);
  bool button1 = digitalRead(6);
  bool button1 = digitalRead(5);

  digitalWrite(12, button1);
  digitalWrite(11, button1);
  digitalWrite(10, button1);
  digitalWrite(9, button1);

    
  digitalWrite(12, HIGH);   
  digitalWrite(11, LOW);    
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  
                       
}
