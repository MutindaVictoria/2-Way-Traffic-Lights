int RED =1;
int YELLOW = 2;
int GREEN = 0;
int Button = 3;
int red =4;
int yellow =5;
int green =6;
int button =8;

void setup(){ pinMode(RED,OUTPUT);
              pinMode(YELLOW,OUTPUT);
              pinMode(GREEN,OUTPUT);
              pinMode(Button,INPUT_PULLUP);
              pinMode(red,OUTPUT);
              pinMode(yellow,OUTPUT);
              pinMode(green,OUTPUT);
              pinMode(button,INPUT_PULLUP);
            }
             
void loop(){
            if(digitalRead(Button)==LOW)
             
              
              
                 {
                    digitalWrite(RED,HIGH);
                    delay(6000);
                    digitalWrite(RED,LOW);
                    
                 
              
                 }
             else
                 {
                    digitalWrite(RED,HIGH);
                    digitalWrite(green,HIGH);
                    delay(3000);
                    digitalWrite(RED,HIGH);
                    digitalWrite(green,HIGH);
                    digitalWrite(YELLOW,HIGH);
                    digitalWrite(yellow,HIGH);
                    delay(2000);
                    digitalWrite(RED,LOW);
                    digitalWrite(green,LOW);
                    digitalWrite(YELLOW,LOW);
                    digitalWrite(yellow,LOW);
                    digitalWrite(GREEN,HIGH);
                    digitalWrite(red,HIGH);
                    delay(3000);
                    digitalWrite(GREEN,HIGH);
                    digitalWrite(red,HIGH);
                    digitalWrite(YELLOW,HIGH);
                    digitalWrite(yellow,HIGH);
                    delay(2000);
                    digitalWrite(GREEN,LOW);
                    digitalWrite(red,LOW);
                    digitalWrite(YELLOW,LOW);
                    digitalWrite(yellow,LOW);
                      }
                      if(digitalRead(button)==LOW)
             
              
              
                 {
                    digitalWrite(red,HIGH);
                    digitalWrite(GREEN,HIGH);   
                    delay(6000);
                    digitalWrite(red,LOW);
                    digitalWrite(GREEN,LOW);
                    
                 
              
                 }
             else
                 {
                    digitalWrite(red,HIGH);
                    digitalWrite(GREEN,HIGH);
                    delay(3000);
                    digitalWrite(red,HIGH);
                    digitalWrite(GREEN,HIGH);
                    digitalWrite(yellow,HIGH);
                    digitalWrite(YELLOW,HIGH);
                    delay(2000);
                    digitalWrite(red,LOW);
                    digitalWrite(GREEN,LOW);
                    digitalWrite(yellow,LOW);
                    digitalWrite(YELLOW,LOW);
                    digitalWrite(green,HIGH);
                    digitalWrite(RED,HIGH);
                    delay(3000);
                    digitalWrite(green,HIGH);
                    digitalWrite(RED,HIGH);
                    digitalWrite(yellow,HIGH);
                    digitalWrite(YELLOW,HIGH);
                    delay(2000);
                    digitalWrite(green,LOW);
                    digitalWrite(RED,LOW);
                    digitalWrite(yellow,LOW);
                    digitalWrite(YELLOW,LOW);
                      }
}

  
    
  


  
    
  








