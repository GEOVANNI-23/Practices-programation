/*
 Pedir dos números y decir si son iguales o no
 */
package numerosiguales;

import java.util.Scanner;

public class NumerosIguales {
    
    public static void main(String[] args) {
        Scanner entrada=new Scanner(System.in);
        
        int number1, number2;
        
        System.out.println("Ingrese el 1er número: ");
        number1=entrada.nextInt();
        
        System.out.println("Ingrese el 2do número: ");
        number2=entrada.nextInt();
        
        if(number1 > number2){
            System.out.println("El 1er número mayor");
        }else{
            System.out.println("El 2do número mayor");
        }
    }
    
}
