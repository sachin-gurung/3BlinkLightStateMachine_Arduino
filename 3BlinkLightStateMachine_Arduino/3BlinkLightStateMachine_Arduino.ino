int LED_States[3][20] = {
  {1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1},
  {1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0}
};

byte counter = 0;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}


void loop() {
  for (byte LED = 0; LED <= 2; LED++){
    if (LED_States[LED][counter] == 1){
      digitalWrite(LED +2, HIGH);
    } else {
      digitalWrite(LED +2, LOW);
    }
  }
  counter++;
  if (counter > 19){
    counter = 0;
  }
  delay(100);
}
