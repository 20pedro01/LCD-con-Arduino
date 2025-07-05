#include <LiquidCrystal.h>
#define t 3000  // Tiempo entre frases (3 segundos)

LiquidCrystal lcd(2, 3, 4, 5, 6, 7); // RS, E, D4, D5, D6, D7

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  mostrar("A veces no hay", "motivacion clara");
  mostrar("pero aun asi", "eliges avanzar");
  mostrar("Sin aplausos", "y sin testigos");
  mostrar("solo tu y ese", "deseo de crecer");
  mostrar("Eso ya es", "una victoria");
  mostrar("No necesitas", "saberlo todo");
  mostrar("solo el valor", "para intentarlo");
  mostrar("Y si te caes...", "no pierdes");
  mostrar("aprendes, te le-", "vantas y sigues");
  mostrar("Tu esfuerzo", "es importante");
  mostrar("aunque nadie vea", "lo que haces");
  mostrar("sigue con", "emocion y mente");
  mostrar("Con corazon y", "codigo  Pedro :)");

  delay(6000); // Espera larga antes de reiniciar
  lcd.clear();
}

// Función auxiliar para mostrar dos líneas
void mostrar(String linea1, String linea2) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(linea1);
  lcd.setCursor(0, 1);
  lcd.print(linea2);
  delay(t);
}