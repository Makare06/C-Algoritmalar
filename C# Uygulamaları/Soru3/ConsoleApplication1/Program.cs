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
            
            Console.Write("Tabanı Giriniz :");
            int taban = Convert.ToInt32(Console.ReadLine());
            Console.Write("Kuvveti Giriniz :");
            int kuvvet = Convert.ToInt32(Console.ReadLine());
            int sonuc = 1;

            for(int i =1 ; i<=kuvvet;i++)
            {
                sonuc *=  taban;
            }

            Console.Write(sonuc);

            Console.ReadKey();
        }
    }
}
