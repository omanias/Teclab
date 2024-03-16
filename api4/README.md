
### Abstracción: 
Ocultar los detalles de implementación y mostrar solo la funcionalidad esencial de un objeto. En la clase Ship, la abstracción se refleja en la definición de los atributos (category, fire_power, shield, speed, crew_capacity) y métodos (printShipInfo, upgradeFirePower) que representan las características y el comportamiento de una nave espacial sin revelar cómo se implementan internamente.


### Encapsulación: 
En la clase Ship, los atributos (category, fire_power, shield, speed, crew_capacity) están encapsulados dentro de la clase, lo que significa que solo los métodos de la clase pueden acceder y manipular directamente estos datos. Por ejemplo, los métodos setCategory, getCategory, upgradeFirePower, etc., proporcionan una interfaz controlada para modificar los atributos de la nave.

### Herencia: 
 En el contexto de la clase Ship, podrías tener subclases como FighterShip, CargoShip, etc., que hereden los atributos y métodos de la clase Ship, y luego agregar atributos y métodos específicos para cada tipo de nave.

### Polimorfismo: 
En la clase Ship, podrías tener funciones virtuales como virtual void attack() que se redefine en las subclases según el comportamiento específico de cada tipo de nave.