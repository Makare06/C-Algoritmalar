using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace mukemmelsayi
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Sayıyı giriniz: ");
            int toplam = 0;
            int sayi = int.Parse(Console.ReadLine());
            for (int i = 1; i < sayi/2; i++)
            {
                if (sayi % i==0)
                {
                    toplam += i;
                }
            }
            if (toplam == sayi)
                Console.WriteLine("Bu sayı mükemmeldir");
            else
                Console.WriteLine("Bu sayı mükemmel değildir");
            Console.ReadKey();
        }
    }
}
