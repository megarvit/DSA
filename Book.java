import java.io.Serializable;

public class Book implements Serializable {
    private String author;
    private String title;
    private double price;
    private int publishedYear;
    private String edition;

    // No-argument constructor
    public Book() {
    }

    // Getter and Setter methods

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public int getPublishedYear() {
        return publishedYear;
    }

    public void setPublishedYear(int publishedYear) {
        this.publishedYear = publishedYear;
    }

    public String getEdition() {
        return edition;
    }

    public void setEdition(String edition) {
        this.edition = edition;
    }

    // Method to display book information
    public void displayInfo() {
        System.out.println("Book Information:");
        System.out.println("Author: " + author);
        System.out.println("Title: " + title);
        System.out.println("Price: $" + price);
        System.out.println("Published Year: " + publishedYear);
        System.out.println("Edition: " + edition);
    }

    public class BookDemo {
    public static void main(String[] args) {
        // Create a new Book object
        Book book = new Book();

        // Set book properties
        book.setAuthor("George Orwell");
        book.setTitle("1984");
        book.setPrice(15.99);
        book.setPublishedYear(1949);
        book.setEdition("First Edition");

        // Display book information
        book.displayInfo();
    }
}
}