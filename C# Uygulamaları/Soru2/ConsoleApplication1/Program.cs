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
            double ortalama = 0;
            int toplam = 0;
            for( int i =2 ; i <1000 ; i++)
            {
                toplam +=i ;
                ortalama = toplam / 998;

            }
            Console.Write("Ortalaması :" +ortalama);

            Console.ReadKey();
        }
    }
}
