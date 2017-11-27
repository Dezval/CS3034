import sys


def main():
    data = input('Enter a string: ')
    print("string length is: ", string_length(data, 0))
    # attrition(data)
    print("String reversed is: ", reverse_string(data, ""))
    # print(remove_non_alpha(data))
    if check_palindrome(remove_non_alpha(data)):
        print(data, " is a palindrome.")
    else:
        print(data, " is NOT a palindrome.")


def attrition(data):
    print(data)
    if (len(data)) == 0:
        return
    else:
        attrition(data[1:])


def string_length(data, count):
    if(len(data)) == 0:
        return count
    else:
        count += 1
        return string_length(data[1:], count)


def reverse_string(data, rev):
    if(len(data)) == 0:
        return rev[::-1]
    else:
        rev += data[0]
        return reverse_string(data[1:], rev)


def remove_non_alpha(data):
    temp_string = ""
    if len(data) == 0:
        return data
    else:
        for letter in data:
            if letter.isalpha():
                temp_string += letter
    return temp_string.lower()


def check_palindrome(data):
    if len(data) == 0:
        return True
    else:
        if data[0] != data[-1]:
            return False
        else:
            return check_palindrome(data[1:-1])


if __name__ == "__main__":
    sys.exit(main())