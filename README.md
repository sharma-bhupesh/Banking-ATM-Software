# Apna Bank: C++ CLI ATM Simulation 🏧

![Language](https://img.shields.io/badge/language-C%2B%2B-blue.svg)
![Platform](https://img.shields.io/badge/platform-Windows%20%7C%20macOS%20%7C%20Linux-lightgrey.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

Welcome to the Apna Bank ATM Simulation – a classic command-line banking experience built with C++. This project serves as an excellent demonstration of fundamental programming concepts in a practical, easy-to-understand application.

This simple yet functional ATM interface allows users to perform essential banking transactions like checking their balance, depositing funds, and withdrawing money, all protected by a secure PIN system.

## ✨ Key Features

* **Secure PIN Authentication**: Access is protected by a 4-digit PIN.
* **Balance Inquiry**: Instantly check your current account balance.
* **Fund Deposits**: Add funds to your account with built-in deposit limits.
* **Fund Withdrawals**: Withdraw money safely, with checks to prevent overdraft.
* **Interactive Menu**: A clean, menu-driven interface for a smooth user experience.
* **Cross-Platform**: Written in standard C++, it can be compiled and run on any major operating system.

## 📸 Demo

Here is a quick walkthrough of the application in action:
Welcome to Apna Bank.

Please enter your pin or type 0000 to exit: 1327
PIN is correct. Proceeding to main menu.

Please select one of the following options:

View your current balance.

Deposit funds into your account.

Withdraw funds from your account.

Exit.

2
You may withdraw any amount up to $9999.00.
To go back to the main menu, you may select $0.
Please enter how much you would like to deposit: $
500
You have deposited $500.00. Your current balance is $500.00.

Please select one of the following options:

View your current balance.

Deposit funds into your account.

Withdraw funds from your account.

Exit.

3
You may withdraw any amount up to and including your current balance, which is $500.00.
To go back to the main menu, you may select $0.
Please enter how much you would like to withdraw: $
120.50
You have withdrawn $120.50. Your current balance is $379.50.

Please select one of the following options:

View your current balance.

Deposit funds into your account.

Withdraw funds from your account.

Exit.

4
Thank you for banking with us. Goodbye.

## 🛠️ Built With

* **C++**: The core programming language.
* **Standard Libraries**:
    * `<iostream>` for handling console input and output.
    * `<iomanip>` for formatting currency values.

## 🚀 Getting Started

To get a local copy up and running, follow these simple steps.

### Prerequisites

You need a C++ compiler installed on your machine. The most common is **g++**, which is part of the GNU Compiler Collection (GCC).

* **Windows**: Install [MinGW](https://www.mingw-w64.org/downloads/) or use the C++ workload in Visual Studio.
* **macOS**: Install Xcode Command Line Tools by running `xcode-select --install` in your terminal.
* **Linux**: Install the `build-essential` package.
    ```sh
    sudo apt-get install build-essential
    ```

### Installation & Execution

1.  **Clone the repository (replace with your actual repo URL):**
    ```sh
    git clone [https://github.com/your-username/your-repo-name](https://github.com/sharma-bhupesh/Banking-ATM-Software.git)
    ```
2.  **Navigate to the project directory:**
    ```sh
    cd your-repo-name
    ```
3.  **Compile the code (assuming the file is named `bank.cpp`):**
    ```sh
    g++ bank.cpp -o atm
    ```
4.  **Run the application:**
    ```sh
    ./atm
    ```
    (On Windows, you may need to run `atm.exe`)

## 📖 Usage

Upon launching the application, you will be prompted to enter your PIN.
* The default PIN is hardcoded as `1327`.
* Enter `0000` to exit the program at the PIN prompt.

Once authenticated, use the on-screen menu by entering the number corresponding to your desired action.

## 🛣️ Roadmap

This is a simple project, but future enhancements could include:

- [ ] **Multiple User Accounts**: Allow switching between different users.
- [ ] **Data Persistence**: Save account balances to a file so data isn't lost on exit.
- [ ] **Object-Oriented Design**: Refactor the code into `Account` and `ATM` classes.
- [ ] **Enhanced Error Handling**: Gracefully handle non-numeric inputs.

See the [open issues](https://github.com/your-username/your-repo-name/issues) for a full list of proposed features (and known issues).

## 🤝 Contributing

Contributions are what make the open-source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".

1.  Fork the Project
2.  Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3.  Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4.  Push to the Branch (`git push origin feature/AmazingFeature`)
5.  Open a Pull Request

---
Thank you for banking with us. Goodbye.

