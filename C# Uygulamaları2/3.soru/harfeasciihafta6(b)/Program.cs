using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace harfeasciihafta6
{
    class Program
    {
        static void Main(string[] args)
        {
            char harf;
            do
            {
                Console.Write("Harf Giriniz: ");
                harf = char.Parse(Console.ReadLine());
                Console.WriteLine("ASCII: "+(int)harf);
            } while (harf != 'A');

            Console.ReadKey();
        }
    }
}
