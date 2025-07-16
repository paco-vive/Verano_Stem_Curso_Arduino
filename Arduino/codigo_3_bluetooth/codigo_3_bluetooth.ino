const int in1 = 6;
const int in2 = 7;
const int in3 = 12;
const int in4 = 13;

char comando;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  if (Serial.available()) { 
    comando = Serial.read();

    switch (comando) {
      case 'F':
        Serial.println("ADE LANTE");
        adelante();
        break;

      case 'B':
        Serial.println("Atras");
        atras();
        break;

      case 'L':
        Serial.println("izquierda");
        izquierda();
        break;

      case 'R':
        Serial.println("Derecha");
        derecha();
        break;

      case 'S':
        Serial.println("STOP");
        detener();
        break;

      default:
        break;
    }
  }
}

void adelante() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void atras() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void izquierda() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void derecha() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW); 
}

void detener() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
