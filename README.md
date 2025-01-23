# Train-Management-System
The Bunny Train Ticketing System is a C++ console application designed to manage train ticket bookings, cancellations, and feedback. It offers an interactive menu for users to navigate various functionalities like viewing train schedules, booking tickets, canceling reservations, and providing feedback.

Features
Train Schedule
Displays a list of available trains, including details like:

Train Name
Departure Location
Arrival Location
Ticket Price
Departure Time
Ticket Booking
Allows users to:

Select departure and arrival locations.
Enter passenger details (Name, CNIC, Mobile Number).
Book multiple seats and receive ticket details with seat numbers.
Ticket Cancellation
Users can cancel their tickets by providing a receipt code.

Feedback
Collects user feedback to improve the system.

Classes and Structure
The application is structured using the principles of Object-Oriented Programming (OOP) with the following classes:

Menu
Displays the main menu and handles user input for menu options.

Time
Stores time-related details such as departure time and format (AM/PM).

Train
Inherits from Time and includes train-specific details like name, departure location, arrival location, and ticket price.

Ticket
Inherits from Train and manages passenger details and ticket printing.

Usage
Menu Options
Show Train Schedule: Displays a list of all trains and their schedules.
Book Tickets: Allows ticket booking by specifying departure and arrival locations.
Cancel Ticket: Cancels a ticket by entering the receipt code.
Feedback: Collects user feedback.
