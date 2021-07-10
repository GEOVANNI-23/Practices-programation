/*
 Pedir 3 números y mostrarlos de mayor a menor 
 */
package tresnumerosoordenadosdemayormenor;

import java.util.Scanner;

public class TresNumerosoOrdenadosDeMayorMenor {

    public static void main(String[] args) {
        Scanner entrada= new Scanner(System.in);
        
        int number1,number2,number3;
        
        System.out.println("Ingresa el 1er número");
        number1=entrada.nextInt();
        
        System.out.println("Ingresa el 2do número");
        number2=entrada.nextInt();
        
        System.out.println("Ingresa el 3er número");
        number3=entrada.nextInt();
        
        if(number1 > number2 && number2 > number3){
            System.out.println(number1 + number2 + number3);
        }else if(number1 > number3 && number3 > number2){
            System.out.println(number1 + number3 + number2);
        }else if(number2 > number1 && number1 > number3){
            System.out.println(number2 + number1 + number3);
        }else if(number2 > number3 && number3 > number1){
            System.out.println(number2 + number3 + number1);
        }else if(number3 > number1 && number1 > number2){
            System.out.println(number3 + number1 + number2);
        }else if(number3 > number2 && number2 > number1){
            System.out.println(number3 + number2 + number1);
        }
    }
    
}
