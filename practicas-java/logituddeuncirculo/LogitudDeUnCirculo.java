/*
 Pedir el radio de un circulo y calcula su longitud
 */
package logituddeuncirculo;

import java.util.Scanner;

public class LogitudDeUnCirculo {

    
    public static void main(String[] args) {
        Scanner sr = new Scanner(System.in);
        
        int radio; 
        double longitud;
        System.out.println("Ingresa el radio ");
        radio=sr.nextInt();
        
        longitud = 2*Math.PI*radio;
        
        System.out.println("La longitud es igual a: "+ longitud);
    }
    
}
