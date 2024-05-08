import javax.swing.*;
import java.awt.event.*;

public class EventHandlingDemo extends JFrame implements ActionListener, MouseListener, MouseMotionListener {
    JLabel label;
    JButton button;

    EventHandlingDemo() {
        label = new JLabel("No event yet.");
        label.setBounds(50, 50, 200, 30);

        button = new JButton("Click me!");
        button.setBounds(50, 100, 100, 30);
        button.addActionListener(this);

        add(label);
        add(button);

        addMouseListener(this);
        addMouseMotionListener(this);

        setSize(300, 200);
        setLayout(null);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void actionPerformed(ActionEvent e) {
        label.setText("Button clicked!");
    }

    public void mouseClicked(MouseEvent e) {
        label.setText("Mouse clicked at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mousePressed(MouseEvent e) {
        label.setText("Mouse pressed at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mouseReleased(MouseEvent e) {
        label.setText("Mouse released at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mouseEntered(MouseEvent e) {
        label.setText("Mouse entered at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mouseExited(MouseEvent e) {
        label.setText("Mouse exited at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mouseDragged(MouseEvent e) {
        label.setText("Mouse dragged at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mouseMoved(MouseEvent e) {
        label.setText("Mouse moved at (" + e.getX() + ", " + e.getY() + ")");
    }

    public static void main(String[] args) {
        new EventHandlingDemo();
    }
}
