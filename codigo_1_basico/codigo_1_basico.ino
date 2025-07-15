const int in1 = 6;  // Pin conectado al motor derecho (parte A)
const int in2 = 7;  // Pin conectado al motor derecho (parte B)
const int in3 = 12; // Pin conectado al motor izquierdo (parte A)
const int in4 = 13; // Pin conectado al motor izquierdo (parte B)

char comando; // Variable que podríamos usar para recibir órdenes (aunque aquí no se usa)

void setup() {
  // Configuramos los pines como salidas (vamos a enviar señales desde el Arduino a los motores)
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  Serial.begin(9600); // Iniciamos la comunicación serial por si queremos mandar comandos desde la compu
}

void loop() {
  // Hacemos que el carrito avance por medio segundo
  adelante();
  delay (500); // Espera 500 milisegundos (0.5 segundos)

  // Luego hacemos que retroceda por medio segundo
  atras();
  delay(500); // Espera 500 milisegundos otra vez
}

// Esta función hace que el carrito avance
void adelante() {
  // Motor derecho gira hacia adelante
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  // Motor izquierdo también gira hacia adelante
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

// Esta función hace que el carrito retroceda
void atras() {
  // Motor derecho gira hacia atrás
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  // Motor izquierdo gira hacia atrás
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

// Esta función hace que el carrito gire a la izquierda
void izquierda() {
  // Motor derecho gira hacia adelante
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  // Motor izquierdo gira hacia atrás
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

// Esta función hace que el carrito gire a la derecha
void derecha() {
  // Motor derecho gira hacia atrás
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  // Motor izquierdo gira hacia adelante
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

// Esta función detiene completamente el carrito
void detener() {
  // Ambos motores se apagan
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}