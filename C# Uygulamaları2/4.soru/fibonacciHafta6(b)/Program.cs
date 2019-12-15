using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace kacincifibonaccihafta6_b_
{
    class Program
    {
        static void Main(string[] args)
        {
            int ilksayi = 1;
            int ikincisayi = 1;
            int aradeger = 0;
            int sayac = 1;//1 + 1 kısmını atladığımızdan sayac 1 den başlıyor
            Console.Write("(Kendisine kadar olan fibonacci sayılarını sıralayacak) Sayı giriniz: ");
            int sayi = int.Parse(Console.ReadLine());
           
            while (ikincisayi + ilksayi <= sayi)
            {
                aradeger = ikincisayi;
                ikincisayi = ikincisayi + ilksayi;
                ilksayi = aradeger;
                sayac++;
            }

            if (ikincisayi == sayi)
            {
                Console.WriteLine("Sayı " + sayac + " fibonaççi sayısı");
            }
            else
            {
                Console.WriteLine("Sayı fibonaççi sayısı değil");
            }
            Console.ReadKey();
        }
    }
}
