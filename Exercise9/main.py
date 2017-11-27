def main():
    min_input = -300
    max_input = -300
    print("Input should be in Celsius, output will return a table converting your input values to Fahrenheit")
    print("Your values can be between -273 and 5000")
    while min_input < -273 or min_input > 5000:
        min_input = int(input("Enter min value for table: "))
        if min_input < -273:
            print("You must enter a number greater than -273")
        elif min_input > 5000:
            print("You must enter a number less than 5000")
    while max_input < min_input or max_input > 5000:
        max_input = int(input("Enter max value for table: "))
        if max_input < min_input:
            print("You must enter a number greater than the minimum you put above")
        elif max_input > 5000:
            print("You must enter a number less than 5000")
    print(" C   |   F")
    for i in range(min_input,max_input+1):
        print("{:.2f}".format(i), " | ", "{:.2f}".format(i*9.0/5.0+32.0))


if __name__ == "__main__":
    main()