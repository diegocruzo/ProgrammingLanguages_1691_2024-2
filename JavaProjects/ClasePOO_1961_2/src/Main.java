public class Main {
    public static void main(String[] args) {

        // Crear una instancia de persona
        Persona juan = new Persona("Juan Pérez", "CC", 123456789);
        // Realizar acciones con la instancia (objeto) de Persona
        juan.setFechaNacimiento(17,9,2000);
        juan.setSexoBiologico("m");
        System.out.println("Nombre: " + juan.getNombre());
        System.out.println("Saludo: " + juan.expresarse());
        System.out.println("Fecha de nacimiento: " + juan.getFechaNacimiento());
        System.out.println("Sexo biológico: " + juan.getSexoBiologico());
        System.out.println("Tipo de documento: " + juan.getTipoId());
        System.out.println("Número de documento: " + juan.getNumId());
    }
}
