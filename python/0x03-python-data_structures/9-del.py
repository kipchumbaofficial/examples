#!/usr/bin/python3

'''Using del
'''
def main():
    lst = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

    print("List:", lst)
    index = int(input("Enter the index to delete:"))
    if index >= len(lst):
        print("Index out of range!")
        return
    del lst[index]

    print("After deletion:", lst)
main()
