# Calculadora de Parqueadero

Este fue un parcial que hice era de cómo calcular cobros basados en el tiempo. El programa toma la cantidad de horas que el carro estuvo en el parqueadero y calcula el precio final, aplicando descuentos si la persona dejó el vehículo por mucho tiempo.

## ¿Cómo funciona?

* **Cobro base:** La primera hora cuesta 2000 y cada hora extra sale por 1500.
* **Descuentos:** * Si el cliente se queda entre 5 y 9 horas, se le hace un 10% de descuento.
    * Si se queda 10 horas o más, se le hace un 20% de descuento.
* **Resultados:** Al final, el programa muestra el total a pagar y, si aplica descuento, cuánto dinero se le está restando al precio inicial.

## ¿Qué conceptos usé?

* **Condicionales (if-else):** Para separar los precios según las horas y decidir cuándo aplicar los descuentos.
* **Variables:** Para guardar los precios y los cálculos de forma organizada.
* **Entrada y salida:** Uso de `cin` para pedir los datos y `cout` para mostrar la cuenta final.

## ¿Cómo usarlo?

1. Hay que tener instalado cualquier programa para compilar C++ (como Dev-C++).
2. Abre el archivo `calculadora-parqueadero.cpp`.
3. Compila y corre el código.
4. Escribe las horas cuando te las pida y se muestra el resultado de una vez.
