# Shopping List Manager 🛒

Welcome to the Shopping List Manager, a simple command-line application developed in C++ to help you manage your shopping list efficiently. This application allows you to add, edit, delete, and list all the products in your shopping list, all from the comfort of your terminal.

## Features

- **Add Product**: Easily add a new product to your shopping list.
- **Edit Product**: Modify the details of an existing product on your list.
- **Delete Product**: Remove a product from your shopping list.
- **List Products**: View the entire list of products with their details.

## Getting Started

1. **Clone the Repository:**
   ```
   git clone https://github.com/aIexnder/shopping-list-manager.git
   ```

2. **Compile the Code:**
   ```
   g++ main.cpp -o shopping_list_manager
   ```

3. **Run the Application:**
   ```
   ./shopping_list_manager
   ```

## Usage

Once the application is running, you can use the following commands to manage your shopping list:

- **Add Product:**
  ```
  add <product_name> <quantity> <price>
  ```

- **Edit Product:**
  ```
  edit <product_name> <new_quantity> <new_price>
  ```

- **Delete Product:**
  ```
  delete <product_name>
  ```

- **List Products:**
  ```
  list
  ```

## Example

```
> add Milk 1 $2.50
Product added successfully.

> add Eggs 12 $1.99
Product added successfully.

> list
1. Milk - Quantity: 1, Price: $2.50
2. Eggs - Quantity: 12, Price: $1.99

> edit Milk 2 $3.00
Product edited successfully.

> list
1. Milk - Quantity: 2, Price: $3.00
2. Eggs - Quantity: 12, Price: $1.99

> delete Eggs
Product deleted successfully.

> list
1. Milk - Quantity: 2, Price: $3.00
```

## Contributing

Contributions are welcome! If you have any suggestions, bug reports, or enhancements, please open an issue or create a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

Happy shopping! 🛒
