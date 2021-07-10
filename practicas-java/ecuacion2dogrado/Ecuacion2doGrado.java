/*
 Pedir los coeficientes de una ecuacion de segundo grado, y mostrar sus 
soluciones reales. Si no existen, debe indicarlo
 */
package ecuacion2dogrado;

import java.util.*;
import java.io.*;

public class Ecuacion2doGrado {

    
    public static void main(String[] args) {
        
        Scanner sr = new Scanner(System.in);
        
        int number1, number2, number3;
        double result1, result2;
        
        System.out.println("Ingresar el primer número (a)");
        number1 = sr.nextInt();
        
        System.out.println("Ingresar elsegundo número (b)");
        number2 = sr.nextInt();
        
        System.out.println("Ingresar el tercer número (c)");
        number3 = sr.nextInt();
        
        result1 = (-number2 + (Math.sqrt(Math.pow(number2,2) + 4*number1*number3)))/(2*number1);
        result2 = (-number2 - (Math.sqrt(Math.pow(number2,2) + 4*number1*number3)))/(2*number1);
        
        if(number1 == 0){
            System.out.println("El primer número (a) no es distinto de cero");
        }else if(result1==0 || result2==0){
            System.out.println("No exiten soluciones reales");
        }else{
           System.out.println("El primer resultado es igual a: "+ result1);
        System.out.println("El segundo resultado es igual a: "+ result2); 
        }
    }
    
}
