#Infinite Monkey Theorem Checker
import random

def assortment_of_letters(count):
    alphabet = "abcdefghijklmnopqrstuvwxyz "
    word = ""
    for i in range(count):
        index = random.randint(0, 26)
        word += alphabet[index]
    return word

def check_word(word):
    str = assortment_of_letters(len(word))
    count = 0
    while str != word:
        count += 1
        str = assortment_of_letters(len(word))
        #print(str)
    print(count)
    return count


check_word("heys")
