/*
 Pedir dos número y decir si uno es multiplo de otro
 */
package numeromultiplodeotro;

import java.util.Scanner;

public class NumeroMultiploDeOtro {

    public static void main(String[] args) {
        Scanner entrada=new Scanner(System.in);
        
        int number1, number2;
        
        System.out.println("Ingrese el 1er número");
        number1=entrada.nextInt();
        
        System.out.println("Ingrese el 2do número");
        number2=entrada.nextInt();
        
        if(number1%number2==0){
            System.out.println("El 1er número es multiplo del 2do");
        }else if(number2%number1==0){
            System.out.println("El 2do número es multiplo del 1ro");
        }else{
            System.out.println("Ninguno de los dos es multiplo del otro");
        }
    }
    
}
