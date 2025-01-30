
public class Main {
	public static void main(String[] args) {
	    
	    String nombre = "Mariana";
		int edad = 19; 
		float estatura = 1.54f;
		double peso = 45.7;
		char talla = 'M';
		final long NUMERO_CELULAR = 3006204138L;
		
		System.out.println(nombre);
		System.out.println(edad + " anios");
		System.out.println(estatura);
		System.out.println(peso + "kg");
		System.out.println(talla);
		System.out.println(NUMERO_CELULAR);
		
		System.out.printf("Mi nombre es %s y mi edad es: %d \n", nombre, edad);
		System.out.printf("Mi estatura es: %.2f", estatura);
		
	}
}