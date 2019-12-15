using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("1. Sayıyı Giriniz :");
            int sayi1 = Convert.ToInt32(Console.ReadLine());
            Console.Write("2. Sayıyı Giriniz :");
            int sayi2 = Convert.ToInt32(Console.ReadLine());
            int toplam = 0;
            if (sayi1 < sayi2)
            {
                for (int i = sayi1 + 1; i < sayi2; i++)
                {
                    toplam += i;
                }
            }            
            else 
            {
                for( int i = sayi2+1 ; i < sayi1; i++)
                {
                    toplam += i;

                }
            }
           
            
            Console.Write("2 sayı arasındaki sayıların toplamı : " + toplam);
            Console.ReadKey();
        }
    }
}
