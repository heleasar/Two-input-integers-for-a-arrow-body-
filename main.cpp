def print_arrow(arrow_body, arrowhead):
    # Print arrowhead
    for i in range(1, arrowhead + 1):
        print(" " * (arrowhead - i) + "1" * i)

    # Print arrow body
    for i in range(arrow_body):
        print("0" * (arrowhead + i) + "1" * (arrow_body - i) + "1" * (arrow_body - i - 1))

    # Print the tail
    for i in range(arrow_body - 1):
        print("0" * (arrowhead + arrow_body - 1) + "1" * (arrow_body - i - 1) + "1" * (arrow_body - i - 2))

    # Print the base
    print("0" * (arrowhead + arrow_body - 1) + "1" * arrow_body)


if __name__ == "__main__":
    arrow_body, arrowhead = map(int, input().split())
    print_arrow(arrow_body, arrowhead)
