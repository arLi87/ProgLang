def check_string(s):
    if s:
        print(f"String '{s}' converted to True")
    else:
        print("Empty string '' converted to False")

check_string("Hello World")
check_string("")