public class Mamifero {

    private String nombre;

    //Constuctor
    public Mamifero() {
        this.nombre = "Por definir";
    }
    public Mamifero(String nombre) {
        this.nombre = nombre;
    }

    // Método para todos los mamíferos
    public String expresarse(){
        return "Por definir";
    }

    // Getters y Setters
    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
}
