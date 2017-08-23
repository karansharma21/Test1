from select_friend import select_friend
from steganography.steganography import Steganography

def send_message():
    friend_choice=select_friend()

    original_image=raw_input()
    output_image=raw_input()
    text=raw_input("Enter your message: ")

    #encrypt the message

    Steganography.encode(original_image, output_image, text)