#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // For usleep function
#include <time.h>    // For random number generation

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

void slow_print(const char *text, unsigned int delay, const char *color) {
    while (*text) {
        printf("%s%c", color, *text);
        fflush(stdout);
        usleep(delay * 1000);  // usleep takes microseconds, so multiply by 1000 for milliseconds
        text++;
    }
    printf(RESET);  // Reset the color
}

void pause_program() {
    printf("\nPress Enter to continue...");
    getchar();
}

void displayInformation() {
    slow_print("Welcome to the AVR128DB48 DevHeads Comprehensive Guide!\n", 50, BLUE);
    slow_print("The AVR128DB48 DevHeads is a development board from Microchip Technology designed for prototyping with the AVR DA family of microcontrollers.\n\n", 50, BLUE);

    slow_print("Key Features:\n", 50, BLUE);
    slow_print("1. High Performance: Features a high-performance 8-bit AVR CPU core running at up to 24 MHz.\n", 50, BLUE);
    slow_print("2. Advanced Peripherals: Includes a variety of advanced peripherals like ADCs, DACs, and analog comparators for versatile applications.\n", 50, BLUE);
    slow_print("3. Connectivity: Equipped with multiple communication interfaces such as USART, SPI, and I2C.\n", 50, BLUE);
    slow_print("4. Robust I/O: Offers numerous I/O pins with multiple functionalities to support various sensor and actuator interfaces.\n", 50, BLUE);
    slow_print("5. Low Power Consumption: Designed for low-power applications, ideal for battery-operated devices.\n", 50, BLUE);
    slow_print("6. Development Tools: Supported by a rich ecosystem of development tools including Microchip Studio and MPLAB X.\n", 50, BLUE);
}

void quizUser() {
    int answer;

    slow_print("\nQuiz Section:\n", 50, GREEN);
    slow_print("1. What is the maximum operating frequency of the AVR128DB48?\n", 50, GREEN);
    slow_print("1. 16 MHz\n2. 24 MHz\n3. 32 MHz\n", 50, GREEN);
    scanf("%d", &answer);
    getchar();  // To consume the newline character left by scanf
    if (answer == 2) {
        slow_print("Correct!\n", 50, GREEN);
    } else {
        slow_print("Incorrect. The correct answer is 24 MHz.\n", 50, GREEN);
    }

    slow_print("\n2. Which communication interfaces are available on the AVR128DB48?\n", 50, GREEN);
    slow_print("1. CAN\n2. Ethernet\n3. USART, SPI, I2C\n", 50, GREEN);
    scanf("%d", &answer);
    getchar();  // To consume the newline character left by scanf
    if (answer == 3) {
        slow_print("Correct!\n", 50, GREEN);
    } else {
        slow_print("Incorrect. The correct answer is USART, SPI, I2C.\n", 50, GREEN);
    }
}

void displayAdvantages() {
    slow_print("\nAdvantages:\n", 50, YELLOW);
    slow_print("1. Versatility: Supports a wide range of applications with its advanced peripherals and communication interfaces.\n", 50, YELLOW);
    slow_print("2. Low Power: Optimized for low power consumption, making it suitable for battery-operated devices.\n", 50, YELLOW);
    slow_print("3. Development Support: Rich ecosystem of development tools and libraries.\n", 50, YELLOW);
}

void quizUserOnAdvantagesAndUseCases() {
    int answer;

    slow_print("\nQuiz Section on Advantages and Use Cases:\n", 50, CYAN);
    slow_print("1. What is one advantage of the AVR128DB48's advanced peripherals?\n", 50, CYAN);
    slow_print("1. Limited functionality\n2. Versatility\n3. High power consumption\n", 50, CYAN);
    scanf("%d", &answer);
    getchar();  // To consume the newline character left by scanf
    if (answer == 2) {
        slow_print("Correct!\n", 50, CYAN);
    } else {
        slow_print("Incorrect. The correct answer is Versatility.\n", 50, CYAN);
    }

    slow_print("\n2. Which of the following is a use case for the AVR128DB48?\n", 50, CYAN);
    slow_print("1. Desktop computing\n2. Battery-operated devices\n3. Gaming consoles\n", 50, CYAN);
    scanf("%d", &answer);
    getchar();  // To consume the newline character left by scanf
    if (answer == 2) {
        slow_print("Correct!\n", 50, CYAN);
    } else {
        slow_print("Incorrect. The correct answer is Battery-operated devices.\n", 50, CYAN);
    }
}

void displayUseCases() {
    slow_print("\nUse Cases:\n", 50, MAGENTA);
    slow_print("1. Embedded Systems: Ideal for creating low-power embedded systems.\n", 50, MAGENTA);
    slow_print("2. Sensor Interfaces: Suitable for interfacing with various sensors and actuators.\n", 50, MAGENTA);
    slow_print("3. Prototyping: Great for prototyping and testing new designs quickly.\n", 50, MAGENTA);
    slow_print("4. IoT Devices: Perfect for developing Internet of Things applications with low power requirements.\n", 50, MAGENTA);
}

void displayImplementationGuide() {
    slow_print("\nPractical Implementation Guide:\n", 50, RED);

    slow_print("1. Setting Up the Board:\n", 50, RED);
    slow_print("   - Connect the AVR128DB48 to your PC using the provided USB cable.\n", 50, RED);
    slow_print("   - Install the necessary drivers and software tools from the Microchip website.\n", 50, RED);
    slow_print("   - Follow the user manual to set up the development environment.\n\n", 50, RED);

    slow_print("2. Creating Your First Project:\n", 50, RED);
    slow_print("   - Open the development environment and create a new project.\n", 50, RED);
    slow_print("   - Choose the appropriate AVR CPU core and configuration.\n", 50, RED);
    slow_print("   - Write your application code, leveraging the advanced peripherals.\n\n", 50, RED);

    slow_print("3. Compiling and Uploading Code:\n", 50, RED);
    slow_print("   - Compile your project using the provided toolchain.\n", 50, RED);
    slow_print("   - Upload the compiled code to the AVR128DB48 using the USB interface.\n", 50, RED);
    slow_print("   - Monitor the output and debug any issues using the built-in debugging tools.\n\n", 50, RED);

    slow_print("4. Experimenting with Peripherals:\n", 50, RED);
    slow_print("   - Connect additional sensors or actuators to the I/O pins.\n", 50, RED);
    slow_print("   - Integrate and test these peripherals within your project to enhance functionality.\n", 50, RED);
}

void displayCodingPractice() {
    slow_print("\nCoding Practice Section:\n", 50, WHITE);

    slow_print("Example 1: Blinking LED\n", 50, WHITE);
    slow_print("/* This example shows how to blink an LED connected to a GPIO pin */\n", 50, WHITE);
    slow_print("void blink_led() {\n", 50, WHITE);
    slow_print("    while (1) {\n", 50, WHITE);
    slow_print("        gpio_set_pin_high(LED_PIN);\n", 50, WHITE);
    slow_print("        delay_ms(1000);\n", 50, WHITE);
    slow_print("        gpio_set_pin_low(LED_PIN);\n", 50, WHITE);
    slow_print("        delay_ms(1000);\n", 50, WHITE);
    slow_print("    }\n", 50, WHITE);
    slow_print("}\n\n", 50, WHITE);

    slow_print("Example 2: UART Communication\n", 50, WHITE);
    slow_print("/* This example demonstrates basic UART communication */\n", 50, WHITE);
    slow_print("void uart_communication() {\n", 50, WHITE);
    slow_print("    // Initialize UART\n", 50, WHITE);
    slow_print("    uart_init(UART_PORT, BAUD_RATE);\n", 50, WHITE);
    slow_print("\n", 50, WHITE);
    slow_print("    while (1) {\n", 50, WHITE);
    slow_print("        // Send and receive data over UART\n", 50, WHITE);
    slow_print("    }\n", 50, WHITE);
    slow_print("}\n\n", 50, WHITE);

    slow_print("Quiz Section on Coding and Projects:\n", 50, WHITE);
    slow_print("1. What function is used to initialize the UART port?\n", 50, WHITE);
    slow_print("1. uart_init\n2. uart_start\n3. uart_open\n", 50, WHITE);
    
    int answer;
    scanf("%d", &answer);
    getchar();  // To consume the newline character left by scanf
    if (answer == 1) {
        slow_print("Correct!\n", 50, WHITE);
    } else {
        slow_print("Incorrect. The correct answer is uart_init.\n", 50, WHITE);
    }

    slow_print("\n2. In the blinking LED example, what function is used to set the LED pin high?\n", 50, WHITE);
    slow_print("1. gpio_set_pin_on\n2. gpio_set_pin_high\n3. gpio_enable_pin\n", 50, WHITE);
    scanf("%d", &answer);
    getchar();  // To consume the newline character left by scanf
    if (answer == 2) {
        slow_print("Correct!\n", 50, WHITE);
    } else {
        slow_print("Incorrect. The correct answer is gpio_set_pin_high.\n", 50, WHITE);
    }
}

int main() {
    srand(time(NULL)); 

    displayInformation();
    pause_program();

    quizUser();
    pause_program();

    displayAdvantages();
    pause_program();

    quizUserOnAdvantagesAndUseCases();
    pause_program();

    displayUseCases();
    pause_program();

    displayImplementationGuide();
    pause_program();

    displayCodingPractice();
    pause_program();

    return 0;
}
