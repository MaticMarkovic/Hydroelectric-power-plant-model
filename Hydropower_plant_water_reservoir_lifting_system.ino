
const int uplimit = 10;                 //upper limit switch
const int lowlimit = 9;                 //lower limit switch
const int moveup = 5;                   //3-way toggle switch, move up switched ON
const int movedown = 4;                 //3-way toggle switch, move down swithed ON

// Pin assignment for first half-bridge
const int IS_1 = A0;                    // current sense and diagnostics
const int IN_1 = 3;                     // input (PWM)
const int INH_1 = 12;                   // inhibit (low = sleep)

// Pin assignment for second half-bridge
const int IS_2 = A1;                    // current sense and diagnostics
const int IN_2 = 11;                    // input (PWM)
const int INH_2 = 13;                   // inhibit (low = sleep)

int state1 = 0;
int state2 = 0;

void setup() {
  // Set correct input/output state
  Serial.begin(9600);
  pinMode(IS_1, INPUT);
  pinMode(IN_1, OUTPUT);
  pinMode(INH_1, OUTPUT);
  pinMode(IS_2, INPUT);
  pinMode(IN_2, OUTPUT);
  pinMode(INH_2, OUTPUT);
  pinMode(uplimit, INPUT);
  pinMode(lowlimit, INPUT);
  pinMode(moveup, INPUT);
  pinMode(movedown, INPUT);

  // Set initial output states
  analogWrite(IN_1, 0);                 // set motor speed to 0
  digitalWrite(INH_1, HIGH);            // enable OUT1
  analogWrite(IN_2, 0);                 // set motor speed to 0
  digitalWrite(INH_2, HIGH);            // enable OUT2
}

void loop()
{
  
  if ((digitalRead(moveup) == true) & (digitalRead(movedown) == true)) //if toggle switch is not switched ON for moving up or down
  {
    analogWrite(IN_1, 0);                                              //PWM for both H-bridges is set to 0, nothing moves
    analogWrite(IN_2, 0);
    state1 = 0;
    state2 = 0;
  }

  if (digitalRead(movedown) == false)                                  //if movedown switch is ON and low limit switch is not pressed
  {
    if (digitalRead(lowlimit) == true)
    {
      state2 = 0;
      if (state1 == 0)
      {
        for (int i = 150; i <= 255 ; i++)
        {
          analogWrite(IN_1, i);                                        //PWM set to 255, motor starts in counter clockwise direction
          analogWrite(IN_2, 0);                                        //water reservoir moves down
          delay(60);

          if (digitalRead(lowlimit) == false || digitalRead(movedown) == true)  //if low limit switch is reached
          {
            analogWrite(IN_1, 0);                                      //set PWM to 0, motor stops
            break;
          }

        }
        analogWrite(IN_1, 255);
        state1 = 1;
      }
    }
    else
    {
      analogWrite(IN_1, 0);
      analogWrite(IN_2, 0);
    }
  }



  if (digitalRead(moveup) == false)                                  //if moveup switch is ON and upper limit switch is not pressed
  {
    if (digitalRead(uplimit) == true)
    {
      state1 = 0;
      if (state2 == 0)
      {
        for (int i = 150; i <= 255 ; i++)
        {
          analogWrite(IN_1, 0);
          analogWrite(IN_2, i);                                        //PWM set to 255, motor starts in clockwise direction
          delay(60);                                                   //water reservoir moves up
          
          if (digitalRead(uplimit) == false || digitalRead(moveup) == true)  //if upper limit switch is reached
          {
            analogWrite(IN_2, 0);                                      //set PWM to 0, motor stops
            break;
          }
        }
        analogWrite(IN_2, 255);
        state2 = 1;
      }
    }
    else
    {
      analogWrite(IN_1, 0);
      analogWrite(IN_2, 0);
    }
  }
}
