// import java.util.Scanner;

// interface Arithmetic {
//     void performOperation(int a, int b, char operator);
// }

// class Calculator implements Arithmetic {
//     public void performOperation(int a, int b, char operator) {
//         switch (operator) {
//             case '+':
//                 System.out.println("Addition: " + (a + b));
//                 break;
//             case '-':
//                 System.out.println("Subtraction: " + (a - b));
//                 break;
//             case '*':
//                 System.out.println("Multiplication: " + (a * b));
//                 break;
//             case '/':
//                 if (b != 0) {
//                     System.out.println("Division: " + ((float)a / b));
//                 } else {
//                     System.out.println("Cannot divide by zero!");
//                 }
//                 break;
//             case '%':
//                 if (b != 0) {
//                     System.out.println("Modulus: " + (a % b));
//                 } else {
//                     System.out.println("Cannot perform modulus operation with zero!");
//                 }
//                 break;
//             default:
//                 System.out.println("Invalid operator!");
//         }
//     }
// }

// public class CalculatorApp {
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);
//         Calculator calculator = new Calculator();

//         System.out.print("Enter first number: ");
//         int num1 = scanner.nextInt();

//         System.out.print("Enter second number: ");
//         int num2 = scanner.nextInt();

//         System.out.print("Enter operator (+, -, *, /, %): ");
//         char operator = scanner.next().charAt(0);

//         calculator.performOperation(num1, num2, operator);

//         scanner.close();
//     }
// }

interface Arithmetic {
    public void add(int a, int b);
    public void sub(int a, int b);
    public void mul(int a, int b);
    public void div(float a, float b);
    public void mod(int a, int b);
}

class Calculator implements Arithmetic {
    public void add(int a, int b) {
        int result = a + b;
        System.out.println("Addition: " + result);
    }

    public void sub(int a, int b) {
        int result = a - b;
        System.out.println("Subtraction: " + result);
    }

    public void mul(int a, int b) {
        int result = a * b;
        System.out.println("Multiplication: " + result);
    }

    public void div(float a, float b) {
        if (b != 0) {
            float result = a / b;
            System.out.println("Division: " + result);
        } else {
            System.out.println("Cannot divide by zero!");
        }
    }

    public void mod(int a, int b) {
        if (b != 0) {
            int result = a % b;
            System.out.println("Modulus: " + result);
        } else {
            System.out.println("Cannot perform modulus operation with zero!");
        }
    }
}

public class CalculatorApp {
    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        int num1 = 10;
        int num2 = 5;
        float floatNum1 = 10.5f;
        float floatNum2 = 2.5f;

        calculator.add(num1, num2);
        calculator.sub(num1, num2);
        calculator.mul(num1, num2);
        calculator.div(floatNum1, floatNum2);
        calculator.mod(num1, num2);
    }
}



