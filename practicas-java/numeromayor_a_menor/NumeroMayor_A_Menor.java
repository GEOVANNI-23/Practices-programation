/*
 Pedir dos números y ordenarlos de mayor a menor
 */
package numeromayor_a_menor;

import java.util.Scanner;

public class NumeroMayor_A_Menor {

    
    public static void main(String[] args) {
        Scanner entrada=new Scanner(System.in);
        int number1,number2;
        
        System.out.println("Ingresa un número");
        number1=entrada.nextInt();
        
        System.out.println("Ingresa otro número");
        number2=entrada.nextInt();
        
        if(number1 > number2){
            System.out.println(number2 + " "+ number1);
        }else{
            System.out.println(number1 + " "+ number2);
        }
    }
    
}
