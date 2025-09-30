import os

# Clear the screen (works on all OS)
os.system('cls' if os.name == 'nt' else 'clear')

# Take input
n = int(input("Enter the number: "))

# Logic to print the pyramid
for i in range(1, n + 1):
    print("  " * (n - i), end="")         # Spaces
    print("* " * (2 * i - 1), end="")     # Stars
    if i != n:
        print()  # New line except for last row

# Wait for a key press (Windows only)
try:
    import msvcrt
    msvcrt.getch()
except ImportError:
    input("\nPress Enter to exit...")  # Fallback for Linux/Mac
