#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;  // Add a new servo

void setup() {
  delay(1000); // Wait for servo initialization
  servo1.attach(7);
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(11);
  servo5.attach(6);  // Attach the fifth servo to pin 6
}

void loop() {
  // Mueve servo1 y servo2 a 180 grados (en el mismo sentido)
  servo1.write(180);
  servo2.write(180);
  delay(3000); // Espera 3 segundos

  // Mueve servo3 y servo4 a 180 grados (en el mismo sentido)
  servo3.write(180);
  servo4.write(180);
  delay(3000); // Espera 3 segundos

  // Mueve servo3 y servo2 a 180 grados (en el mismo sentido)
  servo3.write(180);
  servo2.write(180);
  delay(3000); // Espera 3 segundos

  // Mueve servo4 y servo1 a 180 grados (en el mismo sentido)
  servo4.write(180);
  servo1.write(180);
  delay(3000); // Espera 3 segundos

  // Mueve el quinto servo a 180 grados
  servo5.write(180);
  delay(3000); // Espera 3 segundos

  // Vuelve todos los servos a 0 grados
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  delay(3000); // Espera 3 segundos
}
