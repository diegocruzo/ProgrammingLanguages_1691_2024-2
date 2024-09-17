public class ObjetosDeAutomovil {
    public static void main(String[] args) {

        // Herencia (capacidad de crear clases u objetos a partir
        // de otras clases existentes)
        Automovil carrito1 = new Automovil();
        System.out.println("Características de carrito1:");
        System.out.println("Marca: " + carrito1.getMarca());
        System.out.println("Modelo: " + carrito1.getModelo());
        System.out.println("Color: " + carrito1.getColor());
        System.out.println("Cilindraje: " + carrito1.getCilindraje());

        Automovil carrito2 = new Automovil("Audi", "Q5", "Negro");
        Automovil carrito3 = new Automovil("Rojo");
        Automovil carrito4 = new Automovil((short) 3500);

        System.out.println("\nCaracterísticas de carrito2:");
        System.out.println("Marca: " + carrito2.getMarca());
        System.out.println("Modelo: " + carrito2.getModelo());
        System.out.println("Color: " + carrito2.getColor());
        System.out.println("Cilindraje: " + carrito2.getCilindraje());

        System.out.println("\nCaracterísticas de carrito3:");
        System.out.println("Marca: " + carrito3.getMarca());
        System.out.println("Modelo: " + carrito3.getModelo());
        System.out.println("Color: " + carrito3.getColor());
        System.out.println("Cilindraje: " + carrito3.getCilindraje());

        System.out.println("\nCaracterísticas de carrito4:");
        System.out.println("Marca: " + carrito4.getMarca());
        System.out.println("Modelo: " + carrito4.getModelo());
        System.out.println("Color: " + carrito4.getColor());
        System.out.println("Cilindraje: " + carrito4.getCilindraje());
    }
}
