# Tugas-Besar-Struktur-Data
# Untuk Percobaan Merancang Tugas Besar Struktur Data

from tkinter import *
from turtle import bgcolor


root = Tk()
#override the settings of the window
root.configure(bg="black")
root.geometry('1440x720')
root.title("Minesweeper Game")
root.resizable()

top_frame = Frame(
    root,
    bg='red', #Change later to black
    width=1440,
    height=180
)
top_frame.place(x=0, y=0 )

left_frame = Frame(
    root,
    bg='blue', # Change later to black
    width=360,
    height=540
)
left_frame.place(x=0, y=200)
# Run the window
root.mainloop()
