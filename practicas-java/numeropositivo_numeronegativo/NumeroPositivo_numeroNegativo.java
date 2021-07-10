/*
 Pedir un número y decir si es positivo o no
 */
package numeropositivo_numeronegativo;

import java.util.Scanner;

public class NumeroPositivo_numeroNegativo {

    public static void main(String[] args) {
        Scanner entrada= new Scanner(System.in);
        
        int number;
        
        System.out.println("Ingresa un número:");
        number=entrada.nextInt();
        
        if(number > 0){
            System.out.println("El número positivo");
        }else{
            System.out.println("El número es negativo");
        }
    }
    
}
