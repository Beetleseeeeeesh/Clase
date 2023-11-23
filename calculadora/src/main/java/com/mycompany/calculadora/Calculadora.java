package com.mycompany.calculadora;
import java.util.Scanner;

public class Calculadora {

    public static void main(String[] args) {
        int num1 = 0;
        int num2 = 0;
        int resultado = 0;
        int opcion = 0;
        Scanner entradaEscaner = new Scanner ( System.in);
        
        System.out.println("Calculadora:");
        System.out.println("Introduce el primer número: ");
        num1 = entradaEscaner.nextInt();
        System.out.println("Introduce el segundo número");
        num2 = entradaEscaner.nextInt();
        System.out.println("Ahora escoge qué operación deseas hacer: ");
        System.out.println("1: +");
        System.out.println("2: -");
        System.out.println("3: *");
        System.out.println("4: /");
        opcion = entradaEscaner.nextInt();
        switch (opcion){
            case 1:{
                resultado = num1+num2;
                System.out.println("El resultado de la suma es: "+ resultado);
                break;
            }
            case 2:{
                resultado = num1-num2;
                System.out.println("El resultado de la resta es: "+ resultado);
                break;
            }
            case 3:{
                resultado = num1*num2;
                System.out.println("El resultado de la multiplicación es: "+ resultado);
                break;
            }
            case 4:{
                resultado = num1/num2;
                System.out.println("El resultado de la división es: "+ resultado);
                break;
            }
        }
    }
}
