

//label the pins
int gledPin = 7;
int pledPin = 8;
int btnPin = 2;
unsigned long t = 0;


int lastBtnState;
int currentBtnState;


void setup() {
  pinMode(gledPin, OUTPUT);
  pinMode(pledPin, OUTPUT);
  pinMode(btnPin, INPUT);
  
  
  
  digitalWrite(gledPin,HIGH);
  Serial.begin(9600);

}



void loop() {
  led_blink();
  p_led_controll();
}

void led_blink(){

  if(digitalRead(gledPin) == HIGH){
    if(millis()-t >= 700){
      t=millis();
      digitalWrite(gledPin,LOW);
    }
  }
  if(digitalRead(gledPin) == LOW){
    while(millis()-t >= 150){
      t=millis();
      digitalWrite(gledPin,HIGH);
    }
  }

}

void p_led_controll(){
  lastBtnState = currentBtnState;
  currentBtnState = digitalRead(btnPin);

  if(lastBtnState == LOW && currentBtnState == HIGH){
    if(digitalRead(pledPin)==LOW){
      digitalWrite(pledPin,HIGH);
    }else{
      digitalWrite(pledPin,LOW);
    }
  }else{
    return;
  }
  //Serial.print("lasBtn state = "); Serial.println(+digitalRead(currentBtnState));
}


