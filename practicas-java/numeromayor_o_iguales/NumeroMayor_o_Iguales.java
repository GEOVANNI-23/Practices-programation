/*
 Pedir dos números y decir cuál es el mayor o si son iguales
 */
package numeromayor_o_iguales;

import java.util.Scanner;

public class NumeroMayor_o_Iguales {

    
    public static void main(String[] args) {
        Scanner entrada=new Scanner(System.in);
        
        int number1,number2;
        
        System.out.println("Ingrese el primer número");
        number1=entrada.nextInt();
        
        System.out.println("Ingrese el segundo número");
        number2=entrada.nextInt();
        
        if(number1 > number2){
            System.out.println("El 1er número es mayor");
        }else if(number2 > number1){
            System.out.println("el 2do numero es mayor");
        }else{
            System.out.println("Ambos son iguales");
        }
    }
    
}
