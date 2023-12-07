# Vending Machine Simulator

Welcome to the Vending Machine Simulator, a C++ program designed to emulate the experience of interacting with a vending machine. This project utilizes object-oriented programming principles to create a modular and extensible structure.

## Overview

The program consists of two classes: `vending` and `sell`. The `vending` class sets up the initial state of the vending machine by populating an array of `softdrink` structures with information about available drinks. It provides a user-friendly interface for selecting drinks and displays the current stock and prices.

The `sell` class inherits from `vending` and implements the vending machine's selling logic. Users can choose a drink, insert money, and receive their selected beverage along with any change. The program handles various scenarios, such as insufficient funds and out-of-stock situations.

## Features

- **Dynamic Menu Display:** The vending machine dynamically displays the available drinks, prices, and remaining quantities, providing a user-friendly interface.

- **Exception Handling:** The program incorporates exception handling to gracefully handle out-of-stock situations, ensuring a smooth user experience.

- **Change Calculation:** Upon purchasing a drink, the simulator calculates and displays the change, enhancing realism in the vending machine experience.

- **Modularity:** The code is structured with modularity in mind, allowing for easy extension and modification. Additional drinks or features can be seamlessly integrated into the existing framework.

## Getting Started

To run the Vending Machine Simulator, simply compile and execute the provided C++ code. Follow the on-screen instructions to choose a drink, insert money, and enjoy a virtual beverage.

## Contributing

Contributions are welcome! Feel free to fork this repository, make enhancements, and submit pull requests. Whether it's adding new drinks, improving the user interface, or enhancing the code structure, your contributions can make this simulator even better.


