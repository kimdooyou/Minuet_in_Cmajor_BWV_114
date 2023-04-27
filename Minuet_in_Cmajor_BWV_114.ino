const int BUZZER = 12;

const int button[9] = {2, 3, 4, 5, 6, 7, 8, 9, 10}; 
//  const int melody2[21] = {
//  440, 494, 554, 440, 494, 554, 330, 554, 494, 466, 370, 440, 494, 554, 370, 554, 554, 554, 494, 494, 440 
//  };
//  const int melody3[21] = {
//  440, 494, 554, 440, 494, 554, 330, 554, 494, 466, 370, 440, 494, 554, 370, 554, 554, 554, 494, 494, 440 
//  }; 
const int note1[9] = { 
  247, 262, 294, 330, 349, 393, 440, 494, 523,  
};  
          //tone(BUZZER, melody2[note]);
          //tone(BUZZER, melody3[note]);
void setup() {
for(int n=0;n<=8;n++) {
        pinMode(button[n], INPUT);
 }
} 
 void loop() {
  if(digitalRead(button[0]) == HIGH) {
            tone(BUZZER, note1[0]);
  } else if(digitalRead(button[1]) == HIGH) {
            tone(BUZZER, note1[1]);
  } else if(digitalRead(button[2]) == HIGH) {
            tone(BUZZER, note1[2]);
  } else if(digitalRead(button[3]) == HIGH) {
            tone(BUZZER, note1[3]);
  } else if(digitalRead(button[4]) == HIGH) {
            tone(BUZZER, note1[4]);
  } else if(digitalRead(button[5]) == HIGH) {
            tone(BUZZER, note1[5]);
  } else if(digitalRead(button[4]) == HIGH) {
            tone(BUZZER, note1[4]);
  } else if(digitalRead(button[5]) == HIGH) {
            tone(BUZZER, note1[5]);
  } else if(digitalRead(button[6]) == HIGH) {
            tone(BUZZER, note1[6]);
  } else if(digitalRead(button[7]) == HIGH) {
            tone(BUZZER, note1[7]);
  } else if(digitalRead(button[8]) == HIGH) {
            tone(BUZZER, note1[8]);
  } else {
          noTone(BUZZER);
  
  // put your main code here, to run repeatedly:
  }
 }
