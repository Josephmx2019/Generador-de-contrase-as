from random import choice as c
from msvcrt import getch as g

def getch():
    """Lee un solo carácter de la entrada estándar."""
    return g().decode('utf-8')

def password_generator(num):
    # ΑαΔδΗηΚκΒβΕεΘθΛλΓγΖζΙιΜμΝνΠπ ΤτΧΞξΡρΥυΨΟοΣςσΦφΩχабвгдеёжзийклмнопрстуфхцчшщыюяъьэАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЫЮЯЪЬЭაბგდევზთიკლმნოპჟრსტუფქღყშჩცძწჭხჯჰあいうえおかきくけこさしすせそたちつってとなにぬねのはひふへほまみむめもやゆよらりるれろわゐゑをんがぎぐげござじずぜぞだぢづでどばびぶべぼぱぴぷぺぽアイウエオカキクケコサシスセソタチツっテトナニヌネノハヒフヘホマミムメモヤユヨラリルレロワヰヱヲンガギグゲゴザジズゼゾダヂヅデドバビブベボパピプペポ
    chars = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKMNÑOPQRSTUVWXYZ!#$%&/)='?¡¿\+*~}]`{([^<>-_.:,;|°¬"
    password = ""
    for i in range(num):
        password += c(chars)
    print(f"Your password is: {password}")

def main():
    opc = 'Y'
    while opc != 'N' and opc != 'n':
        num=int(input("Write the num of characters: "))
        password_generator(num)
        print("Continue? Y/N ")
        opc = getch().upper()
        print()
    print("Presiona cualquier tecla y despues enter para salir . . . ")
    getch()

if __name__=='__main__':
    main()
