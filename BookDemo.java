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