using System;
using System.Text;

class Program
{
    static Random random = new Random();

    static string PasswordGenerator(int num)
    {
        string chars = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKMNÑOPQRSTUVWXYZ!#$%&/()='?¡¿+*~}]`{[^<>-_.:,;|°¬";
        StringBuilder password = new StringBuilder();
        
        for (int i = 0; i < num; i++)
        {
            password.Append(chars[random.Next(chars.Length)]);
        }
        return password.ToString();
    }

    static void Main(string[] args)
    {
        char opc = 'Y';
        while (opc != 'N' && opc != 'n')
        {
            Console.Write("Write the num of characters: ");
            int num = int.Parse(Console.ReadLine());
            string generatedPassword = PasswordGenerator(num);
            Console.WriteLine("Your password is: " + generatedPassword);
            Console.Write("Continue? Y/N ");
            opc = Console.ReadKey().KeyChar;
            Console.WriteLine();
        }

        Console.WriteLine("Press any letter from the keyborad ");
        Console.ReadKey();
    }
}
