<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body style="font-family: Arial, sans-serif; line-height: 1.6; margin: 20px; background-color: #f8f8f8;">

<h1 style="color: #333;">XYZ Hotel Menu System</h1>

<p>A simple console-based menu system for XYZ Hotel, written in C.</p>

<h2 style="color: #333;">Description</h2>
<p>This program allows users to select food items from a menu, specify the number of plates, and calculate the total cost. The program continues to prompt the user for input until they choose to exit.</p>

<h2 style="color: #333;">Features</h2>
<ul>
    <li>Simple menu system with 3 food items: Samosa, Dosa, and Tea</li>
    <li>User can select food items and specify the number of plates</li>
    <li>Program calculates the sub-total and grand total</li>
    <li>User can choose to add more food items or exit the program</li>
</ul>

<h2 style="color: #333;">Installation</h2>
<p>To compile and run this program, you'll need a C compiler (such as GCC) installed on your system. You can also use an Integrated Development Environment (IDE) like Visual Studio or IntelliJ IDEA to compile and run the program.</p>

<h2 style="color: #333;">Usage</h2>
<ol>
    <li>Compile the program using a C compiler (e.g. <code style="background-color: #eef; padding: 2px 4px; border-radius: 4px;">gcc menu_system.c -o menu_system</code>) or using an IDE like Visual Studio or IntelliJ IDEA.</li>
    <li>Run the program: <code style="background-color: #eef; padding: 2px 4px; border-radius: 4px;">./menu_system</code> (if compiled using GCC) or press the "Run" button in your IDE.</li>
    <li>Follow the on-screen prompts to select food items and calculate the total cost.</li>
</ol>

<h2 style="color: #333;">Code Structure</h2>
<p>The program consists of a single <code style="background-color: #eef; padding: 2px 4px; border-radius: 4px;">main</code> function, which contains a <code style="background-color: #eef; padding: 2px 4px; border-radius: 4px;">do-while</code> loop that continues to prompt the user for input until they choose to exit. The program uses a <code style="background-color: #eef; padding: 2px 4px; border-radius: 4px;">switch</code> statement to determine the price of the selected food item.</p>

<h2 style="color: #333;">Example Use Case</h2>
<pre style="background-color: #eef; padding: 10px; border-radius: 5px; overflow: auto;">
Welcome To XYZ Hotel
Menu:
1 Samosa 20/-
2 Dosa 30/-
3 Tea 10/-

Enter your Choice: 1
Enter number of plates: 2
Sub-Total=40.00
Wanna add more food(Y/N): Y

Welcome To XYZ Hotel
Menu:
1 Samosa 20/-
2 Dosa 30/-
3 Tea 10/-

Enter your Choice: 2
Enter number of plates: 1
Sub-Total=30.00
Wanna add more food(Y/N): N

Your Grand Total is: 70.00
T H A N K  Y O U !
</pre>


<h2 style="color: #333;">Contributing</h2>
<p>If you'd like to contribute to this project, please fork the repository and submit a pull request with your changes.</p>

<h2 style="color: #333;">Acknowledgments</h2>
<p>Thanks to the creators of the C programming language and the GCC compiler for making this project possible!</p>

</body>
</html>

