import sys

def char_to_ascii(original_text):
    return [ord(i) for i in original_text]

def is_out_of_alphabet_range(ascii_val) :
    return (ascii_val < 91 and ascii_val + 13 >= 91) or (ascii_val >= 97 and ascii_val + 13 > 122)

def Encryption_of_text(original_text):

    ascii_list = char_to_ascii(original_text)
    Encrypted_text = ""

    for i in ascii_list :
        if(is_out_of_alphabet_range(i)) :
            Encrypted_text += chr(i - 13)
        else:
            Encrypted_text += chr(i + 13)

    return Encrypted_text

original_text = sys.argv[1]
Encrypted_text = Encryption_of_text(original_text)
print(Encrypted_text)
