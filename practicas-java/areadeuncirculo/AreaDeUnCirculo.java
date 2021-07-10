/*
 Pedir el radio de un criculo y calcular su area: A=PI*r^2
 */
package areadeuncirculo;

import java.util.Scanner;

public class AreaDeUnCirculo {

    
    public static void main(String[] args) {
        Scanner sr =new Scanner(System.in);
        
        double radio, area;
        
        System.out.println("Ingrese el radio");
        radio=sr.nextDouble();
        
        area= Math.PI*Math.pow(radio, 2);
        
        System.out.println("El área es igual a: " + area);
    }
    
}
